#include <stdio.h>
/*
 * THIS PROGRAM DOES NOT WORK PROPERLY.
 * 
 * FOR A CORRECT VERSION SEE list.c
 * 
 * Author: Joanna Klukowska 
 * 
 */ 


//linked list node 
struct node {
    char * word;
    struct node * next;
};


void addFront(struct node * n, struct node * head);
    

int main() {
    struct node * head = 0; //head pointer for the list
    
    struct node n1 = { "hello", 0};
    struct node n2 = { "cso201", 0};
    struct node n3 = { "students", 0} ;
    
    
    addFront ( &n1, head);
    addFront ( &n2, head);
    addFront ( &n3, head);
    
    
    struct node * current = head;
    
    while (current != 0 ) {
        printf ("%s     ", current->word );
        current = current->next;
    }
    printf("\n");
    
    return 0;
}


//add node to the head of the list 
void addFront(struct node * n, struct node * head) {
    if (head == 0) return;
    
    n->next = head;
    head = n;
}
