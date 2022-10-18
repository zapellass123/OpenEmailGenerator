//dp question of variable ending point
//question is about to find minimum path to reach at the last row
//memoized,recursive and tabulated solution for the given is given below:

// memoized solution
    int helper(int i,int j,int n,vector<vector<int>>& triangle, vector<vector<int>>&dp ){
        if(i==n-1)return triangle[n-1][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int ans1=triangle[i][j]+helper(i+1,j,n,triangle,dp);
        int ans2=triangle[i][j]+helper(i+1,j+1,n,triangle,dp);
        return dp[i][j]=min(ans1,ans2);
    }
    int minimumTotal(vector<vector<int>>& triangle) {

        int n=triangle.size();
        // vector<vector<int>>dp(n+1,vector<int>(n+1,-1));

        // return helper(0,0,n,triangle,dp);
        // tabulated solution
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int j=0; j<n; j++){
            dp[n-1][j]=triangle[n-1][j];   
        }
        for(int i=n-2; i>=0; i--){
            for(int j=i;j>=0;j--){
        int dp0=triangle[i][j]+dp[i+1][j];
        int dp1=triangle[i][j]+dp[i+1][j+1];
        dp[i][j]=min(dp0,dp1);
          }
         }
       return dp[0][0];

    }
};
