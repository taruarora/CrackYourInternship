class Solution {
public:
    /*
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<string> comb;
        set<int> fin;
        
        
        std::vector<string>::iterator it; //words
        combinations(0,comb,words);
        for(string st:comb)
        {
            cout<<st<<endl;
        }
        for(int i=0;i<comb.size();i++)
        {
            string str=comb[i];
            int index=-1;
            while ((index = s.find(str, index+1)) !=-1) {
              fin.insert(index);
            }
           // is=s.find(str,is+1);
            //cout<<is<<endl;
            //if (is!=-1)
              //fin.insert(is);
            
        }
        vector<int> f(fin.begin(),fin.end());
        return f;
        
        
        
    }
    void combinations(int ind,vector<string> &comb,vector<string> words)
    {
        if(ind==words.size())
        {
            string str="";
            for(string s:words)
                str+=s;
            //cout<<str;
            comb.push_back(str);
            
        }
        for(int i=ind;i<words.size();i++)
        {
            swap(words[i],words[ind]);
            combinations(ind+1,comb,words);
            swap(words[i],words[ind]);
        }
    }
 */
    vector<int> findSubstring(string s, vector<string>& words) {
      
        int wordlen=words[0].size(), totalwords=words.size();
        int strlen=s.size();
        unordered_map<string,int> freqMap; 
        vector<int> result;
        
        //cout<<totalwords;
        for(int i=0;i<totalwords;i++)
        {
            freqMap[words[i]]++;
        }
        for(int i=0;i<=strlen-wordlen*totalwords;i++)//running for the whole string s
        {
            unordered_map<string,int> visited;
            
            for(int j=0;j<totalwords;j++)//to check all words present in contiinuous order
            {
                int wordindex=i+j*wordlen;//word by word
                string substring=s.substr(wordindex,wordlen);
                
                if(freqMap.find(substring)==freqMap.end())//if word not in our words[]
                    break;
                visited[substring]++;
                
                if(visited[substring] >freqMap[substring]) //more words than should have been
                    break;
                //cout<<i;
                
                if(j+1==totalwords)
                    result.push_back(i);
            }
        }
         return result;
    }
       
    
    
        
};