#include <stdio.h>
#include <string.h>   //  <=== needed for string operations 

/*
 * This program illustrates a simple definition and use 
 * of a structure. 
 * 
 * Author: Joanna Klukowska 
 * 
 */ 
 
//structure that represents a student  
struct student {
    char name [30];
    int credits;
    float gpa;
} ;  //  <==== notice the semicolon 



int main () {
    //create a structure and initialize its members
    struct student s1 = {"Mark", 24, 3.93};
    
    //declare a structure
    struct student s2;
    
    //this initialization does not work 
    //s2 = {"Joanna", 120, 3.7};
    
    //initialize individual members 
    strncpy(s2.name, "Joanna", 30);
    s2.credits = 120;
    s2.gpa = 3.7;
    
    
    //print the content of both structures using 
    //the dot operator 
    printf("%s has %i credits and GPA of %.2f\n",
        s1.name, s1.credits, s1.gpa);
    
    printf("%s has %i credits and GPA of %.2f\n",
        s2.name, s2.credits, s2.gpa);
    
    return 0;
}
