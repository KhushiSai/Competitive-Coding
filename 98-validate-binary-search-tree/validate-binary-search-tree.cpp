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
//approach is get the inorder if its sorted that means it is BST
    bool isValidBST(TreeNode* root) {
        long long prev=LLONG_MIN;
        return inorder(root, prev);
    }

private:
    bool inorder(TreeNode* node, long long &prev) {
        if (!node) return true;
        //check for left
        if (!inorder(node->left, prev)) return false;
        //node..here we will do the checking ..if its smaller than the prev element of the inorder sequence that means the inorder is not sorted that is how we checked the sortedness of the inorder and returned false
        if (node->val <= prev) return false;
        prev = node->val;
        //check for right
        return inorder(node->right, prev);
    }

};