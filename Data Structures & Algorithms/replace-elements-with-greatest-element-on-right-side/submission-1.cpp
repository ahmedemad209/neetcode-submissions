class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

vector<int> newArr;
        for (int i = 0; i < arr.size()-1; i++)
        {
          newArr.push_back(*max_element(arr.begin()+i+1, arr.end()));

        }
        newArr.push_back(-1);
        return newArr ;
    }
};