package com.cy;
/**
 * ���Լ�д�ıȽ�˼·�Ƚ�ƽӹ�����������ѧϰ����д������Ȼ�е�͵���������ܰ�è��è����ץ������Ǻ�è���ǡ�
 * ����˼·�ܼ򵥣��ѵ�һ��String����ȡΪĬ���ǰ׺��֮����indexof�ж��Ƿ�Ϊ0����Ϊ0��Ĭ�ϴ����ȼ�1����
 *
 */
class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs.length==0)
        	return "";
        String ans=strs[0];
        for(int i=1;i<strs.length;i++){
        	while(strs[i].indexOf(ans)!=0){			//ע��������while����ʧ��ʱӦ�����ܼ��ٵ�ǰ�ǰ׺����
        		ans=ans.substring(0,ans.length()-1);
        	}
        }
        return ans;
    }
}
