
//importing headers files for internal functionalities
#include <stdio.h> //standard input and output header file link
#include <stdlib.h>  //standard library  for generic C operation

struct student    //creating a data structure for holding student  data
{
    char name[32]; //name var declaration STRING
    int scores[3]; //score var decleration ARRAY
};

void print_student(const struct student *s) //Null function to print out student information
{
    printf("Name: %s\n", s->name); //print out information in the struct for the name 
    printf("Scores: %d %d %d\n",   //looping through array and  setting args to print out contents in each array item block in the index form notation
        s->scores[0], //print info in the first INDEX
        s->scores[1], //print info in the  second INDEX
        s->scores[2]); //print info in the third INDEX
};

//main program function
//================================================
int main(void) {      //funciton does not  expect any internal param or args
    struct student *s = malloc(sizeof *s); //allocating a memory location and basing the size of the alocation based on the size of the student struct object

    if(s==NULL) {  //making sure that if student struct  pointer is empty its not used and throws an ERRROR code 1
        return 1;
    }


snprintf(s->name, sizeof s->name, "%s", "Kwame"); //print name

//setting the values for each array item

s->scores[0] = 80;
s->scores[1] = 75;
s->scores[2] = 90;

print_student(s); 

free(s);

s = NULL;

return 0;

}