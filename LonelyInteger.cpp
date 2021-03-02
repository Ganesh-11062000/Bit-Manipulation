/*
link - https://www.hackerrank.com/challenges/lonely-integer/problem

Problem Statement:
Given an array of integers, where all elements except one occur twice, 
find: the unique element.
Ex: a = [1,2,3,4,3,2,1] return 4
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;   //size of array
    int arr[n];

    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    int res = 0;
    for(int i = 0; i < n;i++){
        res = res^arr[i];           //A^A = 0 and A^0 = A
    }

    cout << res << endl;
    return 0;
}