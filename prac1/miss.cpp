#include<iostream>
#include <vector>

using namespace std;
int main(){
	
	vector<int> a;
	int b[1000]={0};
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
		
	}
	
	for(int i=a.cbegin();a.cend();i++){
		if(a[i]>=0)
		b[a[i]]++;
	}
	for(int i=1;i<1000;i++){
		if(b[i]==0){
			cout<<i;
			break;
		}
	}
	
	for(int i=a.cbegin();a.cend();i++){
		cout<<a[i]<<" ";
	}
}
