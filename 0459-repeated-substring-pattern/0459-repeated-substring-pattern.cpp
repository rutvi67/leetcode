class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int len = 1; len <= n / 2; len++)
        { if(n % len == 0)
            { string pattern = s.substr(0, len);
                int copies = n / len;
                string built = "";
                for(int i = 0; i < copies; i++)
                {
                    built += pattern;
                }
                if(built == s)
                {
                    return true;
                }
            }
        }
        return false;
    }
};