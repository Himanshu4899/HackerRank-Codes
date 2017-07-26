#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n;
	cin>>n;
	int min=999999;
	int a[n];
	int flag=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			
			if(a[i]==a[j]){
				flag=1;
				if(abs(j-i)<min){
					min= abs(j-i);
				}
			}
		}
	}
	if(flag==0){
		cout<<"-1";
	}
	else{
	cout<<min;
	}
}
