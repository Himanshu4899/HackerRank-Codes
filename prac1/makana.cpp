#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
	char a[10001];
	char b[10000];
	int c[26]={0};
	int d[26]={0};
	int sum=0;
	cin>>a;
	cin>>b;
	int x = strlen(a);
	int y = strlen(b);
	
	
	for(int i=0;i<x;i++){
		c[a[i]-'a']++;
	}
	
	for(int i=0;i<y;i++){
		d[b[i]-'a']++;
	}
	
	for(int i=0;i<26;i++){
		
		sum += abs(c[i]-d[i]);
		
	}
	cout<<sum<<endl;
}
			
