class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans;
        int size= s.size();
        int Rindex=0;
        int Lindex=0;

        //cout<<size;
        for(int i=0;i<size;i++){
           if(s[i]=='(')
           st.push(s[i]);

           else{
               if(!st.empty())
                st.pop();
               else 
                ans+="";
            cout<<i<<" ";
          }
          
          if(st.empty()){
              Rindex=i;
              for(int j=Lindex+1;j<Rindex;j++){
                  ans+=s[j];
              }
              Lindex=Rindex+1;

          }
      
        }

        return ans;
    }
};