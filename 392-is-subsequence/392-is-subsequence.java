class Solution {
    public boolean isSubsequence(String s, String t) {
        int l=s.length();
        if(l==0)return true;
        int j=0;
        for(int i=0;j<l &&i<t.length();i++)
        {
          if(t.charAt(i)==s.charAt(j))j++;  
        }
        return j==s.length();
        
    }
}