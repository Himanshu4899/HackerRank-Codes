#include<iostream>
#include<cstdlib>

using namespace std;
int countSetBits(int n)
{
     int count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}
 

int main(){
	int n,a[1000],sum=0;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=countSetBits(a[i]);
	}
	cout<<sum;
}
	
	
