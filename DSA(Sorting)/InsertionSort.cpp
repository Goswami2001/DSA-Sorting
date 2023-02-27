//Creating a sorting technique which is also known as Insertion sorting 
//Here sorting refers in increasing order [E.X - 1 2 3 4 5 6]
//Here every element of the array is unique
//Best time complexity will be O(n) and worst case time complexity will be O(n**2)

#include<iostream>
using namespace std;

//Creating the function which return type will be void
void insertion(int arr[],int size){
    //To traverse from arr[1] to arr[size-1]
    for(int i=1;i<size;i++){
        //Storing the value of arr[i] so the data will never lost even we overwrite it
        int temp = arr[i];
        //J will traverse back side of the array to give appropriate position of an element in it's desired place
        int j = i-1;
         //Another while loop which is used for meeting sorting purpose 
        while(j>=0 && temp<=arr[j]){
            //If above condition satisfied then we will go through
            arr[j+1] = arr[j];
            //As j is backtracking so we will decrease the value of j every time it enters into while loop
            j--;
        }
        //Now we increase the value of j to give approprate place of an element in the sorted array
        j = j+1;
        //Place the value of temp into jth or apprpriate position
        arr[j] = temp;
    }
    return;
}

int main(){
    int arr[] = {13,21,17,9,3,7,5,1};
    //Counting the total size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    //printing unsorted array
    cout<<"Unsorted array will be : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Calling the function
    insertion(arr,size);
    //Printing sorted array
    cout<<"Sorted array will be : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}