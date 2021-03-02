/*
link - https://www.hackerrank.com/challenges/sum-vs-xor/problem

Problem Statement:
Given an integer n, find each x such that:
0 <= x <= n
n + x == n ^ x
*/

#include<bits/stdc++.h>
using namespace std;

long cnt_zeros(long n){
    long cnt = 0;

    while(n>0){
        if(!(n&1)){
            cnt++;
        }
        n = n >> 1;
    }
    return cnt;
}

// Complete the sumXor function below.
long sumXor(long n) {
    
    long p = cnt_zeros(n);
    long res = 1L << p;
    return res;
}

int main(){
    long n;
    cin >> n;

    cout << sumXor(n) << endl;
    
    return 0;
}