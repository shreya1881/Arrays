// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    int ans=0;
    
    //XOR all array elements
    for(int i=0; i<n; i++)
    ans = ans^arr[i];
    
    //XOR 1 to n-1
    for(int i=1; i<n; i++)
    {
        ans = ans^i;
    }

    cout<<ans;
    return 0;
}