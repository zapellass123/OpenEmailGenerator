class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(root == NULL)
        {
            return NULL ;
        }
        TreeNode* left = pruneTree(root->left) ;
        root->left = left ;
        TreeNode* right = pruneTree(root->right) ;
        root->right = right ;
        if(root->val == 0 && root->left == NULL && root->right == NULL)
        {
            return NULL ;
        }
        return root;
    }
};