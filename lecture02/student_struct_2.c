#include <stdio.h>
#include <string.h>   //  <=== needed for string operations 

/*
 * This program illustrates a simple definition and use 
 * of a structure that is typedef'ed to a simpler name . 
 * 
 * Author: Joanna Klukowska 
 * 
 */ 
 
//structure that represents a student
//using typedef, we can use "student" instead of
//"struct student"   
typedef struct  {
    char name [30];
    int credits;
    float gpa;
} student;  

int main () {
    //with the typedef we can just use the "student" as 
    //the type name, not "struct student"
    student s1 = {"Mark", 24, 3.93};
    
 
    printf("%s has %i credits and GPA of %.2f\n",
        s1.name, s1.credits, s1.gpa);
    
    return 0;
}
