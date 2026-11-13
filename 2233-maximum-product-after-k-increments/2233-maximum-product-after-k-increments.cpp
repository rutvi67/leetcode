class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
        
        while (k > 0) {
            int smallest = pq.top();
            pq.pop();
            pq.push(smallest + 1);
            k--;
        }
        
        long long result = 1;
        int MOD = 1e9 + 7;
        while (!pq.empty()) {
            result = (result * pq.top()) % MOD;
            pq.pop();
        }
        
        return result;
    }
};