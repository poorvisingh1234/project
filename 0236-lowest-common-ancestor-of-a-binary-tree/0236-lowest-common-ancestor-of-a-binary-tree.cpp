/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
    if(root==nullptr) return nullptr;

    if(root==p || root==q) return root;

    TreeNode* left_side = lowestCommonAncestor(root->left, p,q);
    TreeNode* right_side = lowestCommonAncestor(root->right, p,q);

     // If both left and right subtrees return non-null,
        // it means p and q are found in different subtrees,
        // so current node is their lowest common ancestor
    
    if(left_side!=nullptr && right_side!=nullptr)
    {
        return root;
    }

     // If only one side returns a node (non-null),
        // that means both p and q are in that side.
        // So return that side's result

    return (left_side!=nullptr) ? left_side : right_side;



    }
};