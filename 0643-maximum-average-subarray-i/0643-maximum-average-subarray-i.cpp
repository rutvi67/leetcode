class Solution {
public:
    double findMaxAverage(vector<int>& nums,int k)
    {
        long long sum = 0;
        for(int i = 0; i < k; i++)
        {
            sum += nums[i];
        }
        long long maxi = sum;
        for(int i = k; i < nums.size(); i++)
        {
            sum = sum - nums[i-k]+ nums[i];
            maxi = max(maxi, sum);
        }
        return (double)maxi / k;
    }
};