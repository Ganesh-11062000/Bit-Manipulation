/*
link - https://www.hackerrank.com/challenges/maximizing-xor/problem

Problem Statement:
Given two integers, l and r, 
find: the maximal value of a xor b, 
such that l <= a <= b <= r
Ex: (l,r) = (11,12) => [(11,11),(11,12),(12,12)] returns (11^12) = 7
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,r;
    cin >> l >> r;
    int max_xor = 0,res;

    for(int i = l; i <= r;i++){
        for(int j = l;j <= r;j++){
            res = i^j;
            if(res > max_xor){
                max_xor = res;
            }
        }
    }

    cout << max_xor << endl;
    return 0;
}