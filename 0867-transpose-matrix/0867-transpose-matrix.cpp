class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> output;
        for (int i = 0; i < matrix[0].size(); i++) {
            vector<int> newrow;
            for (int j = 0; j < matrix.size(); j++) {
                newrow.push_back(matrix[j][i]);
            }
            output.push_back(newrow);
        }
        return output;
    }
};
