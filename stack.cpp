#include<iostream>
using namespace std ;

#include "stack.h"

string history[20];
int top =-1;

void pushHistory(string place) {
    if (top < 19) history[++top] = place;
}

void showHistory(){
    cout<< "Navigaion History : \n";
    for (int i =top; i>=0; i--)
        cout<<history[i]<<endl;
}

void stackMenu(){
    int choice;
     cout<<" \n---Navigation History ---\n";
     cout<< "1. Add place\n2.show history\nchoice:";
     cin>> choice;

     if (choice==1){
        string p;
        cout<< "Enter place: ";
        cin.ignore();
        getline(cin,p);
        pushHistory(p);
    }else{
        showHistory();
    }

}