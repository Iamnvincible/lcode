#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class TwoSum
{
  public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mapping;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            mapping[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            const int gap = target - nums[i];
            if (mapping.find(gap) != mapping.end() && mapping[gap] > i)
            {
                result.push_back(i);
                result.push_back(mapping[gap]);
                break;
            }
        }
        return result;
    }
    int *twoSum(int *nums, int numsSize, int target)
    {

        int *index = (int *)malloc(sizeof(int) * 2);

        for (size_t i = 0; i < numsSize; i++)
        {

            for (size_t j = i + 1; j < numsSize; j++)
            {
                if (nums[j] == target - nums[i])
                {
                    index[0] = i;
                    index[1] = j;
                    return index;
                }
            }
        }
        return NULL;
    }
};