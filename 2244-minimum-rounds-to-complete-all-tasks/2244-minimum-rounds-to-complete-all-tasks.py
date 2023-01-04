from collections import Counter, OrderedDict
class Solution(object):
    def minimumRounds(self, tasks):
        """
        :type tasks: List[int]
        :rtype: int
        """
        frequency = Counter(tasks)
        res = 0
        for freq in frequency.values():
            if freq == 1:
                return -1
            elif (freq-2) % 3 == 0:
                res += (freq-2) // 3 + 1
            elif (freq - 4) % 3 == 0:
                res += (freq - 4) // 3 +2
            elif freq % 3 == 0:
                res += freq // 3
        return res
                
        
        