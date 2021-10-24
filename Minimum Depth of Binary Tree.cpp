/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int func(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int left=0,right=0;
        if(root->left!=NULL)
        {
            left=1+ func(root->left);
        }
        if(root->right!=NULL)
        {
            right=1+func(root->right);
        }
        if(left!=0 && right !=0)
        {
            return min(left,right);
        }
        else if(left!=0)
            return left;
        return right;
    }
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
         int val=func(root);
        return val+1;
    }
}; 
