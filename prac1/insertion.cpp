#include<iostream>

using namespace std;

int main(){
	int a[10],n,temp,hole;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<n;i++){
		
		temp =a[i];
		hole = i;
		while(hole>0 && a[hole-1]>temp){
			a[hole]=a[hole-1];
			hole=hole-1;
		}
		a[hole]=temp;
		
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
	
