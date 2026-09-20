class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Pick the first number
        for(int i = 0; i < nums.size(); i++) {

            // Pick the second number
            for(int j = i + 1; j < nums.size(); j++) {

                // Check if their sum is target
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        return {};
    }
};