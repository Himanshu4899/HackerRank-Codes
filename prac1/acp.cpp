#include<iostream>
using namespace std;
int main(){
	int max=0,count=0,m,n,k,test,z;
    char x,y;
    char a[1001][1001];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){	
			
			k=0;
			test=0;
			while(k!=(m)){
				x = a[i][k];
				y = a[j][k];
				if((x-48)||(y-48)){
					test++;
					
					
				}
				k++;
			}
			cout<<test<<endl;
			if(test>max){
				max=test;
				count=1;
			}
			else if(test==max){
				count++;
			}
		}
	}
	cout<<max<<endl<<count;
	


	return 0;
}	
		
