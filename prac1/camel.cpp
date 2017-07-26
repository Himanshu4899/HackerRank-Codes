#include<iostream>
#include<cstdlib>
#include<string.h>

using namespace std;
int main(){
	int count =1,n;
	char a[100001];
	cin>>a;
	
	n = strlen(a);
	for(int i=0;i<n;i++){
		if(isupper(a[i])){
			count++;
		}
	}
	cout<<count<<endl;
return 0;
}
