#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node * left;
    Node * right;
    explicit Node(int value){     //explicit helps to restrict unnecessary changes done by anything
        data = value;
        left=right=nullptr;
    }
};
void preordertree(Node * root){   //because everything traverses from the root
    if(root != nullptr){         //DLR
        cout<<root->data<<" ";
        preordertree(root->left);
        preordertree(root->right);
    }
}
void inordertree(Node * root){  //LDR
    if(root != nullptr){         
        inordertree(root->left);
        cout<<root->data<<" ";
        inordertree(root->right);
    }
}
void postordertree(Node * root){
    if(root != nullptr){         
        inordertree(root->left);
        inordertree(root->right);
        cout<<root->data<<" ";
    }
}
int main(){
    Node * root=new Node(1);
    root->left=new Node(2);     //new keyword allocates heap memory and returns a pointer to it
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    root->left->right->left=new Node(9);
    root->right->right->left=new Node(15);

    //TRAVERSALS 
    cout<<"preorder traversal: "<<endl;
    preordertree(root);
    cout<<"\ninorder traversal: "<<endl;
    inordertree(root);
    cout<<"\npostorder traversal: "<<endl;
    postordertree(root);
    return 0;
}