//Creating a sorting technique which is also known as Insertion sorting 
//Here sorting refers in increasing order [E.X - 1 2 3 4 5 6]
//Here every element of the array is unique
//Best time complexity will be O(n**2) and worst case time complexity will be O(n**2)

#include<iostream>
using namespace std;

//Creating the function in order to get sorting array
void selection(int arr[],int size){
    //A for loop which traverse all the element of the array
    for(int i=0;i<size-1;i++){
        //Curretly pointing min value as ith position
        int min = i;
        //Another for loop for traversing any min value exist or not
        for(int j=i+1;j<size;j++){
            //Checking condition to find any min value exist or not
            if(arr[j]<arr[min]){
                //If exist then update min value 
                min = j;
            }
        }
        //Now checking min value update or not
        if(min != i){
            //If min value get updated then we swap ith element position with min value
            swap(arr[i],arr[min]);
        }
    }
    return;
}

int main(){
    int arr[] = {13,21,17,3,8,10,5,1};
    //Calculating the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Unsorted array will be : ";
    //Printing unsorted array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Calling the function inorder to get sorted array
    selection(arr,size);
    cout<<"Sorted array will be : ";
    //Printing sorted array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}