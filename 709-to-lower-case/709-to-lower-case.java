class Solution {
    public String toLowerCase(String s) {
       int n = s.length();
StringBuilder sb = new StringBuilder(n);
for(int i=0; i<s.length(); i++){
char a = s.charAt(i);

        if(a >= 'A' && a <= 'Z'){
            a += 32;
            sb.append((char)a);
        }
        else{
            sb.append(a);
        }
    }
    return sb.toString();
    }
}