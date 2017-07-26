#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

int main(){
	int len,flag=0,k;
	char a[101];
	cin>>a;
	len = strlen(a);
	for(int i=0;i<len;i++){
		for(int j=0;j<len-1;j++){
			if(a[j]=='0')
				continue;
			k=j+1;	
			while(a[k]=='0'&&k<len){
				k++;
			}
			if(a[j]==a[k]){
				a[j]='0';
				a[k]='0';
				j=j+2;
			}
		}
	}
	for(int i=0;i<len;i++){
		if(a[i]!='0'){
			flag++;
		}
	}
	if(flag==0){
		cout<<"Empty String";
	}
	else{
		for(int i=0;i<len;i++){
			if(a[i]!='0'){
				cout<<a[i];
			}
		}
	}
	return 0;
}

