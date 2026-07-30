class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
 
unordered_set<int> dup ;

for (int num : nums)
{
    if(dup.find(num) != dup.end())
     return true;
    dup.insert(num); 
}
return false ;
        
    }
};