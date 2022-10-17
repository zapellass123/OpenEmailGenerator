//it is one the most efficient solution for 4sum problem.It is a very important and good problem.
//this is my c++ solution
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        if(nums.size() < 4)
            return ans;

        sort(nums.begin(),nums.end());

        for(int i=0; i<nums.size()-3; i++)
        {
            for(int j=i+1; j<nums.size()-2; j++)
            {
                long target_2 = (long)(target) - nums[i] - nums[j];
                int left = j + 1;
                int right = nums.size()-1;
                while(left < right)
                {
                    int sum = nums[left] + nums[right];
                    if(sum > target_2)
                        right--;
                    else if(sum < target_2)
                        left++;
                    else
                    {
                        vector<int> quadruplets(4,0);
                        quadruplets[0] = nums[i];
                        quadruplets[1] = nums[j];
                        quadruplets[2] = nums[left];
                        quadruplets[3] = nums[right];

                        ans.push_back(quadruplets);

                        // in qua elements should be unique so move over duplicates
                        while(left < right && nums[left] == quadruplets[2])
                            left++;
                        while(left < right && nums[right] == quadruplets[3])
                            right--;
                    }
                }
                // in qua elements should be unique so move over duplicates
                while(j+1 < n-2 && nums[j] == nums[j+1]) j++;
            }
			 // in qua elements should be unique so move over duplicates
            while(i+1 < n-3 && nums[i] == nums[i+1]) i++;

        }
        return ans;
    }
};
