
//height_of_binary_tree

int height_of_binary_tree(BTreeNode *root){
    if(root==NULL){
        return 0;
    }
    int left_height=height_of_binary_tree(root->left);
    int right_height=height_of_binary_tree(root->right);
    return max(left_height,right_height)+1;
}

