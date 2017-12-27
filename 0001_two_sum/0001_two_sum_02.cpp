class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /* Hash table (O(n) time, O(n) space) */
        vector<int> sol;
        // Key is number at nums[i], value is i
        unordered_map<int, int> hashtable;
        for (int i=0; i<nums.size(); ++i)
        {
            /* 
            If neededNum is one of the 2 numbers we need, it 
            will either already be in the set or we will come 
            across it later, at which time its corresponding 
            number (the current nums[i]) will have already been 
            added to the table.
            */
            int neededNum = target - nums[i];
            if (hashtable.find(neededNum) != hashtable.end())
            {
                sol.push_back(i);
                sol.push_back(hashtable[neededNum]);
                break;
            }
            else
            {
                hashtable[nums[i]] = i;
            }
        }
        return sol;
    }
};