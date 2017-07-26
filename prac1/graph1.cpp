#include<iostream>

using namespace std;

void bfs(int a[20][20],int src, int visited[20], int n){
	
	int q[20],f,r,u,v;
	f=0;
	r=-1;
	q[++r]=src;
	
	while(f<=r){
		u=q[f++];
		for(v=1;v<=n;v++){
			
			if(a[u][v]==1 && visited[v]==0){
				q[++r]=v;
				visited[v]=1;
			}
		}
	}
}

	

int main(){
	int src, n;
	cin>>n;
	int a[20][20], visited[20];
	
	cout<<"enter the matrix\n";
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=1;i<=n;i++){
		visited[i]=0;
	}
	cout<<"enter source";
	cin>>src;
	visited[src]=1;
	bfs(a,src,visited,n);
	
	for(int i=1;i<=n;i++){
		if(visited[i]!=0){
			cout<<"\n"<<i<<"Reachable"<<endl;
		}
		else{
			cout<<"\n"<<i<<"not reachable"<<endl;
		}
	}
return 0;
}

