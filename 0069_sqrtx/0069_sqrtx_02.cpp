class Solution {
public:
    int mySqrt(int x) {
		// Newton's method
		if (x == 0) return 0;
		long long y = long(x);
		long long guess = (y+1) / 2;
		while (guess > y / guess)
		{
			guess = (guess + (y/guess)) / 2;
		}
		return int(guess);
    }
};