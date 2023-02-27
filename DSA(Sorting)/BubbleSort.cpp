//Creating a sorting technique which is also known as Bubble sorting 
//Here sorting refers in increasing order [E.X - 1 2 3 4 5 6]
//Best time complexity will be O(n) and worst case time complexity will be O(n**2)

#include<iostream>
using namespace std;

//Creating the function which return type will be void
void bubble(int arr[],int size){
    //To traverse from arr[0] to arr[size-1]
    for(int i=0;i<size;i++){
        //To traverse from arr[1] to arr[size-1]
        for(int j=i+1;j<size;j++){
            //Comparing cureent ith element of the array with jth element of the array
            if(arr[i]>arr[j]){
                //swapping element if previous element is greater than current element
                swap(arr[i],arr[j]);
            }
        }
    }
    return;
}

int main(){
    int arr[] = {13,24,11,6,47,1,9};
    //For calculating the total size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Unsorted array will be : ";
    //Printing unsorted array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Calling the function
    bubble(arr,size);
    cout<<"Sorted array will be : ";
    //Printing sorted array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}