#include <bits/stdc++.h>
using namespace std;
 
 struct Node
 {
  int data;
  Node *left,*right;
 };
 
 Node* first(int val)
 {
   Node* node = new Node();
   node->data = val;
   node->left=node->right=NULL;
   return node;
 }
 
 Node* update(Node* ptr, int val)
 {
    if(ptr==NULL)
       return first(val);
    if(val < ptr->data)
       ptr->left = update(ptr->left,val);
    else if(val > ptr->data)
       ptr->right = update(ptr->right,val);
    return ptr;
 }
 
 int count(Node* ptr)
  {
  if(ptr==NULL)
     return 0;
  return 1 + count(ptr->left)+count(ptr->right);
 
  }
 
 int main()
 {
 
  int t;
   cin >>t;
while(t--){
 Node *root=NULL;
 int n,x;
 cin >>n>>x;
 int temp;
 cin >>temp;
 root = update(root,temp);

 for(int i=1;i<n;i++)
 {
 cin>>temp;
 update(root,temp);
 }
 int m = count (root);
 if(x==m)
    cout<<"Good"<<endl;
 else if (x>m)
    cout<<"Bad"<<endl;
 else
    cout<<"Average"<<endl;
}
 return 0;
}
