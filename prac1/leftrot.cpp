#include<iostream>

using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	m = (m%n);
	if(m==0){
		for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
		}
	}	
	else{
		int count =0;
		while(count<n){
			if(m<n){
				cout<<a[m]<<" ";
				m++;
				count++;
			}
			else{
				m=0;
				cout<<a[m]<<" ";
				m++;
				count++;
			}
		}
	}
}
			
			
	
