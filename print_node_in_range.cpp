//print_all_node_in_range---------------- BST


void print_all_node_in_range(BTreeNode *root,int low,int high){
    if(root==NULL){
        return;
    }
    
    if(root->data<high && root->data>low){
        cout<<root->data<<" ";
    }
    if(root->data<low){
        print_all_node_in_range(root->right,low,high);
    }
    else if(root->data>high){
        print_all_node_in_range(root->left,low,high);
    }
    else{
        print_all_node_in_range(root->left,low,high);
        print_all_node_in_range(root->right,low,high);
    }
    
    
}


