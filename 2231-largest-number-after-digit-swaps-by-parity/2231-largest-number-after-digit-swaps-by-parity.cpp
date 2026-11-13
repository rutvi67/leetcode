class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        int n = s.size();
        vector<int> odd, even;
        for (char c : s) {
            int d = c - '0';
            if (d % 2 == 0)
                even.push_back(d);
            else
                odd.push_back(d);
        }

        sort(odd.rbegin(), odd.rend());
        sort(even.rbegin(), even.rend());

        
        int oi = 0, ei = 0;
        string result = "";
        for (char c : s) {
            int d = c - '0';
            if (d % 2 == 0)
                result += to_string(even[ei++]);
            else
                result += to_string(odd[oi++]);
        }

        return stoi(result);
    }
};