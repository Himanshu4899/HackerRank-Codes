#include<iostream>
#include<string>
#include<cctype>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cctype>
using namespace std;
int main(){
	char s[101];
	int n,m,k;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	cin>>m;
	k=m;
	k = k%26;
	
	for(int i=0;i<n;i++){
		k=m;
	k = k%26;
		if(isalpha(s[i])){
		if(islower(s[i])){
		if(('z'-s[i])<k){
			k = k - ('z'-s[i]);
			s[i] = 'a'+(k-1);
		}
		else
		s[i] = s[i]+k;
		}
		
		else{
		if(('Z'-s[i])<k){
			k = k - ('Z'-s[i]);
			s[i] = 'A'+(k-1);
		}
		else
		s[i] = s[i]+k;
		}
		}
		
		
	}
	for(int i=0;i<n;i++){
		cout<<s[i];
	}
	
return 0;
}
