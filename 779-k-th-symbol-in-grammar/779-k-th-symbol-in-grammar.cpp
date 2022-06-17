class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1 && k==1)
            return 0;
        int mid= pow(2,n-2); // when n=1 , size =2^0, n=2 ,size = 2^1 ,n=3 ,size = 2^2 so, length = 2^n-1 and half = 2^ n-1 /2
        
        if(k<=mid)
        {
            return kthGrammar(n-1,k); 
        }
        else
            return (!kthGrammar(n-1,k-mid));
    }
};