#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<list>

using namespace std;

void bubbleSort(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    // Run loops two times: one for walking throught the array
    // and the other for comparison
    int swapped = 0;
    for (int i = 0; i < size - step - 1; ++i) {
      // To sort in descending order, change > to < in this line.
      if (array[i] > array[i + 1]) {

        // Swap if greater is at the rear position
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swapped = 1;
      }
    }

    // If there is not swapping in the last swap, then the array is already sorted.
    if (swapped == 0)
      break;
  }
  
}


void print_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int arr[], int size){
    
    int min=0;
    for(int i=0;i<size-1;i++){
        
        for(int j=i;j<size;j++){
            if(arr[min]>arr[j]){
                
                swap(arr[min],arr[j]);
                min=j;
                // cout<<arr[min]<<" "<<min;
            }
        }


}
print_arr(arr, size);
}


void insertion_sort(int arr[], int size){
  for( int i=1;i<size;i++){
    int key=arr[i];
    int j=i-1;
        while(j>=0 && arr[j]>=arr[i]){
          arr[j+1]=arr[j];
          j--;
        }
        arr[j+1]=key;
  }

  print_arr(arr,size);
}

void swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;

}
void merge(int arr[], int a, int k,int b){
  int n1=k-a+1;
  int n2=b-k;
  int l[n1],m[n2];
  for(int i=0;i<n1;i++){
      l[i]=arr[a+i];
  }
  for (int j=0;j<n2;j++){
    m[j]=arr[a+k+j];
  }
    // Maintain current index of sub-arrays and main array
  int i, j, p;
  i = 0;
  j = 0;
  p = a;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (l[i] <= m[j]) {
      arr[p] = l[i];
      i++;
    } else {
      arr[p] = m[j];
      j++;
    }
    p++;
  }

   while (i < n1) {
    arr[p] = l[i];
    i++;
    p++;
  }

  while (j < n2) {
    arr[p] = m[j];
    j++;
    p++;
  }

}



void mergesort(int arr[] ,int a, int b ){
  if(b>a){
    
    int k=a+ (b-1)/2;
    mergesort(arr,a,k);
    mergesort(arr,k+1,b);
    merge(arr, a, k ,b);
    
  }
}

int partition(int arr[],int low ,int high){
  int pivot=arr[high];
  int i=low-1;
  for (int j=low;j<high;j++){
    if(pivot>=arr[j]){
      i=i+1;
      swap(&arr[j],&arr[i]);

    }
  }
  
  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}
void countsort(int arr[],int size){
  cout<<"program started";
  int max=arr[0];
  for(int i=0;i<size;i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  int count[max];
  int output[max];
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }
  for(int j=0;j<size;j++){
    count[arr[j]]++;
  }
for(int j=0;j<max;j++){
  count[j]=count[j]+count[j-1];
}
for (int i = size - 1; i >= 0; i--) {
    output[count[arr[i]] - 1] = arr[i];
    count[arr[i]]--;
  }
for(int i=0;i<size;i++){
  cout<<output[i]<<" ";
}

// print_arr(output,size);

}

void quicksort(int arr[],int low ,int high){
      if(low<high){
        int k=partition(arr,low , high);

        quicksort(arr,low,k-1);
        quicksort(arr,k+1,high);


      }

}


int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  //mergesort(arr, 0, size - 1);
  //cout << "Sorted array: \n";
  //print_arr(arr,size);
  countsort(arr,size);
  
  return 0;
}

