#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool flag[200]={false};
        int start=0;
        int max_len=0;
        for(int i=0;i<s.size();i++){
            if(!flag[s[i]]){
                flag[s[i]]=1;
                max_len=(max_len>i-start+1)?max_len:i-start+1;
            }
            else{
                while(s[start]!=s[i]){
                    flag[s[start]]=0;
                    start++;
                }
                start++;
            }
        }
       return max_len;
    }
};
int main()
{
    Solution s;
    cout<<s.lengthOfLongestSubstring("pwwkew");
    return 0;
}
