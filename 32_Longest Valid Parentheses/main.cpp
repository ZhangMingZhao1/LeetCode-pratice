#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    string s;
    cin>>s;
     stack<int> sta;
        int Max=0;
        int lastPos=0;
        for (int pos=0; pos<s.length(); pos++) {
            if (s[pos]=='(') //���������ţ�ֱ�Ӵ��롣
               sta.push(pos);
            else { //���������ţ����������
                if (sta.empty()) //�����ʱջ���������Ѿ����������ˣ�û�ж����������������Ե�ǰ���������ˣ���ô��ǰ�������žͱ��������ˣ�������ǰ�Ӵ����Խ����ˣ���ʱ��������Ҳ��Ϊ����һ��group�ķֽ�㣬��ʱ�������±�Ϊindex��������һ��group����ʼ��Ϊindex+1,�൱��skip����ǰ�������š�
                    lastPos=pos+1;
                else { //�����ʱջ���գ����������������1��ջ����ʣ��1�������ź͵�ǰ��������� 2)ջʣ�²�ֹ1�������ţ�
                   sta.pop();
                    if (sta.empty())  //ջpop()֮ǰ����ʣ��1�������ţ�pop()֮��ջ���ˣ���ʱgroup����Ϊpos-lastPos
                        Max=max(Max, pos-lastPos+1);
                    else  //ջ��pop()֮ǰʣ�²�ֹ1�������ţ���ʱ��������������ʹ���µ�group�γɡ���()(()())��index=4ʱ��stack����2��������
                        Max=max(Max, pos-sta.top());
                }
            }
        }
        cout<<Max;
    }
