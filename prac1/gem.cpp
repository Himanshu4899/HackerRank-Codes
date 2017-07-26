#include<iostream>
#include<cstring>

using namespace std;

int main(){
	
	int n;
	int k[26]={0};
	int flag=0;
	cin>>n;
	for(int i=0;i<n;i++){
		char c[101];
		int a[26]={0};
		
		cin>>c;
		int l = strlen(c);
		for(int j=0;j<l;j++){
			if((a[c[j]-'a'])==0){
				a[c[j]-'a']=1;
			}
		}
		for(int j=0;j<26;j++){
			k[j]+=a[j];
		}
	}
	for(int j=0;j<26;j++){
		if(k[j]==n){
			flag++;
		}
	}
	cout<<flag;
}
	
