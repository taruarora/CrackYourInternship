class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        int l=temperatures.size();
        vector<int> v(l,0);
        st.push(make_pair(temperatures[0],0));
        int i=1,j=1;
        while(i<l)
        {
            if(temperatures[i]>st.top().first)
            {
                j=i;
                while(!st.empty() && i<l && temperatures[i]>st.top().first)
                {
                    v[st.top().second]=i-st.top().second;
                    st.pop();
                
                }
                st.push(make_pair(temperatures[j],j));
            }
            else
            {
               //j++;
               st.push(make_pair(temperatures[i],i));
            }
            i++;
             
            
            
        }
        return v;
    }
};