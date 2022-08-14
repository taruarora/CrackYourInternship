class Solution {
    public String toLowerCase(String s) {
        int l=s.length();
        char[] ch=new char[l];
        for(int i=0;i<l;i++)
        {
            if(s.charAt(i)>='A'&& s.charAt(i)<='Z')ch[i]=(char)((int)s.charAt(i)+32);
            else ch[i]=s.charAt(i);
        }
    
        return new String(ch);
    }
}