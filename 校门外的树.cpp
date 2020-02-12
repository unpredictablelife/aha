#include<iostream>
using namespace std;
int t[10001];
int main(){
	int a,b;
	cin>>a;
	cin>>b;
	for(int i=0;i<=a;i++){
		t[i]=1;
	}
	int c,d;
	for(int i=0;i<b;i++){
		cin>>c>>d;
		for(int i=c;i<=d;i++){
			t[i]=0;
		}
	}
	int num=0;
	for(int i=0;i<=a;i++){
		if(t[i]==1)
			num++;
	}
	cout<<num<<endl;
	return 0;
}
