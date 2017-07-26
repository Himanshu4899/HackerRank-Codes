#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int sum=0;
	
	if(a>=10){
		sum+=100;
	}
	else if(a>0 && a<10){
		sum+=(a*10);
	}
	
	if(b>=10){
		sum+=100;
	}
	else if(b>0 && b<10){
		sum+=(b*10);
	}
	
	if(c>=10){
		sum+=100;
	}
	else if(c>0 && c<10){
		sum+=(c*10);
	}
	cout<<sum;
return 0;
}
	
