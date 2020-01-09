class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        bool arr[n][m];
        
        // Populate array
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                arr[i][j] = 0;
        
        // Populate matrix
        for(auto index : indices){
            int row = index[0];
            int col = index[1];
            
            for(int i = 0 ; i < m; i++)
                arr[row][i] = !arr[row][i];
            for(int i = 0 ; i < n; i++)
                arr[i][col] = !arr[i][col];
        }
        
        // Count all odds
        int count = 0;
        for(int i = 0; i < n ; i++)
            for(int j = 0; j < m; j++)
                if(arr[i][j])
                    count++;
        
        return count;
    }
};