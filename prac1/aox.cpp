#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

	int x=0;
	int a[10];
	for(int i=0;i<7;i++){
		cin>>a[i];
		}
	for(int i=0;i<7;i++){
	x=x^a[i];
	}
	cout<<x;
	}
