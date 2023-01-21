// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}

int main() {
    // Write C++ code here
   int n;
   cin>>n;
   int arr[n];
   int ans=0;
   for(int i=0; i<n; i++)
   cin>>arr[i];
   for(int i=0; i<n; i++){
       ans=ans^arr[i];
   }
   cout<<ans;
    return 0;
}