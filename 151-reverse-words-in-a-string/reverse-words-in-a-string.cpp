class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int n = s.length();
        string ans;

        while (i < n) {
            while (i < n && s[i] == ' ') {
                i++; // skip spaces
            }
            if (i >= n) break;
            int j = i;
            while (j < n && s[j] != ' ') {
                j++; // find the end of the word
            }
            string word = s.substr(i, j - i); // extract the word
            if (ans.empty()) {
                ans = word; // if it's the first word, no need to add space
            } else {
                ans = word + " " + ans; // prepend the word
            }
            i = j; // move to the next word
        }
        return ans;
    }
        
    
};