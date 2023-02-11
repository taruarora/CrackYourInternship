class Solution:
    def frequencySort(self, s: str) -> str:
        d={}
        for i in s:
            d[i]=d.get(i,0)+1
        st=""
        d=sorted(d.items(), key=lambda x: x[1],reverse=True)
        print(d)
        for key,value in d:
            st+=value*key
        return st
        