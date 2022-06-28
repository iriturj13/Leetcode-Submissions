class Solution {
    public int maximalRectangle(char[][] matrix) {
    if(matrix.length==0) return 0;
    int dp[]=new int[matrix[0].length];
    int max=0;
    for(int i=0;i<matrix.length;i++){
        for(int j=0;j<matrix[0].length;j++){
            dp[j]=matrix[i][j]=='1'?dp[j]+1:0;
        }
        max=Math.max(max,largestRectangleArea(dp));
    }
    return max;
}

public int largestRectangleArea(int heights[]){
    int len=heights.length;
    int left[]=new int[len];
    int right[]=new int[len];
    Stack<Integer> st=new Stack<>();
    
    for(int i=0;i<len;i++){
        while(!st.isEmpty() && heights[i]<=heights[st.peek()]){
            st.pop();
        }
        int span=st.isEmpty()?0:st.peek()+1;
        left[i]=span;
        st.push(i);
    }
    
    st.clear();
    
    for(int i=len-1;i>=0;i--){
        while(!st.isEmpty() && heights[i]<=heights[st.peek()]){
            st.pop();
        }
        int span=st.isEmpty()?len-1:st.peek()-1;
        right[i]=span;
        st.push(i);
    }
    
    int max=0;
    for(int i=0;i<len;i++){
        max=Math.max(max,heights[i]*(right[i]-left[i]+1));
    }
    return max;
        
    }
}