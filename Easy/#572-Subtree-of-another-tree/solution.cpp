/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* r, TreeNode* s) {
        if (!r || !s)
            return r == NULL && s == NULL;
        else if (r->val == s->val)
            return isSameTree(r->left, s->left) &&
                   isSameTree(r->right, s->right);
        else
            return false;
    }

    bool isSubtree(TreeNode* r, TreeNode* s) {
        if (!r)
            return false;
        else if (isSameTree(r, s))
            return true;
        else
            return isSubtree(r->left, s) || isSubtree(r->right, s);
    }
};