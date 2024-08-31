import sys

class Solution:
     """
    def cal_gap(self, nums: List[int]) -> tuple:
        # Calculate the number of zeros between the first and last 1
       
        zero = 0
        index1 = -1
        index2 = -1
        flag = True
        li = len(nums)
        
        for i in range(li):
            if nums[i] == 1:
                if flag:
                    index1 = i
                    flag = False
                elif flag==False:
                    zero += 1
                index2 = i
        
        if index1 == -1 or index2 == -1:
            return 0  
        
        
        # gap = index2 - index1 - 1
        # print(index1,index2,gap)
        return (index1,index2)

    def minSwaps(self, nums: List[int]) -> int:
        n = len(nums)
        total_ones = sum(nums)
        
        if total_ones == 0:
            return 0
        
        #circular case
        num_fin = nums + nums
        li = len(nums)
        min_gap = sys.maxsize
    
        for i in range(len(num_fin) - li ):
            nom_list = num_fin[i:i + li]
            index1,index2=self.cal_gap(nom_list)
            gap=index2-index1-total_ones+1
            min_gap = min(min_gap,total_ones-gap )
        
        
        return min_gap
    #[1,0,1,0,0,0,1,1,1,0,1] fails here 2 zeros but swap is 1
    
    """
     def minSwaps(self, nums: List[int]) -> int:
        sliding_windoww=sum(nums)
        total_ones=sum(nums)
        num_big=nums + nums #to handle this cycle
        mini=sys.maxsize
        l=0
        r=sliding_windoww-1
        sum_window=sum(num_big[l:r+1])
        mini=min(mini,total_ones-sum_window)
        while l< len(num_big)-sliding_windoww :
            sum_window-=num_big[l]
            r+=1
            sum_window+=num_big[r]
            l+=1
            mini=min(mini,total_ones-sum_window)
        print(l,r,mini)
        return mini
