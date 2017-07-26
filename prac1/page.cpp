#include<iostream>

using namespace std;

int main(){
	int m,n,x;
	cin>>m>>n;
	if(n==1 || n==m||n==(m-1)){
		cout<<"0"<<endl;
	}
	else{
		if(n<=(m/2)){
			cout<<n/2;
		}
		else{
			int temp = m-n;
			cout<<temp/2;
		}
	}
return 0;
}
