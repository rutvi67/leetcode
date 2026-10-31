class Solution {
public:
    bool checkRecord(string s) {
        int absentCount = 0;
        int lateCount = 0;
        for (char c : s) {
            if (c == 'A') {
                absentCount++;
                if (absentCount >= 2) return false;
            }
            if (c == 'L') {
                lateCount++;
                if (lateCount >= 3) return false;
            } else {
                lateCount = 0;
            }
        }
        return true;
    }
};