class Solution {
public:
    void solve(TreeNode* root, vector<int>& ans) {

        if(root == NULL)
            return;

        // 1. Root
        ans.push_back(root->val);

        // 2. Left
        solve(root->left, ans);

        // 3. Right
        solve(root->right, ans);
    }

    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> ans;

        solve(root, ans);

        return ans;
    }
};