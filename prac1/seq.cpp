#include<iostream>

using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==a[j]){
				for(int k=1;k<=n;k++){
					if(j==a[k]){
						cout<<k<<endl;
						break;
					}	
				}
				break;
			}
			
		}
	}
}
