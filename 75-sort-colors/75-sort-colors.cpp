class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i, j, k;
        i=j=k=0;
        for (auto o=nums.begin();o!=nums.end();++o)
        {
            switch(*o)
            {
                case 0:
                    i++;
                case 01:
                    j++;
                case 02:
                    k++;
            }
        }
        for(int m=0;m<i;m++)
            nums[m]=0;
        for(int m=i;m<j;m++)
            nums[m]=1;
        for(int m=j;m<k;m++)
            nums[m]=2;
        
    }     
};