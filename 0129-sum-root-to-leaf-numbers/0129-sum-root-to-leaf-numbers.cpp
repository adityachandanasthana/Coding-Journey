class Solution {
public:

    void solve(TreeNode* root, vector<int>& ans, vector<int> path) {

        if(root == NULL) {
            return;
        }

        path.push_back(root->val);

      
        if(root->left == NULL && root->right == NULL) {

            int sum = 0;

            for(int x : path) {
                sum = sum * 10 + x;
            }

            ans.push_back(sum);
            return;
        }

        solve(root->left, ans, path);
        solve(root->right, ans, path);
    }

    int sumNumbers(TreeNode* root) {

        vector<int> ans;
        vector<int> path;

        solve(root, ans, path);

        int total = 0;

        for(int x : ans) {
            total += x;
        }

        return total;
    }
};