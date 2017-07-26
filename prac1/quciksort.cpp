#include<iostream>

using namespace std;


int partition(int a[], int s, int e){
	
	int pivot = a[e];
	int index = s;
	int temp;
	for(int i=s;i<e;i++){
		if(a[i]<=pivot){
			 temp=a[index];
			a[index]=a[i];
			a[i]=temp;
			
			index= index+1;
		}
	}
	temp=a[index];
	a[index]=a[e];
	a[e]=temp;
	
	return index;
}
void quicksort(int a[], int s, int e){
	if(s<e){
	
	
	int index = partition(a,s,e);
	quicksort(a,s,index-1);
	quicksort(a,index+1,e);
	}
	
	
}

int main(){
	
	int a[] = {7,6,5,4,3,2,1,0};
	
	quicksort(a,0,7);
	for(int i=0;i<8;i++){
		cout<<a[i]<<" ";
	}
}

