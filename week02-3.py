# week02-3.py �g LeetCode
#LeetCode 1. Tow Sun
#���@��Ʀr nums �̭��u����ӡv�ۥ[�A�O target
# nums[i] + nums[j] == target ��� i �M j �ϱo�[�_�ӬO target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box = {} #���@�ӽc�l�A�����X�{�L���Ʀr
        # �ڭ̷Q��X target �o�ӥ[�`
        for i, num in enumerate(nums):
            other = target - num # �t�~�@�ӻݭn���ơu�i�H��X target�v�� (target-num)
            if target-num in box: # �b�c�l�̡A���t�~�@�ӻݭn����
                return [ box[other], i ] # ��쵪��
            else: # �p�G�S���X�A���Ʀr���
                box[num] = i # �N��{�b���Ʀr num �A ��� box �̭�
