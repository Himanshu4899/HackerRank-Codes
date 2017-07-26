#include <iostream>
#include<cstring>
#include<string.h>
using namespace std;
int isprime(int x){
    int flag=1;
    int i=x-1;
    if(x==1){
        return 0;
    }
    if(x==2){
    	return 1;
    }
    while(i>=2){
        if(x%i==0){
            flag =0;
            return flag;
            
        }
        i--;
    }
    if(flag==1){
        return flag;
    }
}
int main()
{   char st[100001];
    
    int n,t;
    char ch;
    
   cin>>t;

    while(t--){
        int a[100]={0};
        int flag =1;
        cin>>st;
        n = strlen(st);
    for(int i=0;i<n;i++){
        a[st[i]-'a']++;
        
    }
    
    int total=0, ch=0;
    for(int i=0;i<26;i++){
        if(isprime(a[i])){
            ch++;
            
        }
        else{
            
            cout<<"NO"<<endl;
            flag=0;
            break;
        }
        total+=a[i];
        
        
    }
    if(flag==1){
    if(isprime(ch)){
        cout<<"YES"<<endl;
        
    }
    else{
        cout<<"NO"<<endl;
        
        
    }
    }
    }
}

