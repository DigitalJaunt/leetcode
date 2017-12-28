class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
		if (strs.empty())
			return "";
		string result = strs[0];
		for (int i=1; i<strs.size(); ++i)
		{
			int minLen = result.length() < strs[i].length() ? result.length() : strs[i].length();
			// If we have an empty string then we're done
			if (minLen == 0)
			{
				result = "";
				break;
			}
			int k=0;
			for (k; k<minLen; ++k)
			{
				if (result[k] != strs[i][k]) break;
			}
			result = result.substr(0,k);
		}
        return result;
    }
};