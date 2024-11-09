 //DFS

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* left;
        TreeNode* right;

        if( original == NULL )
            return NULL;
        if( original->val == target->val )
            return cloned;

        left = getTargetCopy( original->left, cloned->left, target );
        right = getTargetCopy( original->right, cloned->right, target );
        if( left ) 
            return left;
        else
            return right;


    }
};
