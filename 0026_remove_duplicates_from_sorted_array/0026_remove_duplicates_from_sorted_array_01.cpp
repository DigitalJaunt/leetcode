class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() < 2)
			return nums.size();
		// baseIndex indexes the first instance of a value
		// in the new array
		int baseIndex = 0;
		// We'll always have at least the first element 
		int length = 1;
		for (int i=1; i<nums.size(); ++i)
		{
			if (nums[i] != nums[baseIndex])
			{
				nums[++baseIndex] = nums[i];
				++length;
			}
		}
		return length;
    }
};