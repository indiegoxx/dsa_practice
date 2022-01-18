class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0 or (x > 0 and x % 10 == 0):
            return False
        else:
            rev = 0
            while(x > rev):
                rev = (rev * 10) + (x % 10)
                x = x // 10
            if(rev == x) or (rev // 10 == x):
                return True
            else:
                return False
