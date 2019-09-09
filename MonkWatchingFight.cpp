#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

struct Node {

	int data;
	Node *left,*right;
	
};

Node* first(int d){
	
	Node* node = new Node();
	node->data = d;
	node-> left = NULL;
	node-> right = NULL;
	
	return node;
	
}

Node* update(Node* ptr, int val){
	
	if(ptr == NULL)
		return first(val);
		
	if(val <= ptr->data)	
		ptr->left = update(ptr->left,val);
	else
		ptr->right = update(ptr->right,val);
	
	return ptr;

}

int getHeight(Node* ptr){
	if(ptr == NULL)
		return 0;
	return 1 + max(getHeight(ptr->left), getHeight(ptr->right));

}

int main(){
	
	int n;
	int temp;
	cin >>n;
	
	Node * root = NULL;
	cin >>temp;
	
	root = update(root,temp);
	
	for(int i = 1; i < n; i++){
		cin >>temp;
		update(root,temp);
	}
	
	cout<<getHeight(root)<<"\n";
	
	return 0;
}
