#include <iostream>
#include <cstring>
#include <string>
#include <stack>

using namespace std;
class Solution {
public:
    bool isValid(string s) {
    stack<char> str;
    for(int i=0;i<s.length();i++){
        switch(s[i])
        {
        case '{':
        case '[':
        case '(':str.push(s[i]);break;
        case '}':
        case ']':
        case ')':char temp=s[i];
                 if(str.empty())
                    return false;
                 else if((temp=='}'&&str.top()=='{')||(temp==']'&&str.top()=='[')||(temp==')'&&str.top()=='('))
                    str.pop();
                 else{
                    return false;
                 }
        }
    }
    if(!str.empty()){
        return false;
    }
    else
        return true;
    }
};

int main()
{
    Solution s1;
    cout<<s1.isValid("]")<<endl;
}
