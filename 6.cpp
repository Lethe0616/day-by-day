/*
A,B,C�������Ǻ�����,ÿ�������ﶼ��һЩ�ǹ�,
���ǲ�֪������ÿ�������Ͼ����ж��ٸ��ǹ�,
��������֪�����µ���Ϣ��
A - B, B - C, A + B, B + C. ���ĸ���ֵ.ÿ����ĸ����ÿ������ӵ�е��ǹ���.
������Ҫͨ�����ĸ���ֵ�����ÿ���������ж��ٸ��ǹ�,��A,B,C��
���ﱣ֤���ֻ��һ������A,B,C������������������ 

��������:
����Ϊһ�У�һ��4���������ֱ�ΪA - B��B - C��A + B��B + C���ÿո������
��Χ����-30��30֮��(������)��

�������:
���Ϊһ�У�����������������A��B��C��˳�����A��B��C���ÿո��������ĩ�޿ո�
�������������������A��B��C�������No

��������:
1 -2 3 4

�������:
2 1 3
*/
int main()
{
    int m1,m2,m3,m4;
    cin >> m1 >> m2 >> m3 >> m4;
     
       int A = (m1+m3) / 2;
       int B = (m2+m4) / 2;
       int C = m4 - B;
       if(A - B == m1 && A + B == m3 &&
          B-C == m2 && B+C == m4)
       {
           cout << A <<" "<< B<<" "<< C << endl;
       }
        else
        {
            cout << "No" << endl;
        }
    return 0;
}
