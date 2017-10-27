#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
    return pow(x,n);
 }
};
int main()
{
    Solution s1;
    cout<<s1.myPow(2,-1);
    return 0;
}
