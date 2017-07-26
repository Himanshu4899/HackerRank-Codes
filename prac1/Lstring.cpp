#include<iostream>
#include<cstring>
#include<cmath>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int c;
	char a[1000000];
	
	cin>>n;
	while(n--){
		cin>>a;
		int f[26]={0},s[26]={0};
		c=0;
		int k = strlen(a)-1;
		if(strlen(a)%2==1){
			c=-1;
		}
		else{
			int i=0;
			i=0;
        while(i<strlen(a)/2)
        {
            f[a[i++]-'a']++;
            s[a[k--]-'a']++;
        }
        for(i=0;i<26;i++)
        {

            if(f[i]>s[i]&&f[i]!=0)
                c+=abs(f[i]-s[i]);
        }
	}
	cout<<c<<endl;	
	}
	
	
}


