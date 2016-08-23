class Solution{
public:
	bool hasPathSum(TreeNode* root, int sum){
		if (root == NULL)
			return false;
		if (root->left && hasPathSum(root->left, sum-root->val)) return true;
		if (root->right && hasPathSum(root->right, sum-root->val)) return true;
		if (root->left == NULL && root->right == NULL)
			return sum == root->val;

		return false;
	}
};