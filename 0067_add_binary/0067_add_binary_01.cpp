class Solution {
public:
    string addBinary(string a, string b) {
		if (a == "0" ||	b == "0")
			return (a == "0") ? b : a;
        string& longer = (a.length() > b.length()) ? a : b;
		string& shorter = (a.length() > b.length()) ? b : a;
		reverse(longer.begin(), longer.end());
		reverse(shorter.begin(), shorter.end());
		
		string result;
		int i;
		int shorterbit, longerbit, digit;
		int carry = 0;
		for (i=0; i<longer.length(); ++i)
		{
			// Full-adder logic
			shorterbit = (i >= shorter.length() ? 0 : (shorter[i] == '1'));
			longerbit = (longer[i] == '1');
			digit = shorterbit ^ longerbit ^ carry;
			carry = (shorterbit & longerbit) || (carry && (shorterbit ^ longerbit));
			result += digit ? '1' : '0';
		}
		if (carry) result += '1';
		reverse(result.begin(), result.end());
		return result;
    }
};