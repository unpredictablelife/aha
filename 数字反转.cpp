#include<iostream>
#include <iostream>
using namespace std;
int main()
{
	long n,m=0;
	cin>>n;
	while(n!=0)
	{
		m=m*10+n%10;//���10�����㣬��������ط��ͽ��������
		n/=10;
	}
	cout<<m;
	return 0;
}

