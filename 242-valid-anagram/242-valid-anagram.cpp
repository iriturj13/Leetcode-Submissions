class Solution {
public:
    bool isAnagram(string s, string t) {
        
       // Check if 's' & 't' have different lengths
        if (s.length() != t.length()) return false;
        
        std::unordered_map<char, int> ms, mt;
        // Get possibles characters (from 's') occurrences
        for (int i = 0; i < s.length(); ++i) {
            ms[s[i]]++;
            mt[t[i]]++;
        }
		
        return ms == mt;
    }
};