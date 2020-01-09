class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> char_list;
        int res = 0;
        
        // Populate char list
        for(int i = 0; i < chars.length(); i++)
            char_list[chars[i]]++;
        
        for(int i = 0; i < words.size(); i++){
            bool has_match = true;
            unordered_map<char,int> word_chars;
            
            for(int j = 0; j < words[i].length() && has_match; j++){
                char c = words[i][j];
                
                if(char_list[c] == 0 || char_list[c] <= word_chars[c])
                    has_match = false;
                word_chars[c]++;
            }
            
            if(has_match)
                res += words[i].length();
        }
        return res;
    }
};