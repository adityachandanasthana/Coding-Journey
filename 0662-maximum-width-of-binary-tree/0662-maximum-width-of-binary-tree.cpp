 class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {

        if (root == NULL)
            return 0;

        queue<pair<TreeNode*, unsigned long long>> q;

        q.push({root, 0});

        int ans = 0;

        while (!q.empty()) {

            int n = q.size();

            unsigned long long left = q.front().second;
            unsigned long long right = left;

            for (int i = 0; i < n; i++) {

                TreeNode* curr = q.front().first;
                unsigned long long index = q.front().second;

                q.pop();

                right = index;

                if (curr->left)
                    q.push({curr->left, 2 * index + 1});

                if (curr->right)
                    q.push({curr->right, 2 * index + 2});
            }

            ans = max(ans, (int)(right - left + 1));
        }

        return ans;
    }
};