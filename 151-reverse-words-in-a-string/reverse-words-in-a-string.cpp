class Solution {
public:
    string reverseWords(string s) 
    {
        vector<string> words;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ')
            {
                continue; // Skip spaces
            }

            string word = "";
            while(i < s.size() && s[i] != ' ')
            {
                word += s[i]; // Build the word character by character
                i++;
            }
            words.push_back(word);
        }

        string result = "";
        for(int i = words.size() - 1; i >= 0; i--)
        {
            result += words[i];
            if(i > 0)
            {
                result += " ";
            }
        }
        return result;     
    }
};