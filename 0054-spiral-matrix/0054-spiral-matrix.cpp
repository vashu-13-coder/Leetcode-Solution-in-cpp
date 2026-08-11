class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int rows = matrix.size() , cols = matrix[0].size();
        int count = 0 , total = rows * cols;
        int starting_row = 0 , starting_col= 0;
        int ending_row = rows - 1 , ending_col = cols - 1;
        while(count < total){
            //Printing starting row
            for (int c = starting_col ; c <= ending_col ; c++){
                result.push_back(matrix[starting_row][c]);
                count++;
            }
            starting_row++;
            if (count >= total) break;
            

            //Printing ending column
            for (int r = starting_row ; r <= ending_row ; r++){
                result.push_back(matrix[r][ending_col]);
                count++;
            }
            ending_col--;
            if (count >= total) break;
            

            //Printing ending row
            for (int c = ending_col ; c >= starting_col ; c--){
                result.push_back(matrix[ending_row][c]);
                count++;
            }
            ending_row--;
            if (count >= total) break;
            

            //Printing starting column
            for (int r = ending_row ; r >= starting_row ; r--){
                result.push_back(matrix[r][starting_col]);
                count++;
            }
            starting_col++;
        }
        return result;
    }
};