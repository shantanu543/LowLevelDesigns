#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Exit{
    public:
    Exit(){};

    void ExitVehicle(map<int,pair<int,int>>&mp,int displayAvailableSpots[]){
        int vehicleNumber;
        cout<<"Enter Vehicle Number: ";
        cin>>vehicleNumber;
        pair<int,int>currentVehicle = mp.at(vehicleNumber);
        displayAvailableSpots[currentVehicle.first] = displayAvailableSpots[currentVehicle.first] +  currentVehicle.second;
        mp.erase(vehicleNumber);
    }
};