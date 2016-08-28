class Solution {
public:
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> ret;
		if (root == NULL) return ret;
		ret.push_back(root->val);
		if (root->left != NULL) {
			vector<int> tmp = preorderTraversal(root->left);
			ret.insert(ret.end(), tmp.begin(), tmp.end());
		}
		if (root->right != NULL) {
			vector<int> tmp = preorderTraversal(root->right);
			ret.insert(ret.end(), tmp.begin(), tmp.end());
		}

		return ret;
	}
};
