#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	cin>>n;
	int p=n+1;
	string ch;
	while(p--){
	
		
		getline (cin, ch);
		int a = ch.length()-1;
		
		for(int i=a;i>=0;i--){
			int x=i;
			while(ch[x]!=' '){
				x--;
			}
			for(int j=x+1;j<=i;j++){
				cout<<ch[j];
			}
			cout<<" ";
			i=x-1;
		}
	}
return 0;
}

		
