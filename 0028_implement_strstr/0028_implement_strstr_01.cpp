class Solution {
public:
    int strStr(string haystack, string needle) {
		if (needle.length() > haystack.length())
			return -1;
		if (needle == haystack || needle.empty())
			return 0;
		int i = 0;
		while (i <= haystack.length()-needle.length())
		{
			if (needle[0] == haystack[i])
			{
				int j=1;
				// Used to check if the start of the needle is inside 
				// the current needle candidate that we're searching
				int nextStartOffset = 0;
				for (j; j<needle.length(); ++j)
				{
					if (!nextStartOffset && haystack[i+j] == needle[0]) nextStartOffset = j;
					if (needle[j] != haystack[i+j]) break;
				}
				if (j == needle.length())
					return i;
				else
					i += (nextStartOffset > 0) ? nextStartOffset : j;
			}
			else
			{
				++i;
			}
		}
		return -1;
    }
};