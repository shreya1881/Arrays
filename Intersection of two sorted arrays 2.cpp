#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int> ans;
	unordered_map<int,int>mp;
	for(int i=0; i<n; i++){
		mp[arr1[i]]++;
	}
	for(int i=0; i<m; i++){
		if(mp[arr2[i]]!=0)
		{
			ans.push_back(arr2[i]);
			mp[arr2[i]]--;
		}
	}

	if(ans.size()==0)
	ans.push_back(-1);
	return ans;
}