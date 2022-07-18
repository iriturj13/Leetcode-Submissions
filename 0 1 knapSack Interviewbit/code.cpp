int Solution::solve(vector<int> &v, vector<int> &wt, int w) {

    int m = wt.size(), n = w;

    int t[m+1][n+1];

    

    for(int i=0; i<=m; i++) t[i][0] = 0;

    for(int j=1; j<=n; j++) t[0][j] = 0;

    

    for(int i=1; i<=m; i++){

        for(int j=1; j<=n; j++){

            if(wt[i-1] <= j){

                t[i][j] = max(v[i-1]+t[i-1][j-wt[i-1]], t[i-1][j]);

            }else{

                t[i][j] = t[i-1][j];

            }

        }

    }

    return t[m][n];

    

}
