#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Rmdup
{
  public:
    int removeDuplicates(vector<int> &nums)
    {
        //学习一个
        return distance(nums.begin(), unique(nums.begin(), nums.end()));

        if (nums.size() < 1)
            return 0;
        else
        {
            int flag = 0;
            for (int i = 1; i < nums.size(); i++)
            {
                if (nums[flag] != nums[i])
                {
                    flag++;
                    nums[flag] = nums[i];
                }
            }
            return flag + 1;
        }
        // return 0;
    }
    int removeDuplicates(int *nums, int numsSize)
    {
        if (numsSize <= 1)
        {
            return numsSize;
        }
        if (numsSize <= 2)
        {
            if (nums[0] == nums[1])
                return 1;
        }

        int counts = 0;
        for (int i = 0; i < numsSize - counts - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                for (int j = i + 1; j < numsSize - counts - 1; j++)
                {
                    nums[j] = nums[j + 1];
                }
                i--;
                counts++;
            }
        }
        return numsSize - counts;
    }
};