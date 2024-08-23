class Solution {
  public:
  
    int solve(vector<vector<int>>& mat, int i, int j, int &maxi) {
        if (i >= mat.size() || j >= mat[0].size()) {
            return 0;
        }
    
        int r = solve(mat, i, j + 1, maxi);     // Right cell
        int d = solve(mat, i + 1, j, maxi);     // Down cell
        int diag = solve(mat, i + 1, j + 1, maxi); // Diagonal cell
    
        if (mat[i][j] == 1) {
            int ans = 1 + min({r, d, diag}); // Compute the size of the square
            maxi = max(maxi, ans);            // Update the maximum square size
            return ans;
        } else {
            return 0;
        }
    }

    int maxSquare(int n, int m, vector<vector<int>> mat) {
        int maxi = 0;
        solve(mat, 0, 0, maxi);
        return maxi;
    }

};
//using DP

int solve(vector<vector<int>>& mat,int i,int j,int &maxi,vector<vector<int>>& dp){
    if(i>=mat.size()||j>=mat[0].size()){
        return 0;
    }
    
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    
    
    int r = solve(mat,i,j+1,maxi,dp);
    int d = solve(mat,i+1,j,maxi,dp);
    int dig = solve(mat,i+1,j+1,maxi,dp);
    
    if(mat[i][j] == 1){
        dp[i][j] = 1+min({r,d,dig});
        maxi=max(maxi,dp[i][j]);
        return dp[i][j];
    }
    else{
        dp[i][j]=0;
        return dp[i][j];
    }
    
}
int maxSquare(int n, int m, vector<vector<int>> mat) {
    int maxi = 0;
    vector<vector<int>> dp(n, vector<int>(m, -1));
    solve(mat, 0, 0, maxi, dp);
    return maxi;
}
