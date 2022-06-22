#include <stdio.h>
/*
 * This program illustrates our first attempt at implementing
 * a linked list. 
 * This is not ideal and we will have a better version
 * once we look at the dynamic memory allocation. 
 * 
 * Author: Joanna Klukowska 
 * 
 */ 


//linked list node 
struct node {
    char * word;
    struct node * next;
};

//adds the node pointed to by n to the front of the linked 
//list pointed to by head
// !!! note that since we need to change what head
//     points to, we need a pointer to it - yes that 
//     is a pointer to a pointer or a double pointer 
void addFront(struct node * n, struct node ** head);
    

int main() {
    struct node * head = 0; //head pointer for the list
    
    struct node n1 = { "hello", 0};
    struct node n2 = { "cso201", 0};
    struct node n3 = { "students", 0} ;
    
    addFront ( &n1, &head);
    addFront ( &n2, &head);
    addFront ( &n3, &head);
    addFront ( &n3, 0);
    
    
    struct node * current = head;
    
    while (current != 0 ) {
        printf ("%s     ", current->word );
        current = current->next;
    }
    printf("\n");
    
    return 0;
}


//add node to the head of the list 
void addFront(struct node * n, struct node ** head) {
    if (head == 0) return;
    
    n->next = (*head);
    (*head) = n;
}
