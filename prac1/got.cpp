#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int a[26]={0};
	char c[100001];
	int flag=0;
	
	cin>>c;
	
	int l = strlen(c);
	for(int i=0;i<l;i++){
		a[c[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(a[i]%2==1){
			flag++;
			
		}
	}
	if(flag==0 || flag==1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
