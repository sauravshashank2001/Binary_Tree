//making_mirror_image

//1->2,3 2>4 5 3>6 7=== 1->3,2  3>7 6  2>5 4 

BTreeNode *making_mirror_image(BTreeNode *root){
    if(root==NULL){
        return NULL;
    }
    BTreeNode *left_image=making_mirror_image(root->left);
    BTreeNode *right_image=making_mirror_image(root->right);
    root->left=right_image;
    root->right=left_image;
    return root;
    
}