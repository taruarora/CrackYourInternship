import java.lang.StringBuilder;
class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        String codes[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
       
       //HashMap<String,Integer> map = new HashMap<>();   
        Set<String> set = new HashSet<String>(); 
      for(int i=0;i<words.length;i++){
            String word= words[i];
            StringBuilder morse= new StringBuilder();
            
            for(int j=0;j<word.length();j++){
                char ch= word.charAt(j);
                int idx= ch-97;
                morse.append(codes[idx]);
            }
            set.add(morse.toString());
        }
        
        return set.size();
    }
}