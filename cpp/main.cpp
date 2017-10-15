#include "searchinarray2.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    Solution r;
    vector<int> v={1,3,1,1};
    bool n=r.search(v,3);
    printf("%d\n",n);
}
