#include<iostream>

using namespace std;

int main(){
	 int m,n;
	cin>>n>>m;
	long long int a,b,k;
	long long int c[n]={0};
	long long int max=0;
	for(long long int i=0;i<m;i++){
		cin>>a>>b>>k;
		for(long long int j=a-1;j<=b-1;j++){
			c[j]+=k;
			if(c[j]>max){
				max=c[j];
			}
			
		}
	}
	cout<<max;
}
