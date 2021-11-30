#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution 
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
        unordered_map<int, int> hashtable;
        for (int i = 0; i < nums.size(); ++i) 
        {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) 
            {
                return { it->second, i };
            }
            hashtable[nums[i]] = i;
        }
        return {};
    }
};
