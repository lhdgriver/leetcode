class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> ret;
		if (root == NULL) return ret;
		vector<vector<int>> left_result = levelOrder(root->left);
		vector<vector<int>> right_result = levelOrder(root->right);

		vector<int> now;
		now.push_back(root->val);
		ret.push_back(now);

		int left_index = 0, right_index = 0;
		while(left_index < left_result.size() && right_index < right_result.size()) {
			vector<int> left_v = left_result[left_index];
			vector<int> right_v = right_result[right_index];
			left_v.insert(left_v.end(), right_v.begin(), right_v.end());
			ret.push_back(left_v);
			left_index++;
			right_index++;
		}

		while(left_index < left_result.size()) {
			vector<int> left_v = left_result[left_index];
			ret.push_back(left_v);
			left_index++;
		}

		while(right_index < right_result.size()) {
			vector<int> right_v = right_result[right_index];
			ret.push_back(right_v);
			right_index++;
		}

		return ret;
	}
};
