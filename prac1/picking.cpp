#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int a[101]={0};
	int n,x;
	cin>>n;
	while(n--){
		cin>>x;
		a[x]++;
	}
	int max=0;
	for(int i=0;i<100;i++){
		if(a[i]!=0){
			
		int p=a[i];
		int q=a[i+1];
		if((q+p)>max)
			max = p+q;
		}
	}
	cout<<max;
}

