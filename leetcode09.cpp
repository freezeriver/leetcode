#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;
//�����������ж�һ�������Ƿ�Ϊ���ģ��������ַ�ת����������֣�ע��һ�¸������ǻ������Լ���תԽ�����⼴��
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
