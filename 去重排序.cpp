#include<iostream>
using namespace std;
int a[1000];
int b[1000];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	b[0]=a[0];
	int k=0;
	for(int i=0;i<n;i++){
		if(a[i]!=a[i+1]){
			b[k+1]=a[i+1];
			k++;
		}
	}
	cout<<k<<endl;
	cout<<b[0];
	for(int i=1;i<k;i++){
		cout<<" "<<b[i];
	}
	return 0;
}
