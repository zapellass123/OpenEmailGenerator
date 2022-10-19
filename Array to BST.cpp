#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedArrayToBST(vector<int>& nums) {
        vector<int> v;
        helper(nums, 0, nums.size()-1, v);
        return v;
    }
    
    void helper(vector<int>&nums, int low, int high, vector<int>&v){
        if(low <= high){
            int mid = low + (high-low)/2;
            v.push_back(nums[mid]);
            helper(nums, low, mid-1, v);
            helper(nums, mid+1, high, v);
        }
        return;
    }
};


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}




