#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>

typedef struct data
{
    char name[30] ;
    int id ;
    int age ;
    char degree;
    float salary ;
    struct data *next;
}employee;



employee *front=NULL , *rear=NULL ;

void draw1(void) ;
void draw2(int y) ;


void removeCursor() ;
void displayCursor() ;
void gotoxy(int x,int y) ;
int  emp_count(FILE *ptr) ;
void Enqueue(FILE *ptr) ;
void Dequeue(FILE *ptr) ;
void Edit_emp(FILE *ptr) ;
void Display(FILE *ptr) ;
void search_emp() ;
void Reset(FILE *ptr) ;
void count_display(FILE *ptr);
int is_string(char name[50]);

int count =0;
