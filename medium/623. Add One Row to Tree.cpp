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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if( root == NULL )
            return NULL;
            
        if( depth == 1 ){
            TreeNode* ans = new TreeNode(val);
            ans->left = root;
            root = ans;
        }
        else if( depth == 2 ){
            TreeNode* left = root->left;
            root->left = new TreeNode(val);
            root->left->left = left;

            TreeNode* right = root->right;
            root->right = new TreeNode(val);
            root->right->right = right;
        }
        else{
            addOneRow( root->left, val, depth-1 );
            addOneRow( root->right, val, depth-1 );
        }

        return root;
    }
};
