#include<iostream>
using namespace std;
int a[102];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		cin>>a[i];
	}
	if(a[0]>1){
		cout<<a[0];
	}
	if(a[0]==-1){
		cout<<"-";
	}
	if(a[0]<-1){
		cout<<a[0];
	}
	cout<<"x^"<<n;
	for(int i=1;i<n-1;i++){
		if(a[i]<-1){
  		cout<<a[i];
		cout<<"x^";
		cout<<n-i;
	}
	if(a[i]>1){
		cout<<"+";
  		cout<<a[i];
		cout<<"x^";
		cout<<n-i;
	}
	if(a[i]==1){
		cout<<"+";
		cout<<"x^";
		cout<<n-i;
	}
	if(a[i]==-1){
		cout<<"-";
		cout<<"x^";
		cout<<n-i;
	}
	}
	if(a[n-1]>1){
		cout<<"+";
		cout<<a[n-1];
		cout<<"x";
	}
	if(a[n-1]==1){
		cout<<"+x";
	}
	if(a[n-1]==0){
	}
	if(a[n-1]==-1){
		cout<<"-x";
	}
	if(a[n-1]<-1){
		cout<<a[n-1];
		cout<<"x";
	}
	if(a[n]>0){
		cout<<"+";
		cout<<a[n];
	}
	if(a[n]<0){
		cout<<a[n];
	}
	return 0;
}
