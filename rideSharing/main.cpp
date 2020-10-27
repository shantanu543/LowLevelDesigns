#include <iostream>
#include <map>
#include "Sharer.h"

using namespace std;

int main(){
    Sharee mainPerson;
    Sharer sharingPerson;
    bool appClose = false;
    multimap<int,int>mp;
    while(!appClose){
        int x;
        cout<<"Enter 0 for offering ride | 1 for getting a ride |  2 for show rides | -1 for exit:";
        cin>>x;
        switch(x){
        case 0:
            mainPerson.promptSourceDest(mp);
            break;
        case 1:
            sharingPerson.addSourceDest(mp);
            cout<<endl;
            break;
        case 2:
            mainPerson.printRides(mp);
            break;
        case -1:
            appClose = true;
            break;
        }
    }   
    return 0;
}