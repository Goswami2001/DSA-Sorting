//Given an array of names of fruits, sort it in the lexicographical order using selection sort.
//Time complexity will be O(n**2) in both best and worst case because here we use selection sort

#include<iostream>
#include<string.h>
using namespace std;

//Creating the function which will sort the array
void selectionSort(char fruit[][60],int size){
    //Traversing the array from fruit[0] to fruit[size-1]
    for(int i=0;i<size;i++){
        //Copy ith element into an variable so we can do overwrite
        int min_index = i;
        //Another for loop for traversing fruit[i+1] to fruit[size-1]
        for(int j=i+1;j<size;j++){
            //strcmp is a inbuild function by which we can check whether fruit[i] is gretaer than fruit[j]
            //If strcmp(fruit[i],fruit[j] == 0) then it refers fruit[i] == fruit[j]
            //If strcmp(fruit[i],fruit[j] > 0) then it refers fruit[i] > fruit[j]
            //If strcmp(fruit[i],fruit[j] < 0) then it refers fruit[i] < fruit[j]
            if(strcmp(fruit[min_index],fruit[j]) > 0){
                //Updating min_index value if there any condition exist where strcmp(fruit[min_index],fruit[j] >0)
                min_index = j;
            }
        }
        //Checking if there any updation of min_index or not occured
        if(min_index !=i){
            //If occured than we will swap
            swap(fruit[i],fruit[min_index]);
        }
    }
    return;
}

int main(){
    char fruit[][60] = {"kiwi","papaya","apple","mango","banana","cherry"};
    //Calculating the size of the array
    int size = sizeof(fruit) / sizeof(fruit[0]);
    //Printing array element before swapping
    cout<<"before sorting : ";
    for(int i=0;i<size;i++){
        cout<<fruit[i]<<" ";
    }   
    cout<<endl;
    //Calling the function
    selectionSort(fruit,size);
    //Printing array element after swapping
    cout<<"After swapping : ";
    for(int i=0;i<size;i++){
        cout<<fruit[i]<<" ";
    }
    return 0;
}