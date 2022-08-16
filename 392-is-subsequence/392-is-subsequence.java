class Solution {
    public boolean isSubsequence(String s, String t) {
        int l=s.length();
        if(l==0)return true;
        int si=0;
        for(int i=0;i<l;i++)
        {
          if(t.indexOf(s.charAt(i),si)==-1)return false; 
          else si=t.indexOf(s.charAt(i),si)+1;
        }
        return true;
        
    }
}