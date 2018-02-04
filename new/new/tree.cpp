./#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define COUNT 10
 
// A binary tree node
struct Node
{
    int data;
    Node* left, *right;
};
void add(Node *t,int m); 
// Helper function to allocates a new node
Node* newNode(int data)
{
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
 
// Function to print binary tree in 2D
// It does reverse inorder traversal
void print2DUtil(Node *root, int space)
{
    // Base case
    if (root == NULL)
        return;
 
    // Increase distance between levels
    space += COUNT;
 
    // Process right child first
    print2DUtil(root->right, space);
 
    // Print current node after space
    // count
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%d\n", root->data);
 
    // Process left child
    print2DUtil(root->left, space);
}
 
// Wrapper over print2DUtil()
void print2D(Node *root)
{
   // Pass initial space count as 0
   print2DUtil(root, 0);
}
 
// Driver program to test above functions
int main()
{ 
    Node *root ;
    
    
    cout<<"Enter the number of nodes\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m=0;
        cin>>m;
        if(root == NULL)
        {
            root = newNode(m);
        }
        else
        {
            add(root,m);
        }
    }



    print2D(root);
 
    return 0;
}
void add(Node *t,int m)
{
Node *h= newNode(m);
if(t->data > m)
{
    if(t->left == NULL)
        t->left=h;
    else
        add(t->left,m);
}
else
{
    if(t->right == NULL)
        t->right=h;
    else
        add(t->right ,m);
}

}