#include<iostream>
#include <iostream>
using namespace std;
int main()
{
	long n,m=0;
	cin>>n;
	while(n!=0)
	{
		m=m*10+n%10;//零乘10还是零，所以这个地方就解决了问题
		n/=10;
	}
	cout<<m;
	return 0;
}

