import java.lang.StringBuilder;
class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        String str[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
       
        
       Set set = new HashSet();
        for(int i=0;i<words.length;i++)
        {
             String sb="";
            for(int j=0;j<words[i].length();j++)
            {
               sb=sb+str[words[i].charAt(j)-'a'];  
            }
            set.add(sb);
        }
        
        System.out.println(set);
        
        return set.size();
        
        
    }
}