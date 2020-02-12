#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

//sort()����Ҫʹ�õ�һ������ֵΪbool�ĺ���
bool compare(int a,int b)
{
   return a<b;//��С��������
}

int main()
{
   int n,m;
   cin>>n>>m;//����n��m
   vector<int>tap(m,int(0));//����ˮ��ͷ���鲢��ʼ����ֵΪ0
   queue<int>ren;//����ѧ������

   int temp;//��ֵ��ʱ����
   for(int i=1;i<=n;i++)//Ϊѧ�����鸳ֵ
   {
      cin>>temp;
      ren.push(temp);//queue��Ա����push()�������е�ֵ�ƽ����е�ǰ��ĩ��
   }

   for(int i=0;i<m;i++)//ˮ��ͷ�����ʼ��
   {
      tap.at(i)=ren.front();//tap.at(i)��ͬ��tap[i],front()��Ա�������ص�ǰ���еĵ�һ��ֵ
      ren.pop();// queue��Ա����pop()�����е�ǰ�ĳ�ʼֵɾ������������ֵȫ��ǰ��
   }

   sort(tap.begin(),tap.end(),compare);//algorithm��Ա����sort()

   while(true)//����ѭ��
   {
      tap.at(0)+=ren.front();
      ren.pop();
      sort(tap.begin(),tap.end(),compare);
      if(ren.empty()) break;//��ѧ�����п��˵�ʱ��ֹͣѭ��
   }

   cout<<tap.back()<<endl;

   return 0;
}//����ط����׳�������ǣ����Ӧ�����ҵ�ʱ����С�Ľ���ȥ��Ȼ����ʱ�����
