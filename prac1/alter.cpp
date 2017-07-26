#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>

using namespace std;

int main(){
	char a[100001];
	int n,count;
	cin>>n;
	while(n--){
		cin>>a;
		
		
		count=0;
		for(int i=0;i<strlen(a)-1;i++){
			if(a[i]==a[i+1]){
				count++;
			}
		}
		cout<<count<<endl;
	}
return 0;
}
