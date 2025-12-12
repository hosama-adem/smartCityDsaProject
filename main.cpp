#include <iostream>
using namespace std;

#include "graph.h"
#include "linkedlist.h"
#include "stack.h"
#include "queue.h"
#include "tree.h"
#include "utils.h"

int main(){
    int choice;
    while (true){
        cout<<"\n==== SMART CITY SYSYTEM (ADAMA,ETHIOPIA)====\n";
        cout<<"1. City Navigation (Graph + BFS/DFS)\n";
        cout<<"2. Search and Sort Resources\n";
        cout<<"3. Manage Live Events(Linked List)\n";
        cout<<"4. Navigation History (stack)\n";
        cout<<"5. Handle Requests (Queue)\n";
        cout<<"6. Display City Zones(Tree)\n";
        cout<<"7. Exit\n";
        cout<<"Enter choice: ";
        cin >> choice;
        
        switch (choice)
        {
        case 1:graphMenu();
            break;
        case 2:utilsMenu();
            break;
        case 3: linkedListMenu();
            break;
        case 4: stackMenu();
            break;
        case 5: queueMenu();
            break;
        case 6: treeMenu();
            break;
        case 7: return 0;
        
        default:
            cout<<"Invalid choice!\n";
        }
    }
    return 0;
}
