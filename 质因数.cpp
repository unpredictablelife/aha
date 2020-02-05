#include<iostream>
using namespace std;
int main(){
	long long int c;
	int i;
	cin>>c;
	for(i=2;i*i<=c;i++){
		if(c%i==0)
			break;
	}
	cout<<c/i<<endl;
	return 0;
}
