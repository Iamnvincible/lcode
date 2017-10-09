class RemoveDuplicates(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) < 1:
            return 0
        else:
            flag = 0
            for i in range(len(nums) - 1):
                if nums[i + 1] != nums[flag]:
                    flag += 1
                    nums[flag] = nums[i + 1]
            return flag + 1
