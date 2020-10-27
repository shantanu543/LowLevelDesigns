#include<iostream>
#include<bits/stdc++.h>
#include "Entry.h"
#include "Exit.h"

using namespace std;

void displayData(int totalFloors, int displayAvailableSpots[]){
    for(int i =0;i<totalFloors;i++)
        cout<<"Floor "<<i<<" Available Spots: "<<displayAvailableSpots[i]<<endl;
}
int main(){
    int totalFloors, spotsInEachFloor;
    cout<<"Enter Total Number of floors : ";
    cin>>totalFloors;
    cout<<"Enter Spots in each floor : ";
    cin>>spotsInEachFloor;
    int displayAvailableSpots[totalFloors];
    for(int i=0;i<totalFloors;i++){
        displayAvailableSpots[i] = spotsInEachFloor;
    }
    int inputVal;
    Entry vehicleEntry;
    Exit vehicleExit;
    map<int,pair<int,int>>mp;
    while(1){
        cout<<"1 for showSpots | 2 for Entry | 3 Exit :";
        cin>>inputVal;
        switch(inputVal){
            case 1:
                displayData(totalFloors,displayAvailableSpots);
                break;
            case 2:
                vehicleEntry.addVehicle(mp,displayAvailableSpots,totalFloors);
                displayData(totalFloors,displayAvailableSpots);
                break;
            case 3:
                vehicleExit.ExitVehicle(mp,displayAvailableSpots);
                displayData(totalFloors,displayAvailableSpots);
                break;
        }
    }
    system("pause");
    return 0;
}