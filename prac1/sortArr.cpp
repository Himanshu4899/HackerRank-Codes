#include<iostream>
using namespace std;

int s, s1, a[100010], n, diff, i, ar[100010];

int main()
{
	cin>>n;
	cin>>ar[0];
	a[0] = ar[0];
	for(i=1;i<n;i++)
	{
		cin>>ar[i];
		a[i] = ar[i];
		diff = a[i] - a[i-1];
		if(diff<=0)
		{
			s += (-diff+1);
			a[i] += (-diff+1);
			//cout<<"#"<<a[i]<<" ";
		}
	}
	
	
	for(i=n-1;i>0;i--)
	{	//cout<<endl<<ar[i]<<" "<<ar[i-1]<<endl;
		diff = ar[i] - ar[i-1];

		if(diff>=0)
		{
			s1 += (diff+1);
			ar[i-1] += (diff+1);
		}
	}
	
	cout<<endl;
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	cout<<endl;
	for(i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
	
	
	cout<<s<<" "<<s1<<endl;
	if(s<s1)
		cout<<s<<endl;
	else
		cout<<s1<<endl;
}
