class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
        {
            return false;
        }
        vector<int> b(26,0);
        vector<int> c(26,0);
        for(char ch : s1)
        {
            b[ch-'a']++;
        }
        for(int i = 0; i < s1.size(); i++)
        {
            c[s2[i]-'a']++;
        }
        if(b == c)
        {
            return true;
        }
        for(int i = s1.size(); i < s2.size();i++)
        {
            c[s2[i-s1.size()]-'a']--;
            c[s2[i]-'a']++;
            if(b == c)
            {
                return true;
            }
        }
        return false;
    }
};