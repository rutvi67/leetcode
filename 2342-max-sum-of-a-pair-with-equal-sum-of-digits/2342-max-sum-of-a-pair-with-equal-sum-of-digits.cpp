class Solution {
public:
    int getDigitSum(int num) {
        int sum = 0;
        while(num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = -1;
        for(int num : nums) {
            int sum = getDigitSum(num);
            if(mp.find(sum) != mp.end()) {
                ans = max(ans, num + mp[sum]);
                mp[sum] = max(mp[sum], num);
            }
            else {
                mp[sum] = num;
            }
        }
        return ans;
    }
};