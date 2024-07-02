class Solution:
    def fact(self,n):
        if(n==0 or n==1):
             return 1
        return n*self.fact(n-1)
    def trailingZeroes(self, n: int) -> int:
        k=self.fact(n)
        c=0
        while(k):
            d=k%10
            if(d==0):
                c+=1
            else:
                break
            k=k//10

        return c