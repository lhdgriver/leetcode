class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		unordered_map<char, int> count_map = construct_count_map(magazine);
		for(int i=0; i<ransomNote.length(); i++) {
			if (count_map.find(ransomNote[i]) == count_map.end())
				return false;
			if (count_map[ransomNote[i]] == 0)
				return false;
			count_map[ransomNote[i]]--;
		}
		return true;
	}
private:
	unordered_map<char, int> construct_count_map(string magazine) {
		unordered_map<char, int> ret;

		for(int i=0; i<magazine.size(); i++) {
			if (ret.find(magazine[i]) == ret.end())
				ret[magazine[i]] = 0;
			ret[magazine[i]]++;
		}
		return ret;
	}
};
