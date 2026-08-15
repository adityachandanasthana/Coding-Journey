class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;

        if(root == NULL)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            int n = q.size();

            for(int i = 0; i < n; i++) {

                TreeNode* curr = q.front();
                q.pop();

                if(curr->left)
                    q.push(curr->left);

                if(curr->right)
                    q.push(curr->right);

               
                if(i == n - 1)
                    ans.push_back(curr->val);
            }
        }

        return ans;
    }
};