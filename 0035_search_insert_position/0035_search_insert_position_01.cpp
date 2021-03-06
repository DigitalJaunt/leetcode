class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int low = 0;
		int high = nums.size()-1;
		int mid;
		while (low <= high)
		{
			mid = (high + low) / 2;
			if (target == nums[mid])
				return mid;
			if (target < nums[mid])
				high = mid-1;
			else
				low = mid+1;
		}
		// If nums[mid] is less than target, every number to the right is bigger 
		// than target so we insert to the right of nums[mid], otherwise we place the number at mid itself
		return (nums[mid] < target) ? ++mid : mid;
	}
};