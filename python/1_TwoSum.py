class TwoSum:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        # dic = dict()
        # ret = list()
        # for idx, val in enumerate(nums):
        #     dic[val] = idx
        # for idx, val in enumerate(nums):
        #     gap = target - val
        #     if (dic.__contains__(gap) and dic[gap] > idx):
        #         ret.append(idx)
        #         ret.append(dic[gap])
        #         break
        # return ret

        dic={}
        for i in range(len(nums)):
            gap=target-nums[i]
            if gap in dic:
                return [dic[gap],i]
            else:
                dic[nums[i]]=i

t = TwoSum()
l = t.twoSum([2, 5, 5, 11], 10)
#if(1 == 1 and 1 == 1):
print(l)
