class Solution {
public:
	bool isValid(string s) {
		if (s.empty())
			return true;
		
		stack<char> chars;
		bool valid = true;
		for (char c : s)
		{
			switch (c)
			{
				case ')':
					if (!chars.empty())
					{
						valid = (chars.top() == '(') ? true : false;
						chars.pop();
					}
					else
					{
						valid = false;
					}
					break;
				case '}':
					if (!chars.empty())
					{
						valid = (chars.top() == '{') ? true : false;
						chars.pop();
					}
					else
					{
						valid = false;
					}
					break;
				case ']':
					if (!chars.empty())
					{
						valid = (chars.top() == '[') ? true : false;
						chars.pop();
					}
					else
					{
						valid = false;
					}
					break;
				default:
					chars.push(c);
			}
			if (!valid) break;
		}
		// If braces are closed properly, stack should be empty
		return (valid && chars.empty());
	}
};