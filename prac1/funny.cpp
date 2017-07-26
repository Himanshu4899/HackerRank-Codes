#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	while(n--){
		char a[100001];
		cin>>a;
		int len = strlen(a);
		int i,j;
		int flag=0;
		for(i=1,j=len-1;i<=n-1,j>0;i++,j--){
			
			if(abs(a[i-1]-a[i])!=abs(a[j]-a[j-1])){
				flag++;
				
				
			}
		}
			
			if(flag!=0){
				cout<<"Not Funny"<<endl;
			}
			else{
				cout<<"Funny"<<endl;
			}
		}
	return 0;
}

