/*
link- https://www.hackerrank.com/challenges/flipping-bits/problem

Problem Statement:
You will be given a list of 32 bit unsigned integers. 
Flip all the bits (1->0 and 0->1) and return the result as an unsigned integer.
*/

#include<bits/stdc++.h>
using namespace std;

long flippedOutput(long n){
    long res = 0;
    int digit_count = 0;


    while(n>0){
        if(!(n&1)){
            res = res + (1L<<digit_count);
        }
        digit_count++;
        n = n >> 1;
    }
    while(digit_count < 32){    
        res = res + (1L<<digit_count);
        digit_count++;
    }

    return res;
}

int main(){
    unsigned long n;
    cin >> n;
    cout << flippedOutput(n);
    return 0;
}

/*
Hack to Solve this in one line: (2^32-1) - n
long flippedOutput(long n){
    return 4294967295 - n;
}
*/

