//Binary search tree
//asimple program to create a BST of integers and Search an element in it
#include<iostream>

using namespace std;

struct BstNode {
    int data;
    BstNode* left;
    BstNode* rigth;
};

//Function to create a new Node in Heap
BstNode* getNewNode(int data){
    BstNode* newNode = new BstNode();
    //as the same that (*newNode).data = data;
    newNode->data = data;
    newNode->left = newNode->rigth = NULL;
    return newNode;
}

//To insert data in BST, returns address of root node.
BstNode* Insert(BstNode* root,int data){    
    if(root == NULL) root = getNewNode(data); //Empty tree
    else if(data <= root->data) root->left = Insert(root->left,data); //if data to be inserted is lesser, insert in left subtree
    else root->rigth = Insert(root->rigth,data); //else insert in rigth subtree
    return root;
}

bool Search(BstNode* root, int data){
    if(root == NULL) return false;
    else if(root->data == data) return true;
    else if(data <= root->data) return Search(root->left,data);
    else return Search(root->rigth,data);
}

int main(){
    BstNode* root = NULL; //Empty tree
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,35);
    root = Insert(root,4);
    root = Insert(root,11);
    int number;
    cout<<"Enter number be searched: ";
    cin>>number;
    if(Search(root,number)) cout<<"Found\n";
    else cout<<"Not Found\n";
    return 0;
}
