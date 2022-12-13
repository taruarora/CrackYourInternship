class Solution:
    def checkValid(self, matrix: List[List[int]]) -> bool:
        row=collections.defaultdict(set)
        col=collections.defaultdict(set)
        
        #dict -> {0:{1,2,3}, 1:{1,2,3}, 2:{1,2,3}}
        
        n=len(matrix)
        for i in range(n):
            for j in range(n):
                    row[i].add(matrix[i][j])
                    col[j].add(matrix[i][j])
                    #to check length of all rows in set
            if len(row[i])!=n:
                return False
            
        #to check the length of all cols
        for i in range(n):
            if len(col[i])!=n:
                return False
                    
        return True