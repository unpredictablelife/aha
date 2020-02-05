#include<iostream>
using namespace std;

int judge(int x, int y) {
    return !(x ^ y);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<judge(a,b);
	return 0;
}
