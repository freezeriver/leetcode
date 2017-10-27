#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        long long ans=0;
        long long mmax=2147483648;
        if(str==""||str.empty())
            return 0;
        size_t n = str.find_last_not_of(" ");
        if( n != string::npos )
        {
            str.erase( n + 1 , str.size() - n );
        }

        n = str.find_first_not_of (" ");
        if( n != string::npos )
        {
            str.erase( 0 , n );
        }
        bool flag=1;
        int i=0;
        if(str[i]=='+'||str[i]=='-'){
            if(str.length()<2)
                return 0;
            if(str[i]=='-')
                flag=0;
            i++;
        }
        for(;i<str.length();i++){
            if(str[i]>='0'&&str[i]<='9'){
                ans=ans*10+str[i]-'0';
                if(ans>mmax)break;
            }
            else{
                break;
            }
        }
        if(flag==0)
            ans=-ans;
        if(ans>mmax-1)ans=2147483647;
        if(ans<-mmax)ans=-2147483648;
        return ans;

    }
};

int main()
{
    Solution s;
    cout<<s.myAtoi("    -37434284723");
    return 0;
}
