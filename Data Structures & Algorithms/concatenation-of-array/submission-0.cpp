class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums)
     {

vector<int> newNums;

        for (int i = 0; i<nums.size()*2 ;i++)
        {
            newNums.push_back(nums[i%nums.size()]);
        }
     return newNums;
     }
};