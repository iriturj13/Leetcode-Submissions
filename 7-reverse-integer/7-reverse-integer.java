class Solution {
    public int reverse(int x) {
         long res = 0;
        boolean neg = x<0;
        if (neg) {
            x*=-1;
        }
        int curr = x; 
        while (curr != 0) {
            res = res*10 + curr%10;
            curr = curr/10;
        }
        
        
        if (res > Integer.MAX_VALUE || res < Integer.MIN_VALUE)
            return 0;
        
        if (neg)
            res*=-1; 
        
        System.out.println(res);
        return (int)res;
        
    }
}