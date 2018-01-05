class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
		bool addNewDigit = true;
		for (int i=digits.size()-1; i>=0; --i)
		{
			if (digits[i] == 9)
			{
				digits[i] = 0;
			}
			else
			{
				if (addNewDigit)
				{
					++digits[i];
					addNewDigit = false;
					break;
				}
			}
		}
		if (addNewDigit)
		{
			digits.insert(digits.begin(), 1);
		}
		return digits;
    }
};