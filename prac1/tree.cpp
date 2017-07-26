#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;
struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};
Node* getnode(int a){
	Node *temp = new Node();
	temp->data = a;
	temp->left = NULL;
	temp->right = NULL;
	
	return temp;
}
Node* insertBeg(Node *root, int data){
 	
 	
 	
	if(root==NULL){
		root = getnode(data);
 		
 	}
 	else if(data <= root->data){
 			root->left = insertBeg(root->left,data);
	}
	else{
		root->right = insertBeg(root->right,data);
	}
	return root;
}

Node *xyz = new Node();

Node* mirror(Node *root){

	if(root!=NULL){
		xyz->data = root->data;
		xyz->left = mirror(root->right);
		xyz->right = mirror(root->left);
		
	}
	return xyz;
}


int searchN(Node *root, int data){
	
	if(root==NULL){
		return 0;
	}
	if(data == root->data){
		return 1;
	}
	else if( data < root->data){
		return searchN(root->left, data);
	}
	else{
		return searchN(root->right,data);
	}
}

int heightT(Node* root){
	
	if(root==NULL){
		return -1;
	}
	int left = heightT(root->left);
	int right = heightT(root->right);
	 return max(left,right)+1;
}
void viewN(Node *root){
	Node *temp1 = root;
	Node *temp2 = root;
	int ar[1000],arr[1000],k=0;
	int i=0;
	while(temp1!=NULL){
		ar[i++] = temp1->data;
		temp1=temp1->left;
	}
	for(int j=i-1;j>=0;j--){
		arr[k++]=ar[j];
	}
	temp2=temp2->right;
	while(temp2!=NULL){
		arr[k++] = temp2->data;
		temp2=temp2->right;
	}
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
}
int x=0;

void levelOrder(Node *root){
	if(x==0){
		cout<<root->data<<" ";
		x++;
	}
	else{
	if(root!=NULL){
		if(root->left!=NULL){
		cout<<(root->left)->data<<" ";
		}
		if(root->right!=NULL){
		cout<<(root->right)->data<<" ";
		}
		levelOrder(root->left);
		levelOrder(root->right);
	}
	x++;
	}
}

Node* LCA(Node *root, int n1, int n2){
	
	if(root==NULL){
		return NULL;
	}
	if(root->data > n1 && root->data > n2){
		return LCA(root->left,n1,n2);
	}
	if(root->data < n1 && root->data < n2){
		return LCA(root->right, n1, n2);
	}
	return root;
}


void spiral(Node *root, int k){
	
	if(root!=NULL){
		if(k%2!=0){
			if(root->left!=NULL){
			cout<<(root->left)->data<<" ";
			}
			if(root->right!=NULL){
			cout<<(root->right)->data<<" ";
			}
			k++;
			spiral(root->left,k);
			spiral(root->right,k);
			
		}
		else{
			if(root->right!=NULL){
			cout<<(root->right)->data<<" ";
			}
			if(root->left!=NULL){
			cout<<(root->left)->data<<" ";
			}
			k++;
			spiral(root->right,k);
			spiral(root->left,k);
		
		}
	
	}
}
int minValue = INT_MIN;
int maxValue = INT_MAX;


bool isBSTU(Node *root, int minValue, int maxValue){
	if(root==NULL){
		return true;
	}
	if(root->data > minValue && root->data<maxValue && isBSTU(root->left,minValue, root->data) && isBSTU(root->right, root->data,maxValue)){
		return true;
	}
	else{
		return false;
	}
}

bool isBST(Node *root){
	return isBSTU(root,INT_MAX,INT_MIN);
}
	
	
	
int main(){
	Node *root = NULL;
	int n;
	int data;
	Node *temp;
	int h,n1,n2 ;
	int k;
	while(1){
		cout<<"press 1) to insert\n2)search\n3)height\n4)view\n5)level order6) spiral\n7)isBST\n8)Find LCA, enter N1,N2\n";
		cin>>n;
		switch(n){
			case 1 : 
				cin>>data;
				root = insertBeg(root,data);
				break;
			case 2 : cin>>data;
				if(searchN(root,data)){
					cout<<"Found";
				}
				else{
					cout<<"Not Found";
				}
				break;
			case 3 :  h = heightT(root);
				cout<<h<<endl;
				break;
			case 4 : viewN(root);
				break;
			case 5 :/*if(root!=NULL){
					cout<<root->data<<" ";
				}*/
				levelOrder(root);
				break;
			case 6 : if(root!=NULL){
					cout<<root->data<<" ";
				}
				k=1;
				spiral(root,k);
				break;	
			case 7 : if(isBST(root)){
					cout<<"YES";
				}
				else{
					cout<<"NO";
				}
				break;
			case 8 : cin>>n1>>n2;
				temp = LCA(root,n1,n2);
				cout<<temp->data<<endl;
				break;
				
			default : break;
		}
	}
}


