class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        vector<string> ans;
        for(string word : words)
        { string original = word;
            for(char &ch : word)
            { ch = tolower(ch);
            }
            string row;
            if(row1.find(word[0]) != string::npos)
            {
                row = row1;
            }
            else if(row2.find(word[0]) != string::npos)
            {
                row = row2;
            }
            else
            {
                row = row3;
            }
            bool ok = true;
            for(char ch : word)
            { if(row.find(ch) == string::npos)
                {
                    ok = false;
                    break;
                }
            }
            if(ok)
            {
                ans.push_back(original);
            }
        }
        return ans;
    }
};