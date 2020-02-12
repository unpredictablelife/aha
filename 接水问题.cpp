#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

//sort()函数要使用的一个返回值为bool的函数
bool compare(int a,int b)
{
   return a<b;//从小到大排列
}

int main()
{
   int n,m;
   cin>>n>>m;//输入n和m
   vector<int>tap(m,int(0));//创建水龙头数组并初始化赋值为0
   queue<int>ren;//创建学生数组

   int temp;//赋值临时变量
   for(int i=1;i<=n;i++)//为学生数组赋值
   {
      cin>>temp;
      ren.push(temp);//queue成员函数push()将括号中的值推进队列当前的末端
   }

   for(int i=0;i<m;i++)//水龙头数组初始化
   {
      tap.at(i)=ren.front();//tap.at(i)等同于tap[i],front()成员函数返回当前队列的第一个值
      ren.pop();// queue成员函数pop()将队列当前的初始值删除，后面所有值全部前推
   }

   sort(tap.begin(),tap.end(),compare);//algorithm成员函数sort()

   while(true)//永久循环
   {
      tap.at(0)+=ren.front();
      ren.pop();
      sort(tap.begin(),tap.end(),compare);
      if(ren.empty()) break;//当学生队列空了的时候停止循环
   }

   cout<<tap.back()<<endl;

   return 0;
}//这个地方容易出问题的是，这个应当是找到时间最小的接上去，然后找时间最长的
