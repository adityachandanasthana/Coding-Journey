 class Solution {
public:

    TreeNode* solve(vector<int>& inorder, vector<int>& postorder,
                    int inStart, int inEnd, int& postIndex) {

        if(inStart > inEnd)
            return NULL;

        int rootVal = postorder[postIndex--];

        TreeNode* root = new TreeNode(rootVal);

        int pos = inStart;

        while(inorder[pos] != rootVal)
            pos++;

        root->right = solve(inorder, postorder, pos + 1, inEnd, postIndex);

        root->left = solve(inorder, postorder, inStart, pos - 1, postIndex);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        int postIndex = postorder.size() - 1;

        return solve(inorder, postorder, 0, inorder.size() - 1, postIndex);
    }
};