import java.util.HashMap;
class Solution {
    public int longestPalindrome(String s) {
        int l=0, d=0;
        boolean f=true;
        HashMap<Character, Integer> m=new HashMap<>();
        char[] ch=s.toCharArray();
        for(char c:ch)
        {
            if(m.containsKey(c)) m.put(c, m.get(c) + 1);
            else  m.put(c,1);
        }
        for(Map.Entry<Character, Integer> e: m.entrySet())
        {
            d=e.getValue();
            if(d%2==0)l=l+d;
            else if(d%2!=0 && f)
            {
                l=l+d;
                f=false;
            }
            else if(d>2)l=l+d-1;
            System.out.println(d);
        }
        if(m.size()==1)return d;
        return l;
    }
}