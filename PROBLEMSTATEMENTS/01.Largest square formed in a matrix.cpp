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
