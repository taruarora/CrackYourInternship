class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        //normally by sorting and then adding
        
        int maxi=*max_element(costs.begin(),costs.end());
        vector<int> count(maxi+1,0);
        int sum=0;
        
        for(int i=0;i<costs.size();i++)
        {
            count[costs[i]]++;
        }
        
        for(int price=0;price<count.size();price++)
        {
            if(count[price]==0)continue;
            if(price> coins)break;
            
            int qty=min(count[price],coins/price);
            
            coins-=price*qty;
            sum+=qty;
        }
        return sum;
        
    }
};