  \*
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
  *\


int maxArea(vector<int>& height) {
        
        int left=0;
        int right = height.size()-1;
        int max_area = 0;
        
        while(left<right)
        {
            if(height[left] < height[right])
            {
                max_area = max(max_area, height[left] * (right-left) );
                left++;
            }
            else
            {
                max_area = max(max_area, height[right] * (right-left) );
                right--;
            }
        }
        return max_area;
        
    }
