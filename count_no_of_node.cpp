
//count_no_of_node

int count_no_of_node(BTreeNode *root){
    if(root==NULL){
        return 0;
    }
    int leftcount=count_no_of_node(root->left);
    int rightcount=count_no_of_node(root->right);
    return leftcount+rightcount+1;
}

