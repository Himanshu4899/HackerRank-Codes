#include<iostream>
using namespace std;

int main(){
	int a[1001],n,min,max, mincount=0, maxcount=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	min=max=a[0];
	
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
			maxcount++;
		}
		else if(a[i]<min){
			min=a[i];
			mincount++;
		}
	}
	cout<<maxcount<<" "<<mincount;
	return 0;
}
