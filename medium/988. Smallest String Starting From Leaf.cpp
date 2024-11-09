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
    string ans="";
    string smallestFromLeaf(TreeNode* root) {
        dfs(root, "");

        return ans;    
    }

    void dfs( TreeNode* root, string parent ){
        string path=parent;
        path += char(root->val + 'a');

        if( !root->left && !root->right ){
            reverse( path.begin(), path.end() );
            cout << path << endl;
            if( ans == "" ){
                ans = path;
            }
            else if( path.compare(ans) < 0 ){
                ans = path;
            }

            return ; 
        }

        if( root->left ){
            dfs( root->left, path );
        }
        
        if( root->right ){
            dfs( root->right, path );
        }
    }


};
