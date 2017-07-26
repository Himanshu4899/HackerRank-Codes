#include<iostream>
#include<cstring>

using namespace std;
int main(){
	int n,c=0;
	cin>>n;
	char a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n-2;i++){
		if(a[i]=='0'){
			if(a[i+1]=='1'){
				if(a[i+2]=='0'){
					a[i+2]='1';
					c++;
				}
			}
		}
	}
	cout<<c;
}

	
