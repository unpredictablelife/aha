#include <iostream>

#include <cstdio>

using namespace std;

int main()

{

   int n,x,ans=0,c;

   scanf("%d%d",&n,&x);

   for(int k=1;k<=n;k++)

   {

      c=k;//�������c��Ϊ�˲���k�������иı�ֵ���Ӷ�Ӱ��ѭ������

      while(c!=0)

      {

        if(c%10==x)

           ans++;

         c/=10;

      }

   }

   printf("%d",ans);

   return 0;

}
