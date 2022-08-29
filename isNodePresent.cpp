//Node _is _present_or not

bool isPresent(BTreeNode *root,int x){
    bool left1=false,right1=false;
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    left1=isPresent(root->left,x);
    if(left1){
        return left1;
    }
    right1=isPresent(root->right,x);
    return right1;
}

