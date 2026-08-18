class Solution {
public:
    void dfs(TreeNode* root, int targetSum,
             vector<int>& path,
             vector<vector<int>>& ans) {

        if(root == NULL) {
            return;
        }

        path.push_back(root->val);
        targetSum -= root->val;

        if(root->left == NULL && root->right == NULL) {

            if(targetSum == 0) {
                ans.push_back(path);
            }

            path.pop_back();
            return;
        }

        dfs(root->left, targetSum, path, ans);
        dfs(root->right, targetSum, path, ans);

        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        vector<int> path;
        vector<vector<int>> ans;

        dfs(root, targetSum, path, ans);

        return ans;
    }
};