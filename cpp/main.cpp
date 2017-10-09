#include "removeDuplicates2.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    Rmdup r;
    vector<int> v={1,1,1,1,1,2,2,2,3,4,5};
    int n=r.removeDuplicates(v);
    printf("%d\n",n);
}
