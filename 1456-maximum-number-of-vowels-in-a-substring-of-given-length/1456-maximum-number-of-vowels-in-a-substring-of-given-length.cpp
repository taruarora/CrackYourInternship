class Solution {
public:
    int maxVowels(string s, int k) {
        //cout<<s.length();
        int count=0, maxi=0;
        for(int i=0;i<k;i++)
        {
            char c=s[i];
            if(isVowel(c))
                count++;
        }
        maxi=count;
        for(int i=k;i<s.length();i++)
        {
            cout<<s[i-k];
            if(isVowel(s[i-k]))
                count=count-1;
            if(isVowel(s[i]))
                count=count+1;
            maxi=max(maxi,count);
        }
        return maxi;
        
    }
    bool isVowel(char c)
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            cout<<c<<endl;
            return true;
        }
            
        return false;
    }
    
    //COMPACT VERSION
    /*
     int maxVowels(string s, int k) {
        int max_vow = 0, cur_vow=0;
        for(int i=0;i<s.size();i++){
            cur_vow += isVowel(s[i]);
            if(i>=k)
                cur_vow -= isVowel(s[i-k]);
            max_vow = max(max_vow, cur_vow);
        }
        return max_vow;    
    }
    */
};