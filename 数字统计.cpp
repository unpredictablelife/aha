#include <iostream>

#include <cstdio>//头文件··

using namespace std;

int main()

{

  int l,r,d,num=0;

  scanf("%d%d",&l,&r);//输入起末标记点

  for(int i=l;i<=r;i++)//遍历

  {

    d=i;//将此时扫到的i的值保存

    while(i!=0)

    {

      if(i%10==2)//末位为2时将num++

      {

        num++;

      }

      i=i/10;//更新i的值

    }

    i=d;//找回i原来的值，完成对这个数的操作

  }

  printf("%d",num);//未被和谐的输出……

  return 0;

}
