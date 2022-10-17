
//it is a leetcode medium level important problem and this my efficient solution for this problem.
//hope u'll like it

//what is anagram?
//An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        int i=0;
        while(i<strs.size()){
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
            i++;
            
        }
         vector<vector<string>> ans;
        for(auto i=mp.begin(); i!=mp.end(); i++){
            ans.push_back(i->second);
                 }
       
        return ans;
    }
};
