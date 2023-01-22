class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        for(int i=0; i<mp.size(); i++){
            if(mp[i]==2)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};