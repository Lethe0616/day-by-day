/*
����С����һ��W*H��������ӣ�������б��Ϊ0~H-1��������б��Ϊ0~W-1��ÿ������������Է�һ�鵰�⣬�������鵰���ŷ����þ��벻�ܵ���2��
����������������(x1,y1),(x2,y2)��ŷ����þ���Ϊ:
( (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2) ) ������ƽ����
С����֪�������ԷŶ��ٿ鵰������������ 

��������:
ÿ������������񳤿�W,H���ÿո�ָ�.(1 �� W��H �� 1000)

�������:
���һ�������Էŵĵ�����
 
��������:
3 2

�������:
4
*/

#include<iostream>
using namespace std;
int main()
{
    int W,H;
    while(scanf("%d%d",&W,&H)>0)
    {
        int cnt=0;
        if(W%4==0||H%4==0)
            cnt=W*H/2;
        else if(W%2==0 && H%2==0)
            cnt=(W*H/4+1)*2;
        else
            cnt=W*H/2+1;
        cout<<cnt<<endl;
    }
}
