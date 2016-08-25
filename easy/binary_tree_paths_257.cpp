class Solution {
public:
	vector<string> binaryTreePaths(TreeNode* root) {
		vector<string> ret;
		if (root == NULL) return ret;
		if (root->left == NULL && root->right == NULL) {
			ret.push_back(to_string(root->val));
			return ret;
		}
		vector<string> children_result;
		if (root->left != NULL) {
			vector<string> tmp = binaryTreePaths(root->left);
			children_result.insert(children_result.end(), tmp.begin(), tmp.end());
		}
		if (root->right != NULL) {
			vector<string> tmp = binaryTreePaths(root->right);
			children_result.insert(children_result.end(), tmp.begin(), tmp.end());
		}

		for(int i = 0; i < children_result.size(); i++) {
			string s = children_result[i];
			s = to_string(root->val) + "->" + s;
			ret.push_back(s);
		}

		return ret;
	}
};
