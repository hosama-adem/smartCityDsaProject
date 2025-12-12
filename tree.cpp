#include <iostream>
using namespace std;

#include "tree.h"

struct TNode{
    string zone;
    TNode* left;
    TNode* right;
};

TNode* createNode(string z){
    TNode* n=new TNode;
    n->zone=z;
    n->left=n->right=NULL;
    return n;
}

void inorder(TNode* r){
    if (r==NULL) return;
    inorder(r->left);
    cout<< r->zone<< " ";
    inorder(r->right);
}

void treeMenu(){
    TNode* root =createNode("Adama City");
    root->left = createNode("Bole");
    root->right = createNode("Piasa");
    root->left ->left = createNode("Sebeta");
    root->right -> right =createNode("katanga");
    cout << "\n--- ADAMA CITY ZONES (Tree)---\n";
    inorder(root);
    cout<<endl;
}