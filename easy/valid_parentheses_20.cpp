class Solution {
public:
	bool isValid(string s) {
		stack<char> parentheses_stack;
		unordered_map<char, char> pair_map;
		pair_map[')'] = '(';
		pair_map[']'] = '[';
		pair_map['}'] = '{';

		for(int i = 0; i < s.length(); i++) {
			if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
				parentheses_stack.push(s[i]);
				continue;
			}
			if (parentheses_stack.empty() || parentheses_stack.top() != pair_map[s[i]]) return false;
			parentheses_stack.pop();
		}

		return parentheses_stack.empty();
	}
};
