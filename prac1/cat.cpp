#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n,x,y,z;
	cin>>n;
	while(n--){
		cin>>x>>y>>z;
		if(abs(x-z)<abs(y-z)){
			cout<<"Cat A"<<endl;
		}
		else if(abs(x-z)>abs(y-z)){
			cout<<"Cat B"<<endl;
		}
		else{
			cout<<"Mouse C"<<endl;
		}
	}
}

