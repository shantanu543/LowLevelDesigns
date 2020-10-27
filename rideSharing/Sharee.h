#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Sharee{
    public:
    
    Sharee(){};
    void addRide(int source, int dest,multimap<int,int>&mp){
        mp.insert({source,dest});
    }
    void printRides(multimap<int,int>&mp){
        for(auto itr = mp.begin();itr !=mp.end();++itr)
            cout<<itr->first<<"--->"<<itr->second<<endl;
    }
    void promptSourceDest(multimap<int,int>&mp){
        int source, dest;
        cout<<"Enter Source: ";
        cin>>source;
        cout<<"Enter Dest: ";
        cin>>dest;
        addRide(source,dest,mp);
    }
};