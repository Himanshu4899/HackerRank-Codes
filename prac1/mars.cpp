#include<iostream>
#include<string.h>

using namespace std;
int main(){
	int a,count =0;
	char s[1001];
	cin>>s;
	a = strlen(s);
	for(int i=0;i<a; i+=3){
		if(s[i]!='S'){
			count++;
		}
		if(s[i+1]!='O'){
			count++;
		}
		if(s[i+2]!='S'){
			count++;
		}
	}
	cout<<count<<endl;
	
	return 0;
}

