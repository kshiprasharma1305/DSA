#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans1;

    vector<vector<int>> generate(int numRows) {
        ans1.clear();

        for (int row = 1; row <= numRows; ++row) {
            long long ans = 1;
            vector<int> ansrow;

            ansrow.push_back(1);
            for (int col = 1; col < row; col++) {
                ans = ans * (row - col);
                ans = ans / col;
                ansrow.push_back((int)ans);
            }

            ans1.push_back(ansrow);
        }

        return ans1;
    }

    vector<vector<int>> pascalTriangle(int N) {
        vector<vector<int>> ans;
        ans = generate(N);
        return ans;
    }
};
