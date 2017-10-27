#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   string longestCommonPrefix(vector<string>& strs) {
        //strs �ַ�������
        int n = strs.size();
        string ans;
        if(n == 0) return ans;
        string s = strs[0];

        for(int i = 0; i < s.length(); i++) { //�Ե�һ���ַ���Ϊ��׼�������ǰ׺���ᳬ����һ��
            for(int p = 0; p < n; p++) { //���������ַ���
                if(s[i] != strs[p][i] || strs[p].length() == i) {
                    return ans;
                }
            }
            ans.push_back(strs[0][i]);
        }
        return ans;
    }

};

int main() {
    vector<string> ss;
    ss.push_back("leetcode");
    ss.push_back("leet");
    ss.push_back("lee");
    Solution sol;
    cout<<sol.longestCommonPrefix(ss)<<endl;
    return 0;
    }
