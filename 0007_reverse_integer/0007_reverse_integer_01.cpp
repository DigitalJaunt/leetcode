class Solution {
public:
	int reverse(int x) {
		const int MAX = 2147483647;
		const int MIN = -2147483648;
		bool negative = x < 0;		
		int answer = 0;
		while (x)
		{
			int digit = x % 10;
			bool overflow = negative ? answer < ((MIN - digit) / 10) : answer > ((MAX - digit) / 10);
			if (overflow)
			{
				answer = 0;
				break;
			}
			answer = answer * 10 + digit;
			x /= 10;
		}
		return answer;
	}
};