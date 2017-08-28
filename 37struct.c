#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Creating a struct within a struct - a circle defined by its centre and radius
struct circle {
      struct {
             double x;
             double y;
      };
      double r;
}; 
//----------------- Employee identification structs
//Another struct for dates
struct date {
        int year;
        int month;
        int day;
};
//A struct for basic information about an employee
struct employee {
        char* name; 
        int id;
        double salary;
        struct date work_start;
};
//----------------- Employee identification structs

int main(void)
{
       //Defining a circle
       //Defining the centre of the first circle
       struct circle small_one = {3,5,0.003};
       //Defining another circle elementwise
       struct circle big_one;
       big_one.x = 45;
       big_one.y = 23;
       big_one.r = 0.004;
       //Creating an entry for an employee
       struct employee dilbert;
       strcpy(dilbert.name, "Dilbert");
       dilbert.id = 701;
       dilbert.salary = 0.02; //Oh the irony
       dilbert.work_start.year = 1988;
       dilbert.work_start.month = 3;
       dilbert.work_start.day = 14;
       return 0;
}
