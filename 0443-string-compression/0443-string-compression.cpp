class Solution {
public:
    /*
    int compress(vector<char>& chars) {
        map<char,int> m;
        string s="";
        for(int i=0;i<chars.size();i++)
        {
            m[chars[i]]+=1;
        }
        int count=0, j=0;
        for(auto i:m)
        {
          if(i.second==1)
          {
              s+=i.first;
              count+=1;
          }
              
          else 
          {
              s+=i.first;
              s+=to_string(i.second);
              count+=1;
              count+=floor(log(i.second))+1;
          }
            
    
           
        }
        cout<<s;
        for(int i=0;i<s.length();i++)
          {
              chars[i]=s[i];
              cout<<s[i]<<endl;
          }
        return s.length();
    }*/
    
    int compress(vector<char>& chars) {
        int freq=1, count=0, i=0;
        int l=chars.size();
        while(i<=l-1)
        {
            freq=1;
            while(i<l-1 && chars[i]==chars[i+1])
            {
                i++;
                freq++;
            }
            
            chars[count++]=chars[i];
            if(freq>1)
            {
                 for(char ch:to_string(freq))
                 {
                     chars[count++]=ch;
                 }
            }
            i++;
                
         }
        return count;
        }
};