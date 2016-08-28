class Solution(object):
	def topKFrequent(self, nums, k):
		from collections import defaultdict
		count_map = defaultdict(int)
		for _ in nums:
			count_map[_] += 1
		
		l = sorted(count_map.items(), key=lambda _: _[1], reverse=True)
		ret = []
		for _ in range(k):
			ret.append(l[_][0])
		return ret
			
		
