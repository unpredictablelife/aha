#include<bits/stdc++.h>
//万能头文件
//C++万能头就是好，还有快速排序，队列等都在stl库里面，十分好用！
using namespace std;
int main()
{
 int n;
 cin>>n;
 int a[1001],ans=0;//其中a数组起到了书中book数组的作用，而ans记录不同的数的个数
 memset(a,0,sizeof(a));//初始化
 for(int i=1;i<=n;i++)//开始桶排序
 {
  int x;
  cin>>x;
  if(!a[x])//如果这个数没有出现过
  {
   a[x]=1;//标记为出现过
   ans++;//答案+1
  }
 }
 cout<<ans<<endl;//输出不同的数的个数
 for(int i=1;i<=1000;i++)
 {
  if(a[i])//如果出现过这个数
  {
   cout<<i<<" ";//输出这个数
   ans--; //个数-1
  }
  if(ans==0) break;//如果个数变成了0，就直接退出
 }
 return 0;//愉快的结束了主程序
}
