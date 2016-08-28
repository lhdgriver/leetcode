class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> ret;
		if (root == NULL) return ret;
		if (root->left != NULL) {
			vector<int> tmp = inorderTraversal(root->left);
			ret.insert(ret.end(), tmp.begin(), tmp.end());
		}
		ret.push_back(root->val);
		if (root->right != NULL) {
			vector<int> tmp = inorderTraversal(root->right);
			ret.insert(ret.end(), tmp.begin(), tmp.end());
		}

		return ret;
	}
};
