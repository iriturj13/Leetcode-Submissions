class Solution {
    public int[] finalPrices(int[] ps) {
         int n = ps.length, res[] = new int[n];
        Stack<Integer> st = new Stack<>();
        for (int i = n - 1; i >= 0; i--) {
            while (!st.isEmpty() && ps[i] < st.peek()) st.pop();
            res[i] = ps[i] - (st.isEmpty() ? 0 : st.peek());
            st.push(ps[i]);
        }
        return res;
        
    }
}