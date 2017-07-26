#include<iostream>
using namespace std;
int main(){
	long long int n,x,max=0,count=0;
	cin>>n;
	while(n--){
		cin>>x;
		if(x>max){
			max=x;
			count=1;
		}
		else{
			if(x==max){
				count++;
			}
		}
	}
	cout<<count<<endl;
}
