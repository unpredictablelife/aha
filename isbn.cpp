#include<iostream>
#include<cstdio>
using namespace std;

char a[14],b[14],t1,t2;
int t22=0;

int main()
{
//    freopen("isbn.in","r",stdin);
//    freopen("isbn.ans","w",stdout);
    scanf("%c-%c%c%c-%c%c%c%c%c-%c",&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&t1);//��������
//ע�⣬������scanf�����ԣ����Զ���ָ�����ַ�����������Լ��������ϡ���˶���Ķ��������ַ�
    for(int i=1;i<=9;++i)
        t22+=(a[i]-'0')*i;//�����ذ���ĿҪ������õ��Ը��������
    t2=t22%11+'0';//���ĩλ�ı�׼ֵ
    if(t2=='0'+10)t2='X';//���⴦��
    if(t1==t2)//�жϣ�������ϣ����Right
    {
        cout<<"Right";
        return 0;
    }
    cout<<a[1]<<'-'<<a[2]<<a[3]<<a[4]<<'-'<<a[5]<<a[6]<<a[7]<<a[8]<<a[9]<<'-'<<t2;//���������
    return 0;//������������
}
