#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	while(n--){
		int a[100001],temp;
		
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>a[i];
		}
		
		int swap=0;
			for(int i=0;i<n;i++){
				if((a[i]-a[i+1])==1 && (a[i]>a[i+1])){
					temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					swap=1;
					
				}
			}
		if(isSort(a)){
			cout<<"Yes"<<endl;
				break;
			
	}
	return 0;
}


cpanel username mrsonuthali
	pass	Thaali@980
	
	FTP LOgin Pass
	sonusingh@mrthaali.com
	Thaali@1980
