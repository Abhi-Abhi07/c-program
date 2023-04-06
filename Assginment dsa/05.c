#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}*nod;
nod head = NULL;
int isempty(){
    return head==NULL;
}
void insertatfront(int value){
    nod temp = malloc(sizeof(nod));
    temp->data=value;
    temp->next=NULL;
    if(isempty()){
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
}
void insertatBack(int value){
    nod temp=malloc(sizeof(nod));
    temp->data=value;
    temp->next=NULL;
    if(isempty()){
        head=temp;
    }
    else{
        nod curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
    }
}
void insertAfter(int key,int value){
    nod node=malloc(sizeof(nod));
    node->data=value;
    node->next=NULL;
    nod curptr=head;
    while(curptr!=NULL && curptr->data!=key){
        curptr=curptr->next;
    }
    if(curptr==NULL){
        printf("%s","key not found");
    }
    else if(curptr->next==NULL){
        curptr->next=node;
    }
    else{
        node->next=curptr->next;
        curptr->next=node;
    }
}
void delete(int key){
    if(isempty()){
        printf("%s","list is empty !");
    }
    nod preptr=NULL;
    nod currptr=head;
    while(currptr!=NULL && currptr->data!=key){
        preptr=currptr;
        currptr=currptr->next;
    }
    if(currptr==NULL){
        printf("%s","key not found !");
    }
    else if(preptr==NULL){
        head=head->next;
        free(currptr);
        currptr=NULL;
        return;
    }
    else if(currptr->next==NULL){
        preptr->next=NULL;
        free(currptr);
        currptr =NULL;
        return;
    }
    else{
        preptr->next=currptr->next;
        free(currptr);
        currptr=NULL;

    }
}
void print(){
    nod temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int find(int key){
    if(isempty()){
        return 0;
    }
    nod currptr=head;
    while(currptr!=NULL && currptr->data!=key){
        currptr=currptr->next;
    }
    if(currptr==NULL){
        return 0;
    }
    return 1;
}
int main(){
    insertatBack(4);
    print();
    insertatBack(5);
    print();
    insertatBack(6);
    print();
    insertAfter(5,9);
    print();
    printf("%d is present or not %d\n",6,find(6));
    delete(6);
    print();
    printf("%d is present or not %d",6,find(6));
    return 0;
}

//niche with explanation he

// #include<stdio.h>

// struct Node {
//     int data;
//     struct Node *next;
// };

// typedef struct Node *NodePtr;

// // global variable head. It points to the 
// // first node of the list
// NodePtr head = NULL;

// // check if the list is empty
// int isEmpty() {
//     return head == NULL;
// }

// // Insert 'value' at the front of the list
// void insertAtFront(int value) {
//     NodePtr node = malloc(sizeof(NodePtr));
//     node->data = value;
//     node->next = NULL;
    
//     if (isEmpty()) {
//         head = node;
//     } else {
//         node->next = head;
//         head = node;
//     }
// }
// void insertAtBack(int value) {
//     NodePtr node = malloc(sizeof(NodePtr));
//     node->data = value;
//     node->next = NULL;
    
//     if (isEmpty()) {
//         head = node;
//     } else {
//         // find the last node 
//         NodePtr currPtr = head;
//         while (currPtr->next != NULL) {
//             currPtr = currPtr->next;
//         }
        
//         // insert it 
//         currPtr->next = node;
//     }
// }
// void print() {
//     NodePtr currPtr = head;
//     while (currPtr != NULL) {
//         printf("%d", currPtr->data);
//         printf(" ");
//         currPtr = currPtr->next;
//     }
//     printf("\n");
// }
// // inserts value after key
//     NodePtr insertAfter(int key, int value) {
//     NodePtr node = malloc(sizeof(NodePtr));
//     node->data = value;
//     node->next = NULL;

//     // find the position of key
//     NodePtr currPtr = head;
//     while (currPtr != NULL && currPtr->data != key) {
//         currPtr = currPtr->next;
//     }
    
//     // if key is not there, raise error
//     if (currPtr == NULL) {
//         printf("%s", "key not found");
//     } else if (currPtr->next == NULL) {
//         // if key is the last node, insert right after it 
//         currPtr->next = node;
//     } else {
//         // insert between key and item next to key 
//         NodePtr nextPtr = currPtr->next;
//         currPtr->next = node;
//         node->next = nextPtr;
//     }
// }
// // removes an item with value 'key'
// void delete(int key) {
//     if (isEmpty()) {
//         printf("%s", "List is empty");
//         return;
//     }
    
//     // get to the position of key
//     NodePtr prevPtr = NULL;
//     NodePtr currPtr = head;
//     while(currPtr != NULL && currPtr->data != key) {
//         prevPtr = currPtr;
//         currPtr = currPtr->next;
//     }
    
//     if (currPtr == NULL) {
//         printf("%s", "Key is not found in the list");
//         return;
//     }
    
//     if (prevPtr == NULL) {
//         // this is the first item
//         head = head->next;
//         free(currPtr);
//         currPtr = NULL;
//         return;
//     }
    
//     if (currPtr->next == NULL) {
//         // this is the last item
//         prevPtr->next = NULL;
//         free(currPtr);
//         currPtr = NULL;
//     } else {
//         // anywhere in between first and last
//         NodePtr nextPtr = currPtr->next;
//         prevPtr->next = nextPtr;
//         free(currPtr);
//         currPtr = NULL;
//     }
// }
// // check if a key is in the list
// int find(int key) {
//     if (isEmpty()) {
//         return 0;
//     }

//     NodePtr currPtr = head;
//     while (currPtr != NULL && currPtr->data != key) {
//         currPtr = currPtr->next;
//     }

//     if (currPtr == NULL) {
//         return 0;
//     }

//     return 1;
// }
// int main(){
//     insertAtBack(4);
//     insertAtBack(5);
//     insertAtBack(6);
//     print();
//     insertAfter(5,9);
//     print();
//     return 0;
// }