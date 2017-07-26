#include<iostream>

using namespace std;

int main(){
	int n,m;
	cin>>n;
	while(n--){
		cin>>m;
		int a[m];
		for(int i=0;i<m;i++){
			cin>>a[i];
		}
		
		int ex=0;
		int tr=0;
		for(int i=0;i<m;i++){
			//cout<<a[i];
			if(i%2==0){
				if(a[i]%2==0 || a[i]==1){
					continue;
				}
				else{	
					if(ex>0){
						a[i]=a[i]+1;
						ex--;
					}
					else{
						a[i]=a[i]-1;
						ex++;
						tr++;
						
					}
				}
			}
			else{
				if(a[i]%2!=0){
					continue;
				}
				else{
					if(ex>0){
					
					a[i]=a[i]+1;
					ex--;
					}
					else{
						a[i]=a[i]-1;
						ex++;
						tr++;
					}
				}
			}
		}
		
		
		int y=ex;
		for(int k=0;k<m;k++){
			if(y==0){
				break;
			}
			if(k%2==0 ){
				if(a[k]%2==0){
				
					
					continue;
				}
				else{
					a[k]=a[k]+1;
					y--;
				}
			}
			else{
				if(a[k]%2!=0){
					continue;
					
				}
				else{
					a[k]=a[k]+1;
					y--;
					
				}
			}
		}
		
		
		int flag=0;
		for(int i=0;i<m;i++){
			if(i%2==0){
				if(a[i]%2!=0){
					flag=1;
				}
			}
			else{
				if(a[i]%2==0){
					flag=1;
				}
			}
		}
		
		
		if(flag==0){
			cout<<tr<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}
}
				
				
					
