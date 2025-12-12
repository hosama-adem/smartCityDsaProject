#include <iostream>
#include <queue>
using namespace std;

#include "graph.h"

int graph[6][6]={
    {0,1,1,0,0,0},
    {1,0,1,0,1,0},
    {1,1,0,1,0,1},
    {0,0,1,0,1,0},
    {0,1,0,1,0,1},
    {0,0,1,0,1,0}
};

string places[6]={
    "Adama University","Bus Station","Piasa","Katanga","Abattoir","Hospital"
};
int visitedDFS[6];

void bfs(int start){
    int visited[6]={0};
    queue<int> q;

    visited[start]=1;
    q.push(start);

    cout<<"Bfs from"<<places[start]<<": ";

    while (!q.empty()){
        int node = q.front();
        q.pop();
        cout<< places[node]<<"->";
        for (int i=0 ;i<6 ;i++){
            if (graph[node][i]==1 && !visited[i]){
                visited[i]=1;
                q.push(i);
            }
        }
    }
    cout<<"END\n";
}


void dfsRec(int node) {
    visitedDFS[node] = 1;
    cout << places[node] << " -> ";

    for (int i = 0; i < 6; i++) {
        if (graph[node][i] == 1 && !visitedDFS[i]) {
            dfsRec(i);
        }
    }
}

void dfs(int start) {
    for (int i = 0; i < 6; i++)
        visitedDFS[i] = 0;

    cout << "DFS from " << places[start] << ": ";
    dfsRec(start);
    cout << "END\n";
}


void graphMenu(){
    int start ,opt;
    cout<<"\n--- CITY NAVIGATION (ADAMA) ---\n";
    for (int i=0; i<6; i++){
        cout<<i<<" = "<<places[i]<<endl;
    }
    cout<< "Enter start location";
    cin>>start;

    cout<<"1.BFS\n2.DFS\nChoose: ";
    cin >> opt;
    if(opt==1)bfs(start);
    else dfs(start);


}