class RemoveDuplicates(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        occurs = 2
        if len(nums) <= occurs:
            return len(nums)
        else:
            flag = occurs
            for i in range(len(nums) - occurs):
                if nums[i + occurs] != nums[flag - occurs]:
                    nums[flag] = nums[i + occurs]
                    flag += 1
            return flag
