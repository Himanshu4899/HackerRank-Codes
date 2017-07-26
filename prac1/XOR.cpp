#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int main(){
	int n, a[10];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	int xorArray=n;
/*for(int i=2; i<n;i++){
xorArray = xorArray ^  i;

}
cout<<xorArray<<endl;*/
for(int k=0;k<n;k++){
xorArray = xorArray ^ a[k];
cout<<xorArray<<endl;

}
	
cout<<endl<<xorArray<<endl;	
	
}

