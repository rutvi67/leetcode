class Solution {
public:
    int findLHS(vector<int>& nums) {
        int ans=0;
        map<int,int>map;
        for(int num:nums){
            map[num]++;
            }
        for (auto p:map){
            if(map.count(p.first+1)){
                ans=max(ans,p.second+map[p.first+1]);
            }
        }
        return ans;
    }
};