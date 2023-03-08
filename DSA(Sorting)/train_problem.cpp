//The idea is to merge the arrival and departure times of trains and consider them in sorted order. Maintain a counter to count the total number of trains present at the station at any point. The counter also represents the total number of platforms needed at that time.

//If the train is scheduled to arrive next, increase the counter by one and update the minimum platforms needed if the count is more than the minimum platforms needed so far.
//If the train is scheduled to depart next, decrease the counter by 1.
//One special case needs to be handled – when two trains are scheduled to arrive and depart simultaneously, depart the train first.

#include<bits/stdc++.h>
using namespace std;
//Declaring global variable
typedef vector<double> trains;

//Creating a function to calculate no. of platforms are required
int findplatforms(trains arrival,trains departure){
    //Sort the arrival time
    sort(arrival.begin(),arrival.end());
    //Sort the departure time
    sort(departure.begin(),departure.end());
    //Counting
    int count = 0;
    //To calculate total platfrom required
    int platforms = 0;
    //For Traversing purpose
    int i = 0,j = 0;
    //while ith value is less than arrial 
    while(i < arrival.size()){
        //if departure time is more than arrival time
        if(arrival[i] < departure[j]){
            //then we increase platfrom number
            platforms = max(platforms,++count);
            i++;
        }
        else{
            //Else we decrease
            count --;
            j++;
        }
    }
    //Returning the platforms value
    return platforms;
}
int main(){
    trains arrival = { 2.00, 2.10, 3.00, 3.20, 3.50, 5.00 };
    trains departure = { 2.30, 3.40, 3.20, 4.30, 4.00, 5.20 };
    //Calling the function
    cout<<"Minimum platforms are required : "<<findplatforms(arrival,departure);
    return 0;
}