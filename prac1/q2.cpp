#include<iostream>
using namespace std;
int main(){
	int n, a[101];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for( int i=1; i<n;i++){
	
		while(a[i]<a[i+1])
		
			
