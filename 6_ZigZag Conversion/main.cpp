#include <bits/stdc++.h>

#define INF 0x3fffffff
#define eps 1e-8

typedef long long LL;
const double pi = acos(-1.0);
const int mod = 1e9 + 7;
const int maxn = 70;
using namespace std;

string convert(string s, int nRows)
{
    if(nRows == 1)return s;
    int len = s.size(), k = 0, interval = (nRows<<1)-2;
    string res(len, ' ');
    for(int j = 0; j < len ; j += interval)//处理第一行
        res[k++] = s[j];
    for(int i = 1; i < nRows-1; i++)//处理中间行
    {
        int inter = (i<<1);//就是i*2，写成位运算是不是高大上一些
        for(int j = i; j < len; j += inter)
        {
            //第一次加的就是字符串第一列的
            res[k++] = s[j];
            inter = interval - inter;//interval–2*i或者interval-(interval–2*i)=2*i
        }
    }
    for(int j = nRows-1; j < len ; j += interval)//处理最后一行
        res[k++] = s[j];
    return res;
}

int main()
{
    freopen("in.txt","r",stdin);
    string ss;
    cin>>ss;
    cout<<convert(ss, 5);
    return 0;
}
