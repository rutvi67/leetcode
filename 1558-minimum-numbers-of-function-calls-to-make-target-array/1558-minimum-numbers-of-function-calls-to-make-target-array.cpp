class Solution {
public:
    int minOperations(vector<int>& nums) {
        int addOps = 0;   
        int mulOps = 0;   
        for (int x : nums) {
            int curAdd = 0;
            int curMul = 0;
            while (x > 0) {
                if (x % 2 == 1) {   
                    x--;
                    curAdd++;
                } else {            
                    x /= 2;
                    curMul++;
                }
            }

            addOps += curAdd;           
            mulOps = max(mulOps, curMul); 
        }

        return addOps + mulOps;
    }
};
