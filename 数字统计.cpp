#include <iostream>

#include <cstdio>//ͷ�ļ�����

using namespace std;

int main()

{

  int l,r,d,num=0;

  scanf("%d%d",&l,&r);//������ĩ��ǵ�

  for(int i=l;i<=r;i++)//����

  {

    d=i;//����ʱɨ����i��ֵ����

    while(i!=0)

    {

      if(i%10==2)//ĩλΪ2ʱ��num++

      {

        num++;

      }

      i=i/10;//����i��ֵ

    }

    i=d;//�һ�iԭ����ֵ����ɶ�������Ĳ���

  }

  printf("%d",num);//δ����г���������

  return 0;

}
