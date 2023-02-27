//Sorting problem where we have to move 0 in the end of the array without changing the order of non-zero element
//Time complexity will be in worst case O(n**2) and best case O(n**2)

#include<iostream>
using namespace std;

//Creating the function
void sort(int arr[],int size){
    //A for loop for traversing element whole array
    for(int i=0;i<size;i++){
        //Another for loop for traversing i+1 to size-1 of the array
        for(int j=i+1;j<size;j++){
            //Condition for moving 0 element in the end of the array
            if(arr[i]==0 && arr[j] !=0){
                //Swapping element if condition meet
                swap(arr[i],arr[j]);
            }           
        }
    }
    return;
}

int main(){
    int arr[]={0,5,0,3,42,0,7};
    //Calculating the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    //Before sorting the array
    cout<<"Before sorting : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Calling the function
    sort(arr,size);
    //Printing sorted array
    cout<<"After sorting : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}