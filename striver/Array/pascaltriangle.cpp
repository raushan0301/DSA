class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int row = 1; row <= numRows; row++) {
            vector<int> currRow;
            long long val = 1;

            currRow.push_back(1);

            for (int col = 1; col < row; col++) {
                val = val * (row - col);
                val = val / col;
                currRow.push_back(val);
            }

            ans.push_back(currRow);
        }

        return ans;
    }
};

// tc O(n^2)  
// sc