class Solution {
public:
	bool isBalanced(TreeNode* root) {
		int depth = 0;
		return helper(root, &depth);
	}
private:
	bool helper(TreeNode* root, int* depth) {
		if (root == NULL) {
			*depth = 0;
			return true;
		}
		int left_depth = 0, right_depth = 0;
		if (!helper(root->left, &left_depth)) return false;
		if (!helper(root->right, &right_depth)) return false;
		if (abs(left_depth - right_depth) > 1) return false;

		*depth = max(left_depth, right_depth) + 1;
		return true;
	}
};
