class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /* Search in O(n^2) */
        int i;
        int k;
        bool found = false;
        vector<int> sol;
        for (i=0; i<nums.size(); ++i)
        {
            int neededNum = target - nums[i];
            for (k=i+1; k<nums.size(); ++k)
            {
                if (nums[k] == neededNum)
                {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        sol.push_back(i);
        sol.push_back(k);
        return sol;
    }
};