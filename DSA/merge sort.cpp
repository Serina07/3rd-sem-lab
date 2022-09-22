#include <iostream>
using namespace std;

// Merge two subarrays L and M into arr
void merge(int arr[], int p,int q,int r) 
{

	//create L <- A[p...q] and M <- [q+1...r]
	int n1 = q-p+1;
	int n2 = r-q;
	
	int L[n1],M[n2];
	
	for(int i=0;i<n1;i++)
	    L[i] = arr[p+i];
	for(int j=0;j<n2;j++)
	    M[j] = arr[q+1+j];
	
	//maintain current index of subarrays and main array
	int i=0,j=0,k;
	k=p;
	
	//until we reach either end of either L or M, pick larger
	// among elements L and M and place them in the correct 
	// position at A[p...r]
	while(i<n1 && j<n2)
	{
		if(L[i] <= M[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = M[j];
			j++;
		}
		k++;
	}
	
	// when we run out of elements n either L or M, pick up the 
	// remaining elements and put in A[p...r]
	while(i<n1)
	{
		arr[k] = L[i];
        i++;
        k++;
	}
	while(j<n2)
	{
		 arr[k] = M[j];
        j++;
        k++;
	}
}
// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) 
{
  if (l < r) 
  {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}

// print the array
void printArray(int arr[], int n) 
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main() {
  int data[100],i,n;
    cout<<"Enter no of data : ";
    cin>>n;
    cout<<"Enter the data:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>data[i];
    }
  mergeSort(data, 0,n-1);
  
  cout << "Sorted Array :"<<endl;  
  printArray(data, n);
}
