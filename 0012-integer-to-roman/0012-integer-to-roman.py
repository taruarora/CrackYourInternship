class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        digits=[1000,900,500,400,100,90,50,40,10,9,5,4,1];

        romans=["M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"]
        s=""
        
        for i in range(0,len(digits)):
            while num>=digits[i]:
                s+=romans[i]
                num-=digits[i]
        return s
            
                    
                    

                    
            