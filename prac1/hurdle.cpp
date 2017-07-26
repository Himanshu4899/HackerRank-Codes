#include<iostream>
using namespace std;

int main(){
	int n,m,k=0;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		
		if(a[i]<=m){
			continue;
		}
		else{
			k+=(a[i]-m);
			m=a[i];
		}
	}
	cout<<k;
}
