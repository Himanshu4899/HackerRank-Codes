#include<iostream>
#include<cstring>

using namespace std;

int main(){
	
	int a[10]={0};
	
	char st[100000];
	cin>>st;
	int n= strlen(st);
	
	for(int i=0;i<n;i++){
		a[st[i]-'0']++;
	}
	
	for(int i=0;i<10;i++){
		cout<<i<<" "<<a[i]<<endl;
	}
}
