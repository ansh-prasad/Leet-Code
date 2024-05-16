class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)
            return true;
        return isSymmetricHelper(root->left, root->right);
    }

private:
    bool isSymmetricHelper(TreeNode* leftSubtree, TreeNode* rightSubtree) {
        if (leftSubtree == nullptr && rightSubtree == nullptr)
            return true;
        if (leftSubtree == nullptr || rightSubtree == nullptr)
            return false;
        if (leftSubtree->val != rightSubtree->val)
            return false;
        return isSymmetricHelper(leftSubtree->left, rightSubtree->right) &&
               isSymmetricHelper(leftSubtree->right, rightSubtree->left);
    }
};