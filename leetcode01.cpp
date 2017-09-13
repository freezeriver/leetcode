#include <iostream>
#include <vector>
#include <cstring>
#include <stdlib.h>
#include <map>
using namespace std;

/*class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
    }
};*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> pairnum;
        vector<int> ans;
        int N = nums.size();
        for(int i = 0; i < N; i++)
        {
            int value = nums[i];
            if( pairnum.count(target - value) )
            {
                ans.push_back(pairnum[target - value]);
                ans.push_back(i);
                return ans;
            }
            pairnum.insert(pair<int, int>(value, i));
        }
    }
};

int main()
{
    Solution s1;
    vector<int> test;
    vector<int> ans1;
    test.push_back(2);
    test.push_back(7);
    test.push_back(5);
    test.push_back(8);
    ans1=s1.twoSum(test,9);
    for(int i=0;i<ans1.size();i++)
        cout<<ans1[i]<<endl;
    return 0;
}
