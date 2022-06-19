class Solution {
public:
    int findPeakElement(const vector<int> &num) {
        return solve(num, 0, num.size()-1);
    }
    int solve(const vector<int> &num, int low, int high)
    {
        if(low == high)
            return low;
        else
        {
            int mid1 = (low+high)/2;
            int mid2 = mid1+1;
            if(num[mid1] > num[mid2])
                return solve(num, low, mid1);
            else
                return solve(num, mid2, high);
        }
    }
};