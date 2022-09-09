class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
         unordered_map<char,int>ourmap;
    for(int i=0;i<allowed.size();i++){
        ourmap[allowed[i]]++;
    }
    int ct=0;
    for(int i=0;i<words.size();i++){
        bool flag=true;
        for(int j=0;j<words[i].size();j++){
            if(ourmap[words[i][j]]==0){
                flag=false;
                break;
            }
        }
        if(flag)ct++;
    }
    return ct;
        
    }
};