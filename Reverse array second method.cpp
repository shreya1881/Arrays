// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}

int main() {
    // Write C++ code here
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++)
   cin>>arr[i];
   reverse(arr,n);
   print(arr,n);
    return 0;
}