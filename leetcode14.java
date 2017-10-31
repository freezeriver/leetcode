package com.cy;
/**
 * 我自己写的比较思路比较平庸，这个是网上学习来的写法，虽然有点偷鸡，但不管白猫黑猫，能抓老鼠就是好猫不是。
 * 整体思路很简单，把第一个String对象取为默认最长前缀，之后用indexof判断是否为0，不为0则默认串长度减1即可
 *
 */
class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs.length==0)
        	return "";
        String ans=strs[0];
        for(int i=1;i<strs.length;i++){
        	while(strs[i].indexOf(ans)!=0){			//注意这里是while，当失配时应尽可能减少当前最长前缀长度
        		ans=ans.substring(0,ans.length()-1);
        	}
        }
        return ans;
    }
}
