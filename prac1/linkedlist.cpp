#include<iostream>
using namespace std;

struct NODE{
	int n;
	 NODE *next;
};


NODE getnode(){
	
	NODE *x = new NODE;
	return *x;
}
NODE insert(NODE *x,int item){
	
	NODE *temp=getnode();
	temp->n=item;
	temp->next=x;
	return *temp;
}
void display(NODE *x){

	NODE *temp=x;
	while(temp!=NULL){
		cout<<temp->n;
		temp=temp->next;
	}
}

int main(){
int a;
	NODE *first;
	first = NULL;
	int choice,item;
	for(;;){
		cout<<"Enter 1 to enter, 2 to display";
		cin>>a;
		switch(a){
			case 1 : cin>>item;
				*first=insert(first,item);
				break;
			case 2 : display(first);
				break;
			default : break;
		}
	}
	
}
				
				
				
				
				
