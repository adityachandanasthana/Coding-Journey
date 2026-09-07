class Solution {
public:

    void solve(TreeNode* root, int row, int col,
               map<int, vector<pair<int,int>>>& mp) {

        if(root == NULL) return;

        mp[col].push_back({row, root->val});

        solve(root->left, row + 1, col - 1, mp);
        solve(root->right, row + 1, col + 1, mp);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {

        map<int, vector<pair<int,int>>> mp;

        solve(root, 0, 0, mp);

        vector<vector<int>> ans;

        for(auto &it : mp) {

            sort(it.second.begin(), it.second.end());

            vector<int> temp;

            for(auto &p : it.second) {
                temp.push_back(p.second);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};