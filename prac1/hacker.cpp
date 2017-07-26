#include<iostream>
#include<cstring>
#include<string>

using namespace  std;

int main(){
	
	char b[10] = {'h', 'a', 'c', 'k', 'e', 'r', 'r', 'a', 'n', 'k'};
	int t,len,i,j,count;
	cin>>t;
	
	while(t--){
		char a[1000000];
		cin>>a;
		len = strlen(a);
		count=0;
		j=0;
		for(i=0;i<len;i++){
			if(a[i]==b[j]){
				count++;
				j++;
			}
		}
		if(count==10){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	
	
	}




return 0;


}
