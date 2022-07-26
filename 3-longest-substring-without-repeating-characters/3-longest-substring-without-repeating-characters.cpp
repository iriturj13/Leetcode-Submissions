class Solution {
public:
    int lengthOfLongestSubstring(string s) {
          if(s.length() == 0)
            return 0;
        unordered_map<char, int> mp;
        int i = 0, j = 0;
        int n = s.length();
        int mx = INT_MIN;
        while(j < n){
            mp[s[j]]++;
            
            if(mp.size() == j - i + 1){
                mx = max(mx, j - i + 1);
                j++;
            }
            else if(mp.size() < j - i + 1){
                while(mp.size() < j - i + 1){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return mx;
    }
};