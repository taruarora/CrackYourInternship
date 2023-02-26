class Solution {
public:
    /*int maxProfit(vector<int>& prices) {
        int minind=min_element(prices.begin(),prices.end()-1)-prices.begin();
        int maxind=max_element(prices.begin()+minind,prices.end())-prices.begin();
        
        //cout<<"max"<<prices[maxind];
        //cout<<"mini"<<prices[minind];
        
        int c=prices[maxind]-prices[minind];
        if(c<=0)return 0;
        else
            return c;
        
        [3,2,6,5,0,3] this testcase fails this logic
    }*/
    
    int maxProfit(vector<int>& prices) {
        int total=0,minibuy=INT_MAX, profit;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<minibuy)minibuy=prices[i];
            profit=prices[i]-minibuy;
            if(total<profit)total=profit;
        }
        return total;
    }
};