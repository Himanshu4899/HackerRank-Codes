#include<iostream>
#include<cstring>

using namespace std;

int main(){	
	int n,q;
	cin>>n;
	int flag;
	char a[n][20];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>q;
	char b[q][20];
	for(int i=0;i<q;i++){
		cin>>b[i];
	}
	for(int i=0;i<q;i++){
		int count=0;
		for(int j=0;j<n;j++){
			flag=0;
			if(strlen(b[i])==strlen(a[j])){
				for(int k=0;k<strlen(a[j]);k++){
					if(a[j][k]==b[i][k]){
						flag++;
					}
				}
				if(flag==strlen(a[j])){
					count++;
				}
				
			}
		}
		cout<<count<<endl;
	}		
	
}
	
