//Write a c++ program to sort an array element using quick-sort.
#include<iostream>
using namespace std;
//Swapping function for swap
void swapping(int *a,int *b){
  int t = *a;
  *a = *b;
  *b = t;
}
//For printing array
void printing(int arr[],int size){
  for(int i = 0;i < size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
//Function to find appropriate position of Pivot point
int partition(int arr[],int left,int right){
  //Pivot point can be any element in the array it's own purpose to choose pivot point and build ogic 
  int pivot = arr[right];
  int i = (left - 1);
  for(int j = left;j < right;j++){
    //If elements are less than pivot pint
    if(arr[j] <= pivot){
      i++;
      swapping(&arr[i],&arr[j]);
    }
  }
  //If elements are greater than pivot point
  swapping(&arr[i + 1],&arr[right]);
  return (i + 1);
}
//Function to divide the array into sub-array and also to call Pivot point from previos partition function
void QuickSort(int arr[],int left,int right){
  if(left < right){
    int pi = partition(arr,left,right);
    QuickSort(arr,left,pi - 1);
    QuickSort(arr,pi + 1,right);
  }
}
int main(){
  int arr[] = {8,3,11,2,1,7,5,4,9};
  int size = sizeof(arr) / sizeof(arr[0]);
  //printing unsorted array
  cout<<"Unsorted array : ";
  //Calling the function
  printing(arr,size);
  int left = 0;
  int right = (size - 1);
  //Calling the function
  QuickSort(arr,left,right);
  //Printing the array
  cout<<"Sorted array : ";
  //Calling the function
  printing(arr,size);
}