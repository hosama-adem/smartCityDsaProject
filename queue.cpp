#include <iostream>
using namespace std;

#include "queue.h"

string req[20];
int frontQ=0, rearQ=0;

void addRequest(string r){
    req[rearQ++]=r;
}

void processRequest(){
    if (frontQ==rearQ)
        cout<< "No request!\n";
    else
        cout<<"Processed: "<<req[frontQ++]<<endl;
}

void queueMenu(){
    int choice ;
    cout<< "\n--- REQUEST QUEUE ---\n";
    cout<< "1.Add Request\n2.Process Request\nChoice: ";
    cin>>choice;
    
    if (choice ==1){
        string r;
        cout<<"Enter request: ";
        cin.ignore();
        getline(cin,r);
        addRequest(r);
    }else{
        processRequest();
    }

}