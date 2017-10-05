#include "1_TwoSum.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    TwoSum t;
    vector<int> v = {3, 2, 4};
    vector<int> r = t.twoSum(v, 6);
    int nums[3] = {3, 2, 4};
    int* re = t.twoSum(nums, 3, 6);
}
