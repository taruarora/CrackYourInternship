import string

class Solution:
    def replaceDigits(self, s: str) -> str:
        st=""
        d=s[0]
        for i in s:
            if ord(i) >= 48 and ord(i) <= 57:
                i=ord(d)+int(i)
                st=st+chr(i)
            else:
                st=st+i
            
            d=i
        return st
