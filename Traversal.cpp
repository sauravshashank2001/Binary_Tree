
//Inorder_traversal

void Inorder_traversal(BTreeNode *root){
    if(root==NULL){
        return;
    }
    Inorder_traversal(root->left);
    cout<<root->data<<" ";
    Inorder_traversal(root->right);
}


//pre_order traversal

void pre_order(BTreeNode *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
}


//post_order traversal

void post_order(BTreeNode *root){
    if(root==NULL){
        return;
    }
    
    post_order(root->left);
    post_order(root->right);
    cout<<root->data<<" ";
}

