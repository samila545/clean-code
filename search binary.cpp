// the binary search the array size and the number to search is from the user

#include <iostream>
    using namespace std;
    
    int binarySearch(int arr[], int l, int r, int x) {
    	int m,found=0,index=0;
    	
    while(found==0&&l<=r)
    {
    	m=(l+r)/2;
    	if(x==arr[m])
    {
			
    	found=1;
    }
   else {
   	if(x>arr[m])	
		l=m+1;
   	else
   	r=m-1;
   } 
			
	}
	if(found==0)
	index=-1;
	else
	index=m;
	return index;
	
}
    int main() {
        int n,x;
		cout<<"The value of array size is:" ;
		cin>>n;
		cout<<"Enter the number to find:";
		cin >>x;
        int arr[n];
		cout<<"Enter only sorted array value\n"; 
		for(int i=0;i<n;i++){
			
			cout<<"The array index:"<<i<<" is:";
			cin>>arr[i];
			cout<<endl;
		}
		
        
       int  i=binarySearch(arr, 0, n-1, x);
       if(i==-1)
       cout<<"The index is not found";
       else
       	 cout<<"The index of:"<<x<<":is:"<<i;

       
        return 0;

    }
    
    
   