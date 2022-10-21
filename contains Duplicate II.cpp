class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l,r=0,i,j;
        map<int,int>mp;
        
        for(l=0;l<nums.size();l++)
        {
            while(abs(l-r)<=k&&r<nums.size())
            {
                if(mp.find(nums[r])!=mp.end())
                    return true;
                mp[nums[r]]++;
                r++;
            }
            mp.erase(nums[l]);
        }
        
        return false;
        
        
    }
};