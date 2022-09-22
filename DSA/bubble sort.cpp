#include <iostream>
using namespace std;

// perform bubble sort
void bubbleSort(int arr[], int n) {

  // loop to access each array element
  for (int step = 1; step < n; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < n - step; ++i) {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (arr[i] > arr[i + 1]) {

        // swapping elements if elements
        // are not in the intended order
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
}

// print array
void printArray(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    cout << "  " << arr[i];
  }
  cout << "\n";
}

int main() {
  int data[100],i,n;
    cout<<"Enter the no  of data : ";
    cin>>n;
    cout<<"Enter the data:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>data[i];
    }
  
  bubbleSort(data, n);
  
  cout << "Sorted Array :";  
  printArray(data, n);
}
