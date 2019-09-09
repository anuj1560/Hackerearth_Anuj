#include <iostream>

using namespace std;

void merge(long int A[ ] , long int start, long int mid, long int end) {
 
long int p = start ,q = mid+1;

long int Arr[end-start+1] , k=0;

for(int i = start ;i <= end ;i++)
{
    if(p > mid)      
       Arr[ k++ ] = A[ q++] ;

    else if ( q > end)   
       Arr[ k++ ] = A[ p++ ];

    else if( A[ p ] > A[ q ])  
      Arr[ k++ ] = A[ p++ ];

    else
      Arr[ k++ ] = A[ q++];
}
 
  for (long int p=0 ; p< k ;p ++)
     A[ start++ ] = Arr[ p ] ;                          
}

void mergeSort (long int a[ ] , long int start ,long int end )
{
    if( (end-start) >= 1 ) {
        int mid = (start + end ) / 2;           
        mergeSort (a, start , mid );
        mergeSort (a,mid+1 , end );

        merge(a,start , mid , end );   
    }                    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long int t, n, m;
	cin >>t;
	while(t--){
		cin >>n>>m;
		n+= m;
		long int a[n+m];
		for(long int i = 0; i < n; i++)
			cin>>a[i];
		
		
		mergeSort(a,0,n-1);
		
		for(long int i = 0; i < n; i++)
			cout<<a[i]<<" ";
		cout<<"\n";
		
	}

	return 0;
}

