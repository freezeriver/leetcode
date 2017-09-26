#include <iostream>
#include <string>
#include <cstring>
#include <map>
using namespace std;
//�Լ�д�ģ���Ҫ�������������ֹ�����һ��map��ƥ������ɣ�Ȼ��̫����

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

//����һ�����еİ汾����������һ��˼·���Ƚϼ򵥣��Ͳ���˵�ˣ��Լ�����
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
