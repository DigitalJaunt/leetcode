class Solution {
public:
    int maxSubArray(vector<int>& nums) {
		if (nums.empty())
			return INT_MIN;
		int maxsum = nums[0];
		int cursum = nums[0];
		for (int i=1; i<nums.size(); ++i)
		{
			cursum += nums[i];
			if (nums[i] > cursum)
				cursum = nums[i];
			if (cursum > maxsum)
				maxsum = cursum;
		}
		return maxsum;
    }
};