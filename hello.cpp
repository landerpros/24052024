#include<iostream>
using namespace std;

struct Node{
    int value;
    Node* left;
    Node* right;
    Node(int data){
        value = data;
        left = NULL;
        right = NULL;
    }
};

void LRN (Node* p){
    if(p != NULL){
        LRN(p->left);
        LRN(p->right);
        cout << p->value << " ";
    }
}


int main(){
    Node* root = new Node(100);
    root->left = new Node(5);
    root->left->left = new Node(7);
    root->left->right = new Node(12);
    root->left->right->left = new Node(1);
    root->left->right->left->left = new Node(14);
    root->left->right->left->right = new Node(16);
    root->left->right->right = new Node(3);
    root->right = new Node(31);
    root->right->right = new Node(34);
    root->right->right->right = new Node(301);
    LRN(root);
}
