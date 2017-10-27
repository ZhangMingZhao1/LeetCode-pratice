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
//            cout<<"��һ�ν�����";
//            for(int i = 0; i < num.size(); i++)
//            {
//                cout<<num[i]<< " ";
//            }
//            cout<<endl;
            reverse(num.begin() + i + 1, num.end());
//            cout<<"��һ�η�ת��";
//            for(int i = 0; i < num.size(); i++)
//            {
//                cout<<num[i]<< " ";
//            }
            cout<<endl;
            return;
        }
    }
    //���û���ҵ�����ô�����һ�����У�ֱ�ӷ�ת���ɡ�
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
