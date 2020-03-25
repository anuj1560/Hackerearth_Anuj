#include <bits/stdc++.h>
#define ll unsigned long long int

using namespace std;

struct Node {

	ll data;
	Node *left,*right;
	
};

Node* first(ll d){
	
	Node* node = new Node();
	node->data = d;
	node->left = node -> right = NULL;
	
	return node;
	
}

Node*update(Node*ptr, ll val){
	
	if(ptr == NULL)
		return first(val);
		
	if(val <= ptr->data)	
		ptr->left = update(ptr->left,val);
	else
		ptr->right = update(ptr->right,val);
	
	return ptr;

}

ll maxelpath(Node*ptr,ll x){
	Node *node = ptr;
	ll mx = 0;
	
	while(node->data != x){
		
		if(node->data > x){
			mx = max(mx,node->data);
			node = node->left;
		}else{
			mx = max(mx,node->data);
			node = node->right;
		}
	}
	
	return max(mx,x);

}

ll maxm(Node*root,ll x, ll y){
	
	Node * ptr = root;
	
	while((x < ptr->data && y < ptr->data) || (x > ptr->data && y> ptr->data))
	{
		if(x < ptr->data && y < ptr->data) 
		    ptr = ptr->left;
		else if(x > ptr->data && y > ptr->data) 
		    ptr = ptr->right;
	}
	
	return max(maxelpath(ptr,x),maxelpath(ptr,y));
	
}

int main(){
	
	ll n, temp, x, y;
	cin >>n;
	
	Node * root = NULL; 
	cin >>temp;
	root = update(root,temp);
	
	for(ll i = 1; i < n; i++){
		cin >>temp;
		update(root,temp);
	}
	
	cin >>x>>y;
		
	cout <<maxm(root,x,y)<<endl;
	
	return 0;
}

