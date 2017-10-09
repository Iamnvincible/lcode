#include "1_TwoSum.h"
#include "removeDuplicates.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    Rmdup r;
    vector<int> v={1,1,2,3,4,4,4,5,5,6,7};
    int n=r.removeDuplicates(v);
    printf("%d\n",n);
}
