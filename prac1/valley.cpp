#include<iostream>
#include<cstring>

using namespace std;
int main(){
	long int n,l=0,c=0,v=0,s=0;
	cin>>n;
	char a[n];
	for( int i=0; i<n;i++)
		cin>>a[i];
	
	for(int i=0;i<n;i++){
		
		if(a[i]=='U'){
			
			l++;
			if(l==0){
				c++;
			}
		}	
		else if(a[i]=='D'){		
			l--;
		}
	}
	cout<<c;
}
				
	
	
