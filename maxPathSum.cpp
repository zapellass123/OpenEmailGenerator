class Solution {
public:
    int ans=-1001;
    int solve(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left= solve(root->left);
        int right= solve(root->right);
        
        ans= max(ans,max(max(left,right),max(left+right,0))+root->val);
        
        return root->val + max(0,max(right,left));
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        
        return ans;
    }
};
