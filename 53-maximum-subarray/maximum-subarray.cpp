class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Start with the first element
        int currentSum = nums[0];
        int maxSum = nums[0];

        // Traverse from the second element
        for (int i = 1; i < nums.size(); i++) {
            // Either extend the previous subarray or start new from nums[i]
            currentSum = max(nums[i], currentSum + nums[i]);

            // Update global maximum
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
