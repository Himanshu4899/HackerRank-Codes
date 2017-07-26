#include<iostream>
#include<cstring>
#include<string>
#include<cstdlib>

using namespace std;

int main(){
	char a[10000];
	cin>>a;
	int flag=0;
	int n = strlen(a);
	for (int i=0;i<n-1;i++){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y'){
			if(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u'||a[i+1]=='y'){
				cout<<"No"<<endl;
				
				flag=1;
				break;
			}
		}
		else{
			if(a[i]==a[i+1]){
				
				cout<<"No"<<endl;
				
				flag=1;
				break;
			}
		}
	}
	if(flag==0){
		cout<<"Yes"<<endl;
	}
	return 0;
}
