# week04-1.py �G�X�@
class Solution:
    def coloredCells(self, n: int) -> int:
        ans = 0 # �j��e���Aans���M��
        for i in range(1, n*2, 2): # python��for�j��
            ans = ans + i # ��o�� 1,3,5,7���ơA�[�Jans
        for i in range(1, n*2-1, 2):
            ans = ans + i #��o��1,3,5���ƥ[�Jans
        return ans
