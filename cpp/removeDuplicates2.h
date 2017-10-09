#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Rmdup
{
  public:
    int removeDuplicates(vector<int> &nums)
    {
        int occurs = 2;
        if (nums.size() <= occurs)
            return nums.size();
        else
        {
            int flag = occurs;
            for (int i = occurs; i < nums.size(); i++)
            {
                if (nums[flag - occurs] != nums[i])
                {
                    nums[flag++] = nums[i];
                }
            }
            return flag;
        }
    }
};