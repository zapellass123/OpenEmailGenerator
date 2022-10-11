 vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> occurence;
        for(int i=0;i<nums2.size();i++)
            occurence[nums2[i]]=i;
        
        vector<int> ans;
        stack<int> st;
        st.push(nums2[nums2.size()-1]);
        ans.push_back(-1);
        for(int i=nums2.size()-2;i>=0;i--){
            
            while( st.size()!=0 && st.top()<=nums2[i])
                st.pop();
            
            if(st.size()==0)
                ans.push_back(-1);
            else
                ans.push_back(st.top());
            st.push(nums2[i]);
        }
        
        
        reverse(ans.begin(),ans.end());
       
        
        vector<int> fs;
        for(int i=0;i<nums1.size();i++){
            fs.push_back(ans[occurence[nums1[i]]]);
        }
        
        
        return fs;
        
        
    }
