/*
��Ŀ����
С�׾���������������Ϸ.��һ��,������һ�������������Ϸ,���Ľ�ɫ�ĳ�ʼ����ֵΪ a.�ڽ�������һ��ʱ����,��������������n������,ÿ������ķ�����Ϊb1,b2,b3...bn. ��������Ĺ��������biС�ڵ���С�׵ĵ�ǰ����ֵc,��ô���������ɴ�ܹ���,�� ��ʹ���Լ�������ֵ����bi;���bi����c,����Ҳ�ܴ�ܹ���,����������ֵֻ������bi ��c�����Լ��.��ô��������,��һϵ�еĶ�����,С�׵���������ֵΪ����?

��������:
����ÿ������,��һ������������n(1��n<100000)��ʾ�����������a��ʾС�׵ĳ�ʼ����ֵ.
�ڶ���n������,b1,b2...bn(1��bi��n)��ʾÿ������ķ�����
�������:
����ÿ������,���һ��.ÿ�н�����һ������,��ʾС�׵���������ֵ
ʾ��1

����
����

3 50 50 105 200 5 20 30 20 15 40 100
���
����

110
205
*/ 
#include <iostream>
#include "stdio.h"
#include <vector>
using namespace std;
int gcd(int m ,int n)
{
    if(n==0)
        return m;
    
    int temp = m%n;
    m=n;
    n=temp; 
    return gcd(m,n);
}
int main()
{
    int n,ans;
    while(cin>>n>>ans)
    {
        while(n>0)
        {
            int cur;
            cin>>cur;
            ans = ans + ((ans<cur)? gcd(cur, ans):cur);
            n--;
        }
        cout<<ans<<endl;
    }
    return 0;
}