class Solution {
public:
    string shortestCompletingWord(string licensePlate,vector<string>& words)
    {
        vector<int> need(26,0);
        for(char ch : licensePlate)
        {
            if(isalpha(ch))
            {
                ch = tolower(ch);
                need[ch-'a']++;
            }
        }
        string ans = "";
        for(string word : words)
        {
            vector<int> has(26,0);
            for(char ch : word)
            {
                has[ch-'a']++;
            }

            bool valid = true;

            for(int i = 0; i < 26; i++)
            {
                if(has[i] < need[i])
                {
                    valid = false;
                    break;
                }
            }

            if(valid)
            {
                if(ans.empty()
                   ||
                   word.size() < ans.size())
                {
                    ans = word;
                }
            }
        }

        return ans;
    }
};