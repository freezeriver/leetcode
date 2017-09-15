#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;
//题面是让你判断一个数字是否为回文，利用数字反转求出回文数字，注意一下负数不是回文数以及反转越界问题即可
class Solution {
public:
    bool isPalindrome(int x) {
        long long palindrome=0;
        int origin=x;
        if(x<0){
              return false;
        }
        while(origin>0){
            palindrome=10*palindrome+origin%10;
            origin/=10;
        }

        return palindrome==x;
    }
};

int main()
{
    Solution S1;
    cout<<S1.isPalindrome(-121);
    return 0;
}
