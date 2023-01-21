#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
   int start=0;
   int j = start+1;
   while(start<n && j<n && start<=j){
       swap(arr[start],arr[j]);
       start+=2;
       j+=2;
   }
   for(int i=0; i<n; i++)
   cout<<arr[i]<<" ";
    return 0;
}