#pragma once
#include <iostream>
#include <vector>

using namespace std;
class Solution05 {
public:
    vector<vector<int>> rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> vec;
        for (int i = matrix.size(); i > 0; i--)
        {
            for (int j = matrix.size(); j > 0; j--)
            {
                vec[j].push_back(matrix[i].back());
                matrix[i].pop_back();
            }
        }
        return vec;
    }
};