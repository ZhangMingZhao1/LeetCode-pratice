#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   string longestCommonPrefix(vector<string>& strs) {
        //strs 字符串数组
        int n = strs.size();
        string ans;
        if(n == 0) return ans;
        string s = strs[0];

        for(int i = 0; i < s.length(); i++) { //以第一个字符串为基准，最长公共前缀不会超过第一个
            for(int p = 0; p < n; p++) { //遍历其他字符串
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
