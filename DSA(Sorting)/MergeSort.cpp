//A sorting algorithm which is also known as merge sort because here we merge 2 sorted sub-array into one array
//Merge sort follows Divide Conqueror algorithm
//Divide - Divide an unsorted array into small sub-array till we can not divide the small sub-array
//Conqueror & Combined - Now compare 2 sub-array and find out which is smaller put it into front and then combine them and follows this untill it became a full array of the size of unsorted array
// Time-complexity in worst and best case will be : O(nlogn)

#include<iostream>
using namespace std;

//A function which will compare one to one compare between 2 small sub-array and according to the value it will assign it into actual array
void merge(int arr[],int left,int mid,int right){
    //Size of one small sub-array
    int asize = mid - left + 1;
    //Size of another small sub-array
    int bsize = right - mid;
    //Creating a small sub-array
    int a[asize];
    //Creating another small sub-array
    int b[bsize];
    //A for loop for putting the value into one small sub-array
    for(int i=0;i<asize;i++){
        a[i] = arr[left+i];
    }
    //A for loop for putting the value into another one small sub-array
    for(int j=0;j<bsize;j++){
        b[j] = arr[mid+1+j];
    }
    //Creating 3 pointers for traversal
    // i will traversal one small sub-array
    int i = 0;
    // j will traversal another one small sub-array
    int j = 0;
    // k will traversal the original array
    int k = left;
    //A while loop for checking which sub-array contain min value
    while(i<asize && j<bsize){
        //Condition for checking which array contain minimum value
        if(a[i] < b[j]){
            //Small value among 2 sub-array will put into original array
            arr[k] = a[i];
            //After putting increasing the index of one sub-array
            i++;
        }
        //If, if condition falls then while loop enter this condition 
        else{
            //Small value among 2 sub-array will put into original array
            arr[k] = b[j];
            //After putting increasing the index of another one sub-array
            j++;
        }
        //After putting increasing the index of original array
        k++;
    }
    //If previous while loops fall bt there are still element present into one sub-array 
    while(i<asize){
        //putting directly thee value into original array because another small sub-array has no element
        arr[k] = a[i];
        //After putting increasing the index of one sub-array
        i++;
        //After putting increasing the index of original array
        k++;
    }
    //If previous while loops fall bt there are still element present into one sub-array 
    while(j<bsize){
        //putting directly thee value into original array because another small sub-array has no element
        arr[k] = b[j];
         //After putting increasing the index of one sub-array
        j++;
        //After putting increasing the index of original array
        k++;
    }
    return;
}

void mergesort(int arr[],int left,int right){
    //Base Case
    if(left >= right){
        return;
    }
    //Finding mid poision so we can acess recursive function
    int mid = (left+right) /2;
    //Recursive function for those element which is smaller index then mid index
    mergesort(arr,left,mid);
    //Recursive function for those element which is bigger index then mid index
    mergesort(arr,mid+1,right);
    //Calling the function
    merge(arr,left,mid,right);
    return;
}

int main()
{
    int arr[] = {13,8,17,2,6,1,9,11};
    //Calculating the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    //Left variable shows starting point
    int left = 0;
    //Right variable shows ending point
    int right = size - 1;
    //Printing before sorting the array
    cout<<"Before sorting : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Calling the function
    mergesort(arr,left,right);
    //Printing after sorting the array
    cout<<"After sorting : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}