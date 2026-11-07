class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>mp;
        for (int num:nums){
            mp[num]++;
        }
        int d=0;
        int x=0;
        for ( int i=0;i<=nums.size();i++){
            if(mp[i]==2){
                d=i;
            }
            if(mp[i]==0){
                x=i;
            }
        }
        return {d,x};
    }
};