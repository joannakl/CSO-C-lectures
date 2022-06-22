#include <stdio.h>
#include <string.h>   
/*
 * This program illustrates pointers to structures
 * and use of the arrow operator.  
 * 
 * Author: Joanna Klukowska 
 * 
 */ 
 
//structure that represents a student
typedef struct  {
    char name [30];
    int credits;
    float gpa;
} student; 

int main () {
    //s1 is a struct 
    student s1 = {"Mark", 24, 3.93};
    //s2 is a pointer to a struct 
    student * s2  = &s1; 
 
    printf("%s has %i credits and GPA of %.2f\n",
        s1.name, s1.credits, s1.gpa);
    
    //to access members of a struct using
    //a pointer we need the arrow, ->, operator 
    printf("%s has %i credits and GPA of %.2f\n",
        s2->name, s2->credits, s2->gpa);
        
    s2->credits = s2->credits + 16; 
    s2->gpa = 3.85;
    
    printf("%s has %i credits and GPA of %.2f\n",
        s2->name, s2->credits, s2->gpa);
    printf("%s has %i credits and GPA of %.2f\n",
        s1.name, s1.credits, s1.gpa);
    
    return 0;
}
