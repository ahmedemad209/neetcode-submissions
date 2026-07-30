class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
 

bool isDuplicated = false ;

for (int i = 1; i < nums.size(); i++)
{
    for (int j = 0; j <nums.size() ; j++)
    {
        if(i!=j)
        {
        if(nums[i]==nums[j])
        {
            isDuplicated = true ;
            break ;
        }
        }
    }
}
return isDuplicated ;
        
    }
};