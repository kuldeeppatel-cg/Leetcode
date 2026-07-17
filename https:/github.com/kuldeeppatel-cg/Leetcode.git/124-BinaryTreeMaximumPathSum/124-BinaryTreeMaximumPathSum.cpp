// Last updated: 17/07/2026, 14:20:08
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

    pair<int,int> solve(TreeNode* root) {

        if (root == NULL) {
            return {0, INT_MIN};
        }

        pair<int,int> left = solve(root->left);
        pair<int,int> right = solve(root->right);

        int singlePath = max(0, max(left.first, right.first)) + root->val;

        int throughRoot = max(0, left.first) + 
                          max(0, right.first) + 
                          root->val;

        int ans = max({left.second, right.second, throughRoot});

        return {singlePath, ans};
    }

    int maxPathSum(TreeNode* root) {

        return solve(root).second;
    }
};