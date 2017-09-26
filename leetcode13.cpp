#include <iostream>
#include <string>
#include <cstring>
#include <map>
using namespace std;
//自己写的，主要是利用罗马数字规则，用一个map表匹配来完成，然而太慢了

/*class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        map <char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        for(int i=0;i<s.size();i++){
            int tmp=m[s[i]];
            if((m[s[i+1]]<=m[s[i]])||(i==s.size()-1)) ans+=tmp;
            else ans-=tmp;
        }
        return ans;
    }
};*/

//这是一个大佬的版本，给出了另一种思路，比较简单，就不多说了，自己看吧
class Solution {
    public:
        int romanToInt(string s) {
            int ret = toNumber(s[0]);
            for (int i = 1; i < s.length(); i++) {
                if (toNumber(s[i - 1]) < toNumber(s[i])) {
                    ret += toNumber(s[i]) - 2 * toNumber(s[i - 1]);
                } else {
                    ret += toNumber(s[i]);
                }
            }
            return ret;
        }

        int toNumber(char ch) {
            switch (ch) {
                case 'I': return 1;
                case 'V': return 5;
                case 'X': return 10;
                case 'L': return 50;
                case 'C': return 100;
                case 'D': return 500;
                case 'M': return 1000;
            }
            return 0;
        }
    };
int main()
{
    Solution s;
    cout<<s.romanToInt("IV");
    return 0;
}
