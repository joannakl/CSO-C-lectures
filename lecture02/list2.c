#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>   //  <=== for malloc and free >
#include <string.h> 
/*
 * This program illustrates our second attempt at implementing
 * a linked list. 
 * This is a better way of doing so than the previous example:
 * the nodes are allocated dynamically by the add method,
 * the memory is deallocated when the nodes are removed by 
 * the remove method. 
 * This type of list can be easily passed between functions
 * and is using memory from the heap, not from the stack. 
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
void addFront(char * word, struct node ** head);

//removes a node from the front of the linked list
//pointed to by head and returns the value that was stored
//in that node
// !!! again, this function needs to modify what head points to, 
//     so the head pointer needs to be passed using a 
//     double pointer 
char* removeFront(struct node ** head);
    

int main() {
    struct node * head = 0; //head pointer for the list
    
    //char * w1 = malloc (30 * sizeof(char) ); 
    //strncpy ( w1, "hello", 30);
    //printf("Enter the first string: ");  
    //scanf("%30s", w1); 
    
    
    char * w1 = "hello";
    char * w2 = "cso201";
    char * w3 = "students";
    
    //no need to create nodes, the add function does it 
    addFront ( w1   , &head);
    addFront ( w2, &head);
    addFront ( w3, &head);
    
    //obtain pointer (a second copy) to the front node
    // (why can't we just use the head pointer in the
    // loop below ???)
    struct node * current = head;
    
    //iterate through the list and print values stored in it
    while (current != 0 ) {
        printf ("%s     ", current->word );
        current = current->next;
    }
    printf("\n");
    
    char * w = removeFront(&head);
    
    //iterate through the list and print values stored in it
    printf("List content after removal: \n"); 
    current = head;
    while (current != 0 ) {
        printf ("%s     ", current->word );
        current = current->next;
    }
    printf("\n");
    printf("Removed value: %s\n", w); 
    
    //remove remaining elements of the list
    while (head != 0 ) {
        removeFront(&head);
    }
    
    
    return 0;
}

// !!! note that this function allocates memory, but does not 
//     deallocate it !!!
//     this is NOT a memory leak - we want that memory around,
//     it will be deallocated by the remove function when the 
//     node is no longer needed 
void addFront(char * word, struct node ** head) {
    //
    if (head == NULL )
        return ;
        
    if (word == 0 ) //do not add null values to the list 
        return; 
        
    //allocate memory for storying the node 
    struct node *n =  malloc(sizeof(struct node));
    
    //make sure that the memory was allocated,
    //if not, just quit
    if (n == NULL)
        return;
    //set values of members to the string passed
    //and head of the list 
    n->word = word;
    n->next = (*head);
    //reset head to point to the new first node 
    (*head) = n;
}

// !!! this function has to deallocate memory when it
//     remove a node - otherwise we would have a memory leak 
char* removeFront(struct node ** head) {
    //
    if (head == NULL )
        return NULL;
    if (*head == NULL ) 
        return NULL; 
        
    //get the pointer to the first element
    struct node *n = *head;
    //get the first element 
    char *w = n->word;
    //advance head
    (*head) = n->next;
    //free memory allocated for n
    free(n);
    n = NULL; 
    //return the value stored in the node that was just removed 
    return w;
}
