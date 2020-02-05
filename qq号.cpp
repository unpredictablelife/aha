#include<iostream>
#include<queue>
using namespace std;
int main(){
	int x;
	cin>>x;
	queue<int>t;
	while(cin.get()!='\n'){
		t.push(x);
	}
	while(!t.empty()){
		cout<<t.front();
		t.pop();
		t.push(t.front());
		t.pop();
	}
	return 0;
}//stl的使用出了一点问题
