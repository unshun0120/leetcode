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
    int num[100];
    int index=0;
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* tree = new TreeNode();
        TreeNode* head = tree;
        inorder( root );
        for( int i = 0; i < index; i++ ){
            tree->right = new TreeNode();
            tree = tree->right;
            tree->val = num[i];
        }
        return head->right;
    }

    void inorder( TreeNode* root ){
        if( root == NULL )
            return;
        inorder( root->left );
        num[index] = root->val;
        index++;
        inorder( root->right );
    }
};


















