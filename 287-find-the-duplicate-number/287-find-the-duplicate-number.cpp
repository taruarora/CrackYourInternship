class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> num2=nums;
        sort(num2.begin(),num2.end());
        for(auto i=num2.begin();i!=num2.end();i++)
        {
            if(*i==*(i+1))
                return *i;
        }
        return -1;
    }
};