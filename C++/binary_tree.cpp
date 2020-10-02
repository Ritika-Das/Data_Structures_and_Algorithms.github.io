#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int data){
        this->data=data;
        this->left=this->right=NULL;
    }
};

class Binary_tree{
    private:
    Node *root;
    public:
    Binary_tree(Node *root){
        root=root;
    }
    void inorder_traversal(Node *root){
        Node *cur_node=root;
        if(cur_node ==NULL){
            return ;
        }
        inorder_traversal(cur_node->left);
        cout<<cur_node->data<<" ";
        inorder_traversal(cur_node->right);
        
    }
    void preorder_traversal(Node *root){
        Node *cur_node=root;
        cout<<cur_node->data;
        preorder_traversal(cur_node->left);
        preorder_traversal(cur_node->right);
    }
    void postorder_traversal(Node *root){
        
        Node *cur_node= root;
        if (cur_node==NULL){
            return ;
        }
        postorder_traversal(cur_node->left);
        postorder_traversal(cur_node->right);
        cout<<cur_node->data<<" ";
    }



};
int main(){
    Node *root=new Node(4);
    root->left=new Node(5);
    root->right=new Node(3);
    root->left->left=new Node(6);
    root->left->right=new Node(7);
    Binary_tree b(root);
    b.postorder_traversal(root);

}