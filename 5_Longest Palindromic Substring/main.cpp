class Solution {
public:
string longestPalindrome(string s)
{


int len = s.length();
int left = 0,right = 0;
int Max = -1;


for(int i = 0; i < len; i++)
{
    //�������
    int ans = 1;
    for(int j = 1; j < len; j++)
    {
        if(i-j<0 || i-j >= len || s[i-j]!= s[i+j])
            break;//������һ���±�
        ans+=2;
        if(ans>Max)
        {
            left = i-j;
            right = i+j;
        }
    }
    //ÿһ���±궼ȡһ����ֵ
    Max = Max<ans?ans:Max;


    //ż�����
    ans = 0;
    for(int j = 1; j < len; j++)
    {
//                if(i-j+1<0 || i+j>=len ||s[i+1-j] != s[i+j])//ż���ԶԳƵ���ߵ���Ϊ��׼
        if(i-j<0 || i-1+j>=len ||s[i-j] != s[i-1+j])//ż���ԶԳƵ��ұߵ���Ϊ��׼��abba����ʼΪ
            //ż�������
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
