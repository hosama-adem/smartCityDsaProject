#include <iostream>
using namespace std;

#include "linkedlist.h"

struct Node {
    string event;
    Node* next;
};

Node* head =NULL;

/*to add event in the begninng or insert in the begninning */
void addEvent(string e) {
    Node* n = new Node;
    n->event = e;
    n->next = head;
    head = n;
}

/*To show all events*/
void showEvents(){
    Node* temp =head;
    cout<< "Live Events \n";
    while (temp != NULL){
        cout<< "-"<<temp->event << endl;
        temp = temp->next;
    }
}

/*for user menu function */
void linkedListMenu(){
    int choice ;
    string e;

    cout<< "\n--- MANAGE LIVE EVENTS ---\n";
    cout<< "1. Add Event\n2.view Events\nEnter choice: ";
    cin>>choice;
    /* if user chooses add event*/
    if (choice == 1) {
        cout<<"Enter event name: ";
        cin.ignore();
        getline(cin,e);
        addEvent(e);
    }else{
        showEvents();
    }

}