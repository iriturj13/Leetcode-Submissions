class Solution {
    public int xorOperation(int n, int start) {
        int start1 = start / 2;
        int end1 = start1 + n - 1;
        int xor = XOR(start1 - 1) ^ XOR(end1);
        int ans = 0;
        if(start % 2 == 0 || n % 2 == 0) {
            ans = xor * 2;
        } else {
            ans = xor * 2 + 1;
        }
        return ans;
    }
    public static int XOR(int x) {
        if(x % 4 == 0) {
            return x;
        }
        if(x % 4 == 1) {
            return 1;
        }
        if(x % 4 == 2) {
            return x + 1;
        }
        if(x % 4 == 3) {
            return 0;
        }
        return 0;
    }
        
    
}