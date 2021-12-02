#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Solution02 {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int right;
        int left = 0;
        int length = nums.size();
        if (nums.size() == 0)
        {
            return 0;
        }
        for (right = 1; right < length; right++)
        {
            if (nums[left] != nums[right])
            {
                nums[++left] = nums[right];
            }
        }
        return ++left;
    }
};