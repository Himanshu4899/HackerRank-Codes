#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	char a[n],b[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	
	int count=0;
	int i=0;
	while(n--){
		if(a[i]!=b[i] && a[i]!='.'){
			count++;
		}
		i++;
	}
	cout<<count;
	
}
	
