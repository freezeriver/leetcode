#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
//简单的数据反转，没有什么好说的
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int cut=INT_MAX;
        if(x==-x){
            return 0;
        }
        else if(x<0){
            return -reverse(-x);
        }
        else{
            long long ans=0;
            while(x>0){
                int temp=x%10;
                ans=ans*10+temp;
                if(ans>cut)
                    return 0;
                x=x/10;
            }
            return ans;
        }


    }
};

int main()
{
    Solution s1;
    cout<<s1.reverse(-123);
    return 0;
}
