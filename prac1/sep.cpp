#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long int p,q,rem,sum1=0,sum2=0,x,len=0,l,r,n,count=0;
	cin>>p>>q;
	for(int i=p;i<=q;i++){
	if(i<10){
		x=i*i;
		n=x;
		len=0;
		sum1=0;
		sum2=0;
		while(n){
			len++;
			n=n/10;
		}
		if(len%2==0){
			l=len/2;
			r = len/2;
		}
		else{
			l=len/2;
			r = len/2 +1;
		}
        
		while(r--){
			rem = x%10;
			sum1 = sum1*10 + rem;
			x=x/10;
		}
       
		while( l--){
			rem = x%10;
			sum2 = sum2*10 + rem;
			x=x/10;
		}
		
	
	
	
	
	
	}
	

	else{
		x=i*i;
		n=x;
		len=0;
		sum1=0;
		sum2=0;
		while(n){
			len++;
			n=n/10;
		}
		if(len%2==0){
			l=len/2;
			r = len/2;
		}
		else{
			l=len/2;
			r = len/2 +1;
		}
        rem=x%10;
        sum1=rem;
        x=x/10;
        int p=1;
        r = (r-1);
		while(r--){
			rem = x%10;
			sum1 = sum1 + rem*pow(10,p);
			x=x/10;
			p++;
		}
        rem=x%10;
        sum2=rem;
        x=x/10;
        l = (l-1);
        int q=1;
		while( l--){
			rem = x%10;
			sum2 = sum2 + rem*pow(10,q);
			x=x/10;
			q++;
		}
		
	}	
		if((sum1+sum2)==i){
			cout<<i<<" ";
			count++;
		}
	}
	if(count==0){
		cout<<"INVALID RANGE";
		}
	
	return 0;
}

			
		
