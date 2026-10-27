class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current=0;
        int m=0;
        for (int num :nums){
            if (num==1){
                current++ ;     }     
            else{
                current=0;}
            m=max(m,current);
           }
        return m;
    }
};