class Solution {
public:
    string flipWord(string s){
        for(int i = 0; i < s.length()/2; i++){
            char temp = s[i];
            int pos = s.length()-i-1;
            s[i] = s[pos];
            s[pos] = temp;
        }
        return s;        
    }
    
    string reverseWords(string s) {
        string res = "";
        string word;
        stringstream sentence(s);
        while(getline(sentence, word, ' ')){
            res += flipWord(word) + " ";
        }
        // remove leading space
        res = res.substr(0, res.length()-1);
        return res;
    }
};