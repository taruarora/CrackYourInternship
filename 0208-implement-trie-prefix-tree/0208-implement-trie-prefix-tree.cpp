class TrieNode{
    bool isEnd;
    TrieNode* child[26]; 
    public:
    friend class Trie;
      TrieNode()
      {
          isEnd=false;
          for(int i=0;i<26;i++)
              child[i]=NULL;
      }
    
};

class Trie {
public:
    TrieNode* root;
    Trie() {
       root=new TrieNode();
        
    }
    
    void insert(string word) {
        TrieNode* ptr=root;
        for(int i=0;i<word.length();i++)
        {
            int index=word[i]-'a';
            if(ptr->child[index]==NULL)
                ptr->child[index]=new TrieNode();
            ptr=ptr->child[index];
            
        }
        ptr->isEnd=true;
        
    }
    
    bool search(string word) {
        TrieNode* ptr=root;
        for(int i=0;i<word.length();i++)
        {
            int index=word[i]-'a';
            if(ptr->child[index]==NULL)
                return false;
            ptr=ptr->child[index];
            
        }
        return ptr->isEnd;
        
    }
    
    bool startsWith(string prefix) {
        TrieNode* ptr=root;
        for(int i=0;i<prefix.length();i++)
        {
            int index=prefix[i]-'a';
            if(ptr->child[index]==NULL)
                return false;
            ptr=ptr->child[index];
            
        }
        return true;
        
    }
    
    bool isNull(TrieNode* root)
    {
        for(int i=0;i<26;i++)
        {
            if(root->child[i]!=NULL)
                return false;
            
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */