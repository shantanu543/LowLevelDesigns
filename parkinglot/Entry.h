#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Entry{
    public:
    Entry(){
    };

    int calculateSpots(int vehicleType){
        switch(vehicleType){
            case 1:
                return 1;
                break;
            case 2:
                return 2;
                break;
            case 3:
                return 4;
                break;
        }
    }

    bool checkSpaceAvailable(int displayAvailableSpots[], int &totalFloors,int &floorNumberAssigned, int spotsNeed){
        for(int i =0;i<totalFloors;i++){
            if(displayAvailableSpots[i] >= spotsNeed){
                floorNumberAssigned = i;
                return true;
            }
        }
        return false;
    }
    void addVehicle(map<int,pair<int,int>>&mp,int displayAvailableSpots[], int totalFloors){
        int vehicleNumber;
        int vehicleType;
        cout<<"Enter Vehicle Number: ";
        cin>>vehicleNumber;
        cout<<"1 Two Wheeler | 2 Car | 3 Truck ----- Enter vehicle Type: ";
        cin>>vehicleType;
        int spotsNeed = calculateSpots(vehicleType);
        int floorNumberAssigned = -1;
        if(checkSpaceAvailable(displayAvailableSpots,totalFloors,floorNumberAssigned,spotsNeed)){
            mp.insert({vehicleNumber, {floorNumberAssigned,spotsNeed}});
            displayAvailableSpots[floorNumberAssigned] = displayAvailableSpots[floorNumberAssigned] - spotsNeed;
            cout<<"Floor Assigned : "<<floorNumberAssigned<<endl;
        }
        else{
            cout<<"No Space Available"<<endl;;
        }
        
    }
};