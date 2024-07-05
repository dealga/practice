#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;
    Node(int value){
        data=value;
        left=right=nullptr;
    }
};
void iordermirrortree(Node * root){
    if(root != nullptr){
        Node *temp = root->left;
        root->left = root->right;
        root->right = temp;
        iordermirrortree(root->left);
        cout<<root->data<<" ";
        iordermirrortree(root->right);
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
    //root->left->right->left=new Node(9);
    //root->right->right->left=new Node(15);

    //TRAVERSALS
    iordermirrortree(root);
}