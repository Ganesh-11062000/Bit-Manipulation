/*
link - https://www.hackerrank.com/challenges/counter-game/problem

Problem Statement:
Louise and Richard have developed a numbers game. 
They pick a number and check to see if it is a power of 2. 
If it is, they divide it by 2. 
If not, they reduce it by the next lower number which is a power of 2. 
Whoever reduces the number to  wins the game. 
Louise always starts.
Given an initial value, determine who wins the game.
Ex: for n = 132 [132->4->2->1] returns Louise
*/

#include<bits/stdc++.h>
using namespace std;

long countSetBits(long n){
    long cnt = 0;
    while(n>0){
        n = n&(n-1);
        cnt++;
    }
    return cnt;
}

long firstSetBit(long n){
    long cnt = 0;
    while(n>0){
        cnt++;
        if(n&1){
            break;
        }
        n = n >> 1;
    }
    return cnt;
}

// Complete the counterGame function below.
string counterGame(long n) {

    long f,setBits,res = 0;

    if(n==1){
        return "Richard";
    }

    setBits = countSetBits(n);
    f = firstSetBit(n);
    
    if(setBits==1){
        res = f%2;
    }else{
        res = (setBits-1)+f%2;
        res = res%2;
    }
    
    
    if(res==0){
        return "Louise";
    }else{
        return "Richard";
    }
}

int main(){
    long n;
    cin >> n;
   
    cout << counterGame(n) << endl;    
    return 0;
}