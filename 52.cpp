/*
Problem Description
�Ϻ���������һ���ӣ�����ȺС������������һ�ʾ޴�ĲƸ�����һ������ӡ��Ϻ��Ӿ�������Щ���ӷָ�С���ӡ�

��һ���������ˣ��������ӷֳ���ѣ����һ���࣬�������һ��������ʣ�µ�һ�������Ϻ��ӣ��Լ��������е�һ�ѡ�

�ڶ����������ˣ��������ӷֳ���ѣ����һ���࣬���ֶ��һ�������Ѷ����һ�������Ϻ��ӣ��Լ��������е�һ�ѡ�
������С���Ӷ�����հ졣���ʣ�µ�����ȫ�������Ϻ��ӡ�

������nֻС���ӣ�����д���������һ���ڿ�ʼʱ�����ж��ٸ����ӣ��Լ�����Ϻ��������ܵõ��������ӡ�

Input
�����������������ݡ�
ÿ��������ݰ���һ������n(1��n��10)��
������0���������в���������

Output
ÿ��������ݶ�Ӧһ�������
������������a��b��
�ֱ������ʼʱ��С��Ҫ�����������ͽ������Ϻ��������ܵõ�����������

Sample Input
5
1
0
Sample Output
3121 1025
*/ 
#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
int main()  
{  
    int n;  
    while(scanf("%d",&n)&&n)    //n��С����
    {  
        long long int k=1;  
        long long int i;  
        for(i=0; i<n; i++)  
        {  
            k*=5;  
        }  
        k = k-4;  
        long long int q=k;  
        for(i=0; i<n; i++)  
        {  
            q = (q-1)/5 * 4;  
        }  
        q += n;  
        printf("%lld %lld\n",k,q);  
    }  
    return 0;  
}  