#include<iostream>
using namespace std;
struct student{
	string name;
	int score1;
	int score2;
	bool G;
	bool X;
	int paper;
	int bonus;
};
struct student t[101];
int main(){
	int n;
	cin>>n;
	char a,b;
	for(int i=0;i<n;i++){
		cin>>t[i].name;
		cin>>t[i].score1;
		cin>>t[i].score2;
		cin>>a;
		cin>>b;
		if(a=='Y'){
			t[i].G=true;
		}
		if(a=='N'){
			t[i].G=false;
		}
		if(b=='Y'){
			t[i].X=true;
		}
		if(b=='N'){
			t[i].X=false;
		}
		cin>>t[i].paper;
	}
	for(int i=0;i<n;i++){
		if(t[i].score1>80&&t[i].paper!=0){
			t[i].bonus+=8000;
		}
		if(t[i].score1>85&&t[i].score2>80){
			t[i].bonus+=4000;
		}
		if(t[i].score1>90){
			t[i].bonus+=2000;
		}
		if(t[i].score1>85&&t[i].X==true){
			t[i].bonus+=1000;
		}
		if(t[i].score2>80&&t[i].G==true){
			t[i].bonus+=850;
		}
	}
		int max=t[0].bonus;
		int maxi=0;
		int all=0;
		for(int i=0;i<n;i++){
			if(max<t[i].bonus){
				maxi=i;
				max=t[i].bonus;
			}
			all+=t[i].bonus;
		}
		cout<<t[maxi].name<<endl;
		cout<<max<<endl;
		cout<<all<<endl;
		return 0;
}

