#include<iostream>

using namespace std;

int main(){
	long long int n,m;
	cin>>n;
	long long int a[n],t=n,k;
	for(int i=0;i<t;i++){
		cin>>a[i];
	}
	cin>>m;
	long long int b[m],s=m;
	for(int i=0;i<s;i++){
		cin>>b[i];
	}
	int rank=0;
	int c[n];
	k=0;
	for(int i=0;i<t;i++){
		if(i==0){
			rank++;
			c[k++]=rank;
		}
		else{
			if(a[i]==a[i-1]){
				continue;
			}
			else{
				rank++;
				c[k++]=rank;
			}
		}
	}
	for(int i=0;i<t;i++){
		cout<<c[t]<<endl;
	}
	
	int arank=rank+1;
	int z=n-1,score=0;
	for(int i=0;i<s;i++){
		score+=b[i];
		while(a[z]<=score){
			while(a[z]==a[z-1]){
				z--;
			}
			
			arank=c[z];
			z--;
		}
		cout<<arank<<endl;
	}
}
	
	
