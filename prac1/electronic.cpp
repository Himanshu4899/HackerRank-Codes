#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int s,n,m,max1,p,q;
	cin>>s>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	max1=a[0]+b[0];
	if((a[0]+b[0]>s)){
		cout<<"-1";
	}
	else{
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if((a[i]+b[j])>=max1 && (a[i]+b[j])<=s)
					max1=(a[i]+b[j]);
			}
		}
		cout<<max1;	
	}
}
