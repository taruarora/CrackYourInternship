class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        total = 0
        DigitRom = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
        
        for i in s:
            total+=DigitRom[i]
            
        if "IV" in s:
            total -=2  #as total abpve would have been 1+5=6 but the answer should have been 4
        if "IX" in s:
            total -=2 # 1+10 then 9
        if "XL" in s: # XL-> 40
            total -=20
        if "XC" in s: # XC->90 
            total -=20
        if "CD" in s: #CD 400 JBKI IT GIVES 600
            total -=200
        if "CM" in s: #CM->900
            total -=200
            
        return total