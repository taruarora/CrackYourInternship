class Solution {
    public boolean isIsomorphic(String s, String t) {
        int sl=s.length();
        int i=t.length();
        if(sl!=i)return false;
        i=0;
        int n=0;
        for(int j=0;j<sl;j++)
        {
            n =s.indexOf(s.charAt(i))^ t.indexOf(t.charAt(i));
            if(n!=0)return false;
            i++;
        }
        return true;
        
    } 
}