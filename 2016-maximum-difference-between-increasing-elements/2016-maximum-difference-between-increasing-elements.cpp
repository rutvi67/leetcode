class Solution {
public:
    int maximumDifference(vector<int>& nums) {

        int min_val = nums[0];
        int ans = -1;
        for (int num : nums) {
            if (num > min_val) {
                ans = max(ans, num - min_val);
            }
            min_val = min(min_val, num);
        }
        return ans;
    }
};