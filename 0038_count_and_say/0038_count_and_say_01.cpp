class Solution {
public:
	string countAndSay(int n) {
		string result = "1";
		stack<char> tower;
		for (int i = 1; i < n; ++i)
		{
			string newresult = "";
			int count = 0;
			for (char c : result)
			{
				if (tower.empty() || tower.top() == c)
				{
					tower.push(c);
					++count;
				}
				else
				{
					newresult = newresult + to_string(count) + tower.top();
					while (!tower.empty()) tower.pop();
					tower.push(c);
					count = 1;
				}
			}
			if (!tower.empty())
			{
				newresult = newresult + to_string(count) + tower.top();
				while (!tower.empty()) tower.pop();
			}
			result = newresult;
		}
		return result;
	}
};