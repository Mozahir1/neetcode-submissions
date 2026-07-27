class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false; //words have to be equal in length
        
        int count[26] = {0}; //count lowercase letters

        for(char c : s)
            count[c - 'a']++; //increments for each letter in s
        

        for(char c : t)
            count[c - 'a']--; //decrements for each letter in t
        

        for(int i = 0; i < 26; i++){
            if(count[i] != 0) return false; //searches count to see if anagram works
        }

        return true; //if all conditions met and no false returned, its an anagram
    }
};
