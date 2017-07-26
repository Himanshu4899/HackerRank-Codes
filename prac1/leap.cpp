#include<iostream>

using namespace std;

int main(){
	int a,b,c;
	cin>>a;
	if(a<=1917){
		if(a%4==0){
			cout<<"12.09."<<a<<endl;
		}
		else{
			cout<<"13.09."<<a<<endl;
		}
	}
	else if(a==1918){
		cout<<"26.09.1918"<<endl;
	}
	else{
		if((a%400)==0 ||(a%4==0 && a%100!=0)){
			cout<<"12.09."<<a<<endl;
		}
		else{
			cout<<"13.09."<<a<<endl;
		}
	}
return 0;
}
