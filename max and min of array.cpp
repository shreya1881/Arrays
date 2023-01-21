#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[1000000];
  for(int i=0; i<n; i++)
  cin>>arr[i];
  int max=INT_MIN;
  int min= INT_MAX;
  for(int i=0; i<n; i++)
  {
    if(arr[i]>max)
    max=arr[i];
  }
  for(int i=0; i<n; i++){
    if(arr[i]<min)
    min=arr[i];
  }
  cout<<"Max element: "<<max<<endl;
  cout<<"MIN elemenet: "<<min<<endl;
  return 0;
  }