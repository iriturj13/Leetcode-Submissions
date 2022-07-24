vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    
	 vector<int> output;
        int i=0;
        int j=0;
        deque<int> l;
        while(j<A.size())
        {
            if(l.empty()){ 
                l.push_back(A[j]);   
            }
            else
            {
                while(!l.empty() && l.back()<A[j])
                    l.pop_back();
                l.push_back(A[j]);               
            }
            if(j-i+1<B)
                ++j;
            else if(j-i+1==B)
            {
                output.push_back(l.front());
                if(A[i]==l.front())
                    l.pop_front();
                ++i;
                ++j;
            }
        }
        return output;
    
}
