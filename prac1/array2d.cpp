#include<iostream>
 using namespace std;
 
 int main(){
 	int a[6][6];
 	int sum=0;
 	int max=0;
 	
 	for(int i=0;i<6;i++){
 		for(int j=0;j<6;j++){
 			cin>>a[i][j];
 		}
 	}
 	
 	for(int i=0;i<6;i++){
 		for(int j=0;j<6;j++){
 			
 			if((j-1)>=0 && (j+1)<=(5) && (i+1)<=5 && (i+2)<=5){
 				
 				sum=(a[i][j-1]+a[i][j]+a[i][j+1]+a[i+1][j]+a[i+2][j]+a[i+2][j-1]+a[i+2][j+1]);
 				cout<<sum<<endl;
 				if(sum>max){
 					max=sum;
 				}
 			}
 		}
 	}
 	cout<<max;
 }	
 //&& (a[i][j-1])>0 && (a[i][j])>0 && (a[i][j+1])>0 && (a[i+1][j])>0 && (a[i+2][j])>0 && (a[i+2][j-1])>0 && (a[i+2][j+1])>0
