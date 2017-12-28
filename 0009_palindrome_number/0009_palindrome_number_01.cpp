class Solution {
public:
    bool isPalindrome(int x) {
		if (x < 0)
			return false;
		if (x < 10)
			return true;
		int original = x;
		int reverse = 0;
		while(x)
		{
			// Reverse the number x
			reverse = reverse * 10 + (x%10);
			x /= 10;
		}
		return (reverse == original);
	}
};