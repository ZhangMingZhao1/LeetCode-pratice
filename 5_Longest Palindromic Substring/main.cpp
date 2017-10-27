class Solution {
public:
string longestPalindrome(string s)
{


int len = s.length();
int left = 0,right = 0;
int Max = -1;


for(int i = 0; i < len; i++)
{
    //奇数情况
    int ans = 1;
    for(int j = 1; j < len; j++)
    {
        if(i-j<0 || i-j >= len || s[i-j]!= s[i+j])
            break;//跳到下一个下标
        ans+=2;
        if(ans>Max)
        {
            left = i-j;
            right = i+j;
        }
    }
    //每一次下标都取一次最值
    Max = Max<ans?ans:Max;


    //偶数情况
    ans = 0;
    for(int j = 1; j < len; j++)
    {
//                if(i-j+1<0 || i+j>=len ||s[i+1-j] != s[i+j])//偶数以对称点左边的数为基准
        if(i-j<0 || i-1+j>=len ||s[i-j] != s[i-1+j])//偶数以对称点右边的数为基准即abba，起始为
            //偶数的情况
            break;
        ans+=2;
        if(ans>Max)
        {
            left = i-j;
            right = i+j-1;
        }
    }
    Max = Max<ans?ans:Max;
}

//cout<<Max<<endl;
//cout<<left<<" "<<right;
    return s.substr(left,right-left+1);
}

};
