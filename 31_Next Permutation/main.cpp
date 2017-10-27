#include <bits/stdc++.h>

using namespace std;


void nextPermutation(vector<int> &num)
{
    int i, j, n = num.size();
    for (i = n - 2; i >= 0; --i)
    {
        if (num[i + 1] > num[i])
        {
            for (j = n - 1; j >= i; --j)
            {
                if (num[j] > num[i]) break;
            }
            swap(num[i], num[j]);
//            cout<<"第一次交换后：";
//            for(int i = 0; i < num.size(); i++)
//            {
//                cout<<num[i]<< " ";
//            }
//            cout<<endl;
            reverse(num.begin() + i + 1, num.end());
//            cout<<"第一次反转后：";
//            for(int i = 0; i < num.size(); i++)
//            {
//                cout<<num[i]<< " ";
//            }
            cout<<endl;
            return;
        }
    }
    //如果没有找到，那么是最后一个序列，直接反转即可。
    reverse(num.begin(), num.end());
}

int main()
{
    freopen("in.txt","r",stdin);
    vector<int> num;
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        num.push_back(t);
    }
    nextPermutation(num);
    for(int i = 0; i < num.size(); i++)
    {
        cout<<num[i]<< " ";
    }
    return 0;
}
