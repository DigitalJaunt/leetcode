class Solution {
public:
    int mySqrt(int x) {
		if (x == 0 || x == 1) return x;
        int i=1;
		for (i; i<x; ++i)
		{
			if ((x/i) < i) break;
		}
		return i-1;
    }
};