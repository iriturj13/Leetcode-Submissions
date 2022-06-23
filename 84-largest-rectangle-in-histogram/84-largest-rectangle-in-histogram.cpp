class Solution {
public:
   
   /* Let's find Nearest Smallest Element to the right and to the left for all the indices,
        After all, whevever we find a number lower than the current element, we stop there and calculate       the area ,so, 
    I'm initialising two vectors namely left and right to find the states above
*/
 vector<int> nsl(vector<int>&a)
{
    int n=a.size();
    vector<int>left;
    stack<pair<int,int>>st;
    int placeholder=-1;
    for(int i=0;i<n;i++)
    {
        if(st.size()==0)
        {
            left.push_back(placeholder);
            st.push({a[i],i});
        }
        else if(st.size()>0 && st.top().first<a[i])
        {
            left.push_back(st.top().second);
            st.push({a[i],i});
        }
        else if(st.size()>0 && st.top().first>=a[i])
        {
            while(st.size()>0 && st.top().first>=a[i])
            {
                st.pop();
            }
            if(st.size()==0)
            {
                left.push_back(placeholder);
                st.push({a[i],i});
            }
            else
            {
                 left.push_back(st.top().second);
                 st.push({a[i],i});
            }
        }
    }
    return left;
    
}
vector<int> nsr(vector<int>&a)
{
    int n=a.size();
    vector<int>right;
    stack<pair<int,int>>st;
    int placeholder=n;
    for(int i=n-1;i>=0;i--)
    {
        if(st.size()==0)
        {
            right.push_back(placeholder);
            st.push({a[i],i});
        }
        else if(st.size()>0 && st.top().first<a[i])
        {
            right.push_back(st.top().second);
            st.push({a[i],i});
        }
        else if(st.size()>0 && st.top().first>=a[i])
        {
            while(st.size()>0 && st.top().first>=a[i])
            {
                st.pop();
            }
            if(st.size()==0)
            {
                right.push_back(placeholder);
                st.push({a[i],i});
            }
            else
            {
                 right.push_back(st.top().second);
                 st.push({a[i],i});
            }
        }
    }
    reverse(right.begin(),right.end());
    return right;
    
}
    int largestRectangleArea(vector<int>& a) {
        int n=a.size();
         vector<int>left=nsl(a);
    vector<int>right=nsr(a);
    int width[n];
    for(int i=0;i<n;i++)
    {
        width[i]=right[i]-left[i]-1;
    }
    int ans[n];
    for(int i=0;i<n;i++)
    {
        
        ans[i]=a[i]*width[i];
    }
    int maxi=0;
    for(int i=0;i<n;i++)
    maxi=max(maxi,ans[i]);
    return maxi;
        
        
    }
    
};