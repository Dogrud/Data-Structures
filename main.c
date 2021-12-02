//Stack Data Structure built from Linkedlist
#include <stdio.h>
#include <stdlib.h>
#include "Stack_ll.h"
int pop(node *root){
    if(root=NULL){
        printf("stack bos");
        return -1;
    }
    node* iter = root;
    while(iter->next->next!=NULL)
        iter=iter->next;
    node *temp = iter->next;
    int rvalue=temp->data;
    free(temp);
    iter->next=NULL;
    return value;
}
void push(node * root,int a){
    if(root=NULL){
        root=(node*)malloc(sizeof(node));
        root->data=a;
        root->next=NULL;
        return root;
    }
        node * iter = root;
        while(iter->next != NULL)
            iter=iter->next;

         node *temp=(node*)malloc(siseof(node));
         temp->data=a;
         temp->next=NULL;
         iter->next=temp;
        return root;
        }

int main()
{
noed* s=NULL;
s=push(s,10);
s=push(s,20);
printf("%d-> ",pop(s));
printf("%d-> ",pop(s));


    return 0;
}

