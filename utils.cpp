#include <iostream>
using namespace std;

#include "utils.h"

string resources[5]={"water","Elecricity","wifi","Hospital","Transport"};

void bubbleSort(){
    for (int i=0; i<5; i++)
        for (int j=0;j<4;j++)
            if (resources[j]>resources[j+1])
                swap(resources[j],resources[j+1]);

}

void searchResource(string r) {
    for (int i = 0; i < 5; i++)
        if (resources[i] == r) {
            cout << r << " found!\n";
            return;
        }
    cout << "Not found!\n";
}

void utilsMenu(){
    int choice;
    cout<< "\n--- RESOURCES (SEARCH AND SORT) ---\n";
    cout<<"1. Sort resources \n2. Search resources\nChoice: ";
    cin >> choice;
    if (choice==1){
        bubbleSort();
        for (int i=0;i<5;i++)
            cout<<resources[i]<<endl;    
    }else{
        string r;
        cout<<"Enter resources: ";
        cin>>r;
        searchResource(r);
    }
}