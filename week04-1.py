# week04-1.py 二合一
class Solution:
    def coloredCells(self, n: int) -> int:
        ans = 0 # 迴圈前面，ans先清空
        for i in range(1, n*2, 2): # python的for迴圈
            ans = ans + i # 把這些 1,3,5,7的數，加入ans
        for i in range(1, n*2-1, 2):
            ans = ans + i #把這些1,3,5的數加入ans
        return ans
