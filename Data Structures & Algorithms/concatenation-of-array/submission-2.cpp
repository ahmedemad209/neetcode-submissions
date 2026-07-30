class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums)
     {

// vector<int> newNums;

//         for (int i = 0; i<nums.size()*2 ;i++)
//         {
//             newNums.push_back(nums[i%nums.size()]);
//         }
//      return newNums;
//      }

vector<int> ans;
ans.reserve(nums.size() * 2);

for (int num : nums)
    ans.push_back(num);

for (int num : nums)
    ans.push_back(num);
return ans;
     }
};