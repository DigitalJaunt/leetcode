class Solution {
public:
    int romanToInt(string s) {
		unordered_map<char, int> table; 
		table['I'] = 1;
		table['V'] = 5;
		table['X'] = 10;
		table['L'] = 50;
		table['C'] = 100;
		table['D'] = 500;
		table['M'] = 1000;
				
		int result = 0;
		int last = -1;
		for (char c : s)
		{
			if (table[c] > last && last != -1)
			{
				// last was added previously, so cancel that out 
				// and subtract again
				result -= 2 * last;
			}
			result += table[c];
			last = table[c];
		}
		return result;
    }
};