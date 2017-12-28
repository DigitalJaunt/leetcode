class Solution {
public:
	bool isPalindrome(int x) {
		/* Reversing half of x */
		if (x < 0)
			return false;
		if (x < 10)
			return true;
		// Unlike the full reverse method, half reverse trips up 
		// on numbers that end in 0. Except for zero itself, numbers 
		// that end in 0 aren't palindromes since we don't put zeros int front 
		// of numbers
		if (x % 10 == 0)
			return false;
		int isEvenNumDigits = (int(log10(x))+1) % 2 == 0;
		int halfReverse = 0;
		while (x > halfReverse)
		{
			// Reverse half of x
			halfReverse = halfReverse * 10 + (x % 10);
			x /= 10;
		}
		// Remove the singular middle digit from halfReverse if x had 
		// an odd number of digits
		return isEvenNumDigits ? (halfReverse == x) : (halfReverse/10 == x);
	}
};