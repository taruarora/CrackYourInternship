class Solution {
public:
    bool judgeCircle(string moves) {
        
        int s=0;
        int f=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U')
            {
                s++;
            }
            else if(moves[i]== 'D')s--;
            else if(moves[i]=='R')f++;
            else f--;
        }
        if(f==0 && s==0)return true;
        return false;
        
    }
};