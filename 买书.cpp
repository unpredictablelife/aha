#include<bits/stdc++.h>
//����ͷ�ļ�
//C++����ͷ���Ǻã����п������򣬶��еȶ���stl�����棬ʮ�ֺ��ã�
using namespace std;
int main()
{
 int n;
 cin>>n;
 int a[1001],ans=0;//����a������������book��������ã���ans��¼��ͬ�����ĸ���
 memset(a,0,sizeof(a));//��ʼ��
 for(int i=1;i<=n;i++)//��ʼͰ����
 {
  int x;
  cin>>x;
  if(!a[x])//��������û�г��ֹ�
  {
   a[x]=1;//���Ϊ���ֹ�
   ans++;//��+1
  }
 }
 cout<<ans<<endl;//�����ͬ�����ĸ���
 for(int i=1;i<=1000;i++)
 {
  if(a[i])//������ֹ������
  {
   cout<<i<<" ";//��������
   ans--; //����-1
  }
  if(ans==0) break;//������������0����ֱ���˳�
 }
 return 0;//���Ľ�����������
}
