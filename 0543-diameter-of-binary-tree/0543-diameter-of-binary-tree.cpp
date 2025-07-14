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
    int maxDiameter = 0;
    int dfs(TreeNode* root) {

        if (root == nullptr) return 0;

        int left = dfs(root->left);
        int right = dfs(root->right);

        int currentDiameter = left + right;

        maxDiameter = max(maxDiameter, currentDiameter);

        return 1 + max(left,right);

        
    }

     int diameterOfBinaryTree(TreeNode* root) {
        dfs(root); // Start DFS from the root
        return maxDiameter; // Return the largest diameter found
    }
};