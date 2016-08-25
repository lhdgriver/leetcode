class Solution {
public:
	int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
		int area_1 = (C-A)*(D-B);
		int area_2 = (G-E)*(H-F);
		int overlap = computeOverlap(A, B, C, D, E, F, G, H);

		return area_1 + area_2 - overlap;
	}
private:
	int computeOverlap(int A, int B, int C, int D, int E, int F, int G, int H) {
		if (F >= D || B >= H || C <= E || G <= A)
			return 0;
		int length = min(G, C) - max(A, E);
		int height = min(D, H) - max(B, F);
		int area = length * height;
		return area;
	}
 
};
