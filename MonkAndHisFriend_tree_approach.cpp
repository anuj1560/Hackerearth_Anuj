#include <iostream>
#define ll unsigned long long int
using namespace std;

struct Node
{
 ll data;
 Node *left,*right;
};

Node* first(ll val)
{ 
  Node* node = new Node();
  node->data = val;
  node->left=node->right=NULL;
  return node;
}

Node* update(Node* ptr, ll val)
{  
   if(ptr==NULL)
      return first(val);
   if(val <= ptr->data)
      ptr->left = update(ptr->left,val);
   else
      ptr->right = update(ptr->right,val);
   return ptr;
}

int check(Node* ptr,ll val)
 {
 if(ptr==NULL)
    return 0;
 if(ptr->data==val)
   return 1;
 if(ptr->data < val)
  check(ptr->right,val);
 else
  check(ptr->left,val);
 }

int main()
{

 int t;
 cin >>t;
 while(t--){
  int n,m;
  cin >>n>>m;
  ll temp;
  cin >>temp;
  Node *root=NULL;
  root = update(root,temp);

  for(int i=1;i<n;i++)
  {
    cin>>temp;
    update(root,temp);
  }
  for(int j=0;j<m;j++)
    {
     cin >>temp;
     int ans = check(root,temp);
     if(ans==0){
        cout<<"NO"<<endl;
        update(root,temp);
     }
     else
        cout<<"YES"<<endl;
    }
  }
  return 0;
 }
