#include<bits/stdc++.h>
using namespace std;


//Binary_tree_node class

class BTreeNode{
    public:
    int data;
    BTreeNode *left;
    BTreeNode *right;
    BTreeNode(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

//printing_the_Binary_Tree


void print(BTreeNode *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"->";
    if(root->left!=NULL){
        cout<<root->left->data<<" ";
    }
    if(root->right!=NULL){
        cout<<root->right->data<<" "; 
    }
    cout<<endl;
    print(root->left);
    print(root->right);
    
}


//data_input_level_wise
BTreeNode *takeInput(){
    int rootData;
    cout<<"enter the rootData"<<endl;
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    BTreeNode *root=new BTreeNode(rootData);
    queue<BTreeNode *> q;
    q.push(root);
    while(q.size()!=0){
        BTreeNode *front=q.front();
        q.pop();
        int leftchild;
        cout<<"enter the leftchild of "<<front->data<<endl;
        cin>>leftchild;
        if(leftchild!=-1){
            BTreeNode *newNode=new BTreeNode(leftchild);
            q.push(newNode);
            front->left=newNode;
        }
        int rightchild;
        cout<<"enter the right child of"<<front->data<<endl;
        cin>>rightchild;
        if(rightchild!=-1){
            BTreeNode *newNode=new BTreeNode(rightchild);
            q.push(newNode);
            front->right=newNode;
        }
    }
    return root;
}



int main(){
    BTreeNode *root=takeInput();
    print(root);
}