#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

typedef struct data
{
    char name[30] ;
    int id ;
    int age ;
    float salary ;
}emp;

typedef struct queue
{
      emp e ;
      struct queue *next ;
}node ;

node *front=NULL , *back=NULL ;

void Dequeue(FILE *ptr,int *recount)
{
        system("cls") ;
        char another = 'y' ;
        while(another == 'y')
        {
           node *newPtr = (node *)malloc( sizeof(node) ) ;
            rewind(ptr) ;
            if( fread(&newPtr->e,sizeof(newPtr->e),1,ptr) < 1 )
            {
                 printf("\nEmpty queue") ;
                 exit(1) ;
            }
            else
            {
                rewind(ptr) ;
                // Reading data from file and store it in the form of queue implementation ...
                int count = 1 ;
                while( fread(&newPtr->e,sizeof(newPtr->e),1,ptr) >= 1 )
                {
                    newPtr->next = NULL ;
                    if(count == 1)
                    {
                        front = back = newPtr ;
                        count++ ;
                    }
                    else
                    {
                        back->next = newPtr ;
                        back = newPtr ;
                    }
                    newPtr = (node *)malloc( sizeof(node) ) ;
                    fseek(ptr,1,SEEK_CUR) ;
                }
                back->next = NULL ;
            }
            // Algorithm to delete first node in queue ...
            node *temp ;
            temp = front ;
            front = front->next ;
            (*recount)-- ;
            free(temp) ;
             // Reopening file data in write mode to delete last data ...
            fclose(ptr) ;
            ptr = fopen("Employees DataBase.txt","wb+") ;
            freopen("Employees DataBase.txt","ab+",ptr) ;

            newPtr = front ;
            while( newPtr != NULL )
            {
                fwrite(&newPtr->e,sizeof(newPtr->e),1,ptr) ;
                fprintf(ptr,"\n") ;
                newPtr = newPtr->next ;
            }
            printf("\n\t\t\t*****Item Successfully Deleted*****\n") ;
            printf("\nEnter 'y' to delete another employee and enter 'n' to goback to menu : ") ;
            another = getche() ;
        }
        system("cls") ;
}
