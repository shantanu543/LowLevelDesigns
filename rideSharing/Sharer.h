#include <iostream>
#include <bits/stdc++.h>
#include"Sharee.h"

using namespace std;

class Sharer{
    public:
    Sharer(){};
    bool searchRideUtil(multimap<int,int>&mp,int &source, int &dest){
        for(auto itr = mp.begin();itr != mp.end();++itr){
            if(itr->first == source && itr->second == dest)
                return true;
            else if(itr->first == source && itr->second != dest && itr->second > dest){
                dest = itr->second;
                return true;
            }
            else if(itr->first == source && itr->second != dest && itr->second < dest){
                return false;
            }
            else if(itr->first != source){
                if(itr->second == dest){
                    int minimumDist = 5;
                    for(auto i = mp.begin();i!= mp.end();++i){
                        if(i->second == dest && abs(i->first - source) < minimumDist){
                            minimumDist = abs(i->first - source);
                            source = i->first;
                        }
                    }
                    if(minimumDist < 5)
                        return true;
                    else
                        return false;
                }
                else if(itr->second > dest)
                    return true;
                else if(itr->second < dest)
                    return false;
            }
        }
    }
    void searchRide(int source, int dest,multimap<int,int>&mp){
        if(searchRideUtil(mp,source,dest))
            cout<<"Ride available from "<<source<<"--->"<<dest;
        else
        {
            cout<<"Ride Not Available";
        }
        
    }
    void addSourceDest(multimap<int,int>&mp){
        int source, dest;
        cout<<"Enter Source: ";
        cin>>source;
        cout<<"Enter Dest: ";
        cin>>dest;
        searchRide(source,dest,mp);
    }
};