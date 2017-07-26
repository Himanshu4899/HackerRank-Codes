#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int sum=0;
	int mina=99999;
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		
	}
	
	
	if(i==1){
		if(sum%2==0)
			cout<<"0";
		else
		cout<<"-1";
	}
	else{
		if(sum%2==0){
			cout<<"0";
		}
		else{
			int k=0;
			for( i=0;i<n;i++){
				if(a[i]%2!=0){
					k++;
				}
				else{
					if(k<mina){
						mina=k;
					}
				}
			}
			
			cout<<mina;
			
	}
		}
		
	
}
					
