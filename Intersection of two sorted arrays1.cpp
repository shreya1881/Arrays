#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int> ans;
	for(int i=0; i<n; i++){
		int element = arr1[i];

		for(int j=0; j<m; j++){
			if(element == arr2[j]){
				ans.push_back(element);
				arr2[j]=-123;
				break;
			}
		}
	}
	return ans;
}