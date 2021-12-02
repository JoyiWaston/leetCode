#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution01 
{
public:
    vector<int> twoSum01(vector<int>& nums, int target) 
    {
        int n = nums.size();
        for (int i = 0; i < n; ++i) 
        {
            for (int j = i + 1; j < n; ++j) 
            {
                if (nums[i] + nums[j] == target) 
                {
                    return { i, j };
                }
            }
        }
        return {};
    }

    vector<int> twoSum02(vector<int>& nums, int target) 
    {
        int size = nums.size();
        unordered_map<int, int> dic;
        for (int i = 0; i < size; i++) {
            if (dic.find(target - nums[i]) != dic.end()) {
                return { dic[target - nums[i]], i };
            }
            dic.emplace(nums[i], i);
        }
        return {};
    }
};
