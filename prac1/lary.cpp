#include<iostream>
using namespace std;

int t,n,i,j,a[1010];

void swap(int *x, int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

int main()
{
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=1;i<=n;i++)
			cin>>a[i];
		
		for(i=1;i<=n-2;i++)
		{
			for(j=i; j<=n; j++)
			{
				if(a[j] == i)
				{
					break;
				}
			}
			
			if(j!=i)
			{
				for( ;j>i; )
				{
					if((j-i)>=2)
					{
						swap(&a[j],&a[j-1]);
						swap(&a[j-1],&a[j-2]);
						j -= 2;
					}
					else
					{
						swap(&a[j-1],&a[j]);
						swap(&a[j],&a[j+1]);
						j--;
					}
				}
			}
			
		}
		
		for(i=1;i<=n;i++)
		{
			if(i!=a[i])
			{
				break;
			}
		}
		if(i>n)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
		
	}
	
}
