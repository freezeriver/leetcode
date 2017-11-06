#include <iostream>
#include <string>
#include <cstring>

using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        string ans="";
        if(numRows==1) return s;
        for(int i=0;i<numRows;i++){
            for(int j=i;j<s.length();){
                if(i==0||i==numRows-1){
                    ans = ans+s[j];
                    j+=numRows*2-2;
                }
                else{
                    if(j==i){
                        ans = ans+s[j];
                    }
                    j+=numRows*2-2;
                    if(j>numRows&&((j-2*i)<s.length()))
                        ans=ans+s[j-2*i];
                    if(j<s.length()){
                        ans = ans+s[j];
                    }
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    cout<<s.convert("ABCD",3);
    return 0;
}
