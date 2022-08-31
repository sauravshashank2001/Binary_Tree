
//diameter_of_btree

// either diameter is present in left,or right,or include both



//brute force

int diameter_of_btree(BTreeNode *root){
    if(root==NULL){
        return 0;
        
    }
    int height=height_of_binary_tree(root->left)+height_of_binary_tree(root->right);
    int diameter1=diameter_of_btree(root->left);
    int diameter2=diameter_of_btree(root->right);
    return max(height,max(diameter1,diameter2));
}


pair<int,int> diameter_of_btree2(BTreeNode *root){
    if(root==NULL){
        pair<int,int> ans;
        ans.first=0;
        ans.second=0;
        return ans;
        
    }
    pair<int,int> smallleft=diameter_of_btree2(root->left);
    pair<int,int> smallright=diameter_of_btree2(root->right);
    int leftheight=smallleft.second;
    int rightheight=smallright.second;
    int leftdiameter=smallleft.first;
    int rightdiameter=smallright.first;
    int height=1+max(leftheight,rightheight);
    int diameter=max(leftheight+rightheight,max(leftdiameter,rightdiameter));
    pair<int,int> final_ans;
    final_ans.first=diameter;
    final_ans.second=height;
    return final_ans;
    
}


//max&min of Binary_tree_

pair<int,int> max_min(BTreeNode *root){
    if(root==NULL){
        pair<int,int> ans;
        ans.first=0;
        ans.second=0;
        return ans;
    }
    
    if(root->left==NULL && root->right==NULL){
        pair<int,int> ans2;
        ans2.first=root->data;
        ans2.second=root->data;
        return ans2;
    }
    
    pair<int,int> small1=max_min(root->left);
    pair<int,int> small2=max_min(root->right);
    int max1=small1.first;
    int max2=small2.first;
    int min1=small1.second;
    int min2=small2.second;
    int maximum=max(root->data,max(max2,max1));
    int minimum=min(root->data,min(min1,min2));
    
    pair<int,int> final_ans;
    final_ans.first=maximum;
    final_ans.second=minimum;
    return final_ans;
}