#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = static_cast<int>(mat.size());
        int n = static_cast<int>(mat[0].size());

        // Reshape is valid only when total element counts match
        if (m * n != r * c) {
            return mat;
        }

        vector<vector<int>> ans(r, vector<int>(c));
        int total = m * n;

        for (int idx = 0; idx < total; ++idx) {
            ans[idx / c][idx % c] = mat[idx / n][idx % n];
        }

        return ans;
    }
};