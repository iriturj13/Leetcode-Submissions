class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        stack<int> s;
        int ans =0;
        
        for(string i: ops)
        {
            if(i=="C")
            {
                s.pop();
            }
            else if( i== "D")
            {
                s.push(s.top()*2);
            }
            else if(i == "+")
            {
                int val1, val2;
                val1 = s.top();
                s.pop();
                val2 = s.top();
                s.push(val1);
                s.push(val1+val2);
            }
            else
            {
                s.push(stoi(i)); //stoi() to convert string into integer 
            }
        }
        while(s.size() != 0)
        {
            ans += s.top();
            s.pop();
        }
        return ans;
    }
        
        
    
};