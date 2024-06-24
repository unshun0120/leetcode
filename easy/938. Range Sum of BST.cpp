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
    int sum = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if( root == NULL )
            return NULL;
        
        int left = rangeSumBST( root->left, low, high );
        int right = rangeSumBST( root->right, low, high );

        if( root  && root->val >= low && root->val <= high )
            return sum+=root->val;
        else
            return sum;


    }
};



/*
	//https://clay-atlas.com/blog/2021/12/14/leetcode-938-range-sum-of-bst/ 

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        
        if( root == NULL )
            return 0;
        
        sum += rangeSumBST( root->left, low, high );
        sum += rangeSumBST( root->right, low, high );

        if( root->val >= low && root->val <= high )
            sum += root->val;

        return sum;
    }
};*/ 
