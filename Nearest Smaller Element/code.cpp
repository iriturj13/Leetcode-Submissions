vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> G;
    stack<int> s;
    
    for(int i = 0 ;i<A.size();i++)
    {
        if(s.size()==0)
        {
            G.push_back(-1);
        }
        else if(s.size()>0 && s.top()<A[i])
		{
			G.push_back(s.top());
		}
		else if(s.size()>0 && s.top()>=A[i])
		{
			while(s.size()>0 && s.top()>=A[i])
			{
				s.pop();
			}
			if(s.size()==0)
			{
				G.push_back(-1);
			}
			else
			{
				G.push_back(s.top());
			}
		} s.push(A[i]);
    }return G;
}
