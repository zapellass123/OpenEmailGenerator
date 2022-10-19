// Normal solution where repeated element present
/*
	Output:- [[1,2,5],[1,7],[1,6,1],[2,6],[2,1,5],[7,1]]
	Expected:- [[1,1,6],[1,2,5],[1,7],[2,6]]
*/

// you can use hashset to remove duplicate
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> res;
        vector<int> curr;
        
        generateSubsets(0, candidates, curr, res, target);
        return res;
    }
    
    void generateSubsets(int index, vector<int> candidates, vector<int> curr, vector<vector<int>> &res, int target){
       
        if(target==0){
            res.push_back(curr);    
            return;
        }
        
        
        for(int i=index; i<candidates.size(); i++){
            curr.push_back(candidates[i]);
            generateSubsets(i+1, candidates, curr, res, target-candidates[i]);
            curr.pop_back();
        }
        
    }
};

// TLE
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> res;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        generateSubsets(0, candidates, curr, res, target);
        return res;
    }
    
    void generateSubsets(int index, vector<int> candidates, vector<int> curr, vector<vector<int>> &res, int target){
       
        if(target==0){
            res.push_back(curr);    
            return;
        }
        
        
        for(int i=index; i<candidates.size(); i++){
            if(i>index && candidates[i]==candidates[i-1])
                continue; // skipping same elements
            curr.push_back(candidates[i]);
            generateSubsets(i+1, candidates, curr, res, target-candidates[i]);
            curr.pop_back();
        }
        
    }
};

// Accepted
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> res;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        generateSubsets(0, candidates, curr, res, target);
        return res;
    }
    
    void generateSubsets(int index, vector<int> candidates, vector<int> curr, vector<vector<int>> &res, int target){
       
        if(target==0){
            res.push_back(curr);    
            return;
        }
        
        if(target<0) return; 
        
        for(int i=index; i<candidates.size(); i++){
            if(i>index && candidates[i]==candidates[i-1])
                continue; // skipping same elements
            curr.push_back(candidates[i]);
            generateSubsets(i+1, candidates, curr, res, target-candidates[i]);
            curr.pop_back();
        }
        
    }
};
