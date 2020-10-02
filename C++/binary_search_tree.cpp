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
        left=right=NULL;
    }
};

class Binary_tree{
    private:
    Node *root =NULL;
    public:
    Binary_tree(struct Node *root){
        root=NULL;
    }
    void inorder_traversal(struct Node *root){
        if(root==NULL){
            return ;
        }
        return inorder_traversal(root->left);
        cout<<root->data<<" ";
        return inorder_traversal(root->right);
    }
    struct Node *mininordersuccessor(struct Node *root){
        struct Node *cur_node =root;
        while(cur_node && cur_node->left){
            cur_node=cur_node->left;
        }
        return cur_node;
    }

    struct Node *delete_node(struct Node *root,int data){
        if(root==NULL){
            return root;
        }
        if(data>root->data){
            root->right=delete_node(root->right,data);
        }
        else if(data<root->data){
            root->left=delete_node(root->left,data);
        }
        else{
            if(root->left==NULL){
                struct Node *temp=root->right;
                free(root);
                return temp;
            }
            else if(root->right==NULL){
                struct Node *temp=root->left;
                free(root);
                return temp;
            }
        struct Node *temp=mininordersuccessor(root->right);
        root->data=temp->data;
        root->right=delete_node(root->right,temp->data);    
        }
    return root;
    }

    struct Node *insert_node(struct Node *root,int data){
        Node *new_node =new Node(data);
        if(root==NULL){
            new_node->left=NULL;
            new_node->right=NULL;  
            return new_node;
        }
        if(data>root->data){
            root->right=insert_node(root->right,data);
        }
        else{
            root->left=insert_node(root->left,data);
        }
        return root;
    }
    struct Node *search_node(struct Node *root,int data){
        if (root == NULL || root->data == data) 
       return root; 
     
    // Key is greater than root's key 
    if (root->data < data) 
       return search_node(root->right, data); 
  
    // Key is smaller than root's key 
    return search_node(root->left, data); 
    }

};

int main(){
    
    struct Node *root=NULL;
    Binary_tree b(root);   
    cout<<b.insert_node(root,10)<<"\n";
    b.insert_node(root,9) ;
    b.insert_node(root,12);
    b.insert_node(root,3);
    b.insert_node(root,19);
    b.insert_node(root,2);
    b.search_node(root,12);
    b.delete_node(root,12);
    b.search_node(root,12);
}