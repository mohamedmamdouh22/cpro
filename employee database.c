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
void main()
{
    FILE *fptr = fopen("data file.bin","ab+") ;
    int  option = 1;
    char character ;
    count = emp_count(fptr) ;
    HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
    removeCursor(0);
    while(1)
    {

        draw1() ; draw2(2); draw2(5); draw2(8); draw2(11); draw2(14); draw2(17); draw2(20); draw2(23); draw2(26);
     do
     {
         SetConsoleTextAttribute(h,15);
       gotoxy(42,3);printf(" Please enter the operation you want:   ");
       gotoxy(42,6);printf("           1]Add  employees.            ");
       gotoxy(42,9);printf("           2]Delete employees.          ");
      gotoxy(42,12);printf("           3]Count employees.           ");
      gotoxy(42,15);printf("           4]Search employees.          ");
      gotoxy(42,18);printf("           5]Search and modify.         ");
      gotoxy(42,21);printf("           6]Display employees.         ");
      gotoxy(42,24);printf("           7]Clear Employees' data.     ");
      gotoxy(42,27);printf("           8]Close program.             ");
      printf("\n");
      switch(option)
      {
      case 1:
        SetConsoleTextAttribute(h,240);
      gotoxy(43,6); printf("          1]Add  employees.            "); break;
      case 2:
          SetConsoleTextAttribute(h,240);
      gotoxy(43,9); printf("          2]Delete employees.          "); break;
      case 3:
        SetConsoleTextAttribute(h,240);
      gotoxy(43,12);printf("          3]Count employees.           "); break;
        case 4:
        SetConsoleTextAttribute(h,240);
      gotoxy(43,15);printf("          4]Search  employees.         "); break;
      case 5:
        SetConsoleTextAttribute(h,240);
      gotoxy(43,18);printf("          5]Search and modify.         "); break;
      case 6:
        SetConsoleTextAttribute(h,240);
      gotoxy(43,21);printf("          6]Display employees.         "); break;
      case 7:
        SetConsoleTextAttribute(h,240);
      gotoxy(43,24);printf("          7]Clear Employees' data.     "); break;
      case 8:
        SetConsoleTextAttribute(h,240);
      gotoxy(43,27);printf("          8]Close program.             "); break;
      }
    character=getch();
    if(character==-32){
        character=getch();
    }
    if(character==72){
        option--;
    if(option==0)
    {
       option=8;
    }
}
    if(character==80){
    option++;
    if(option==9){
       option=1;
    }
}
 }while(character!=13);
 SetConsoleTextAttribute(h,15) ;

        switch(option)
        {
            case 1 :
                 Enqueue(fptr);
                break;
            case 2 :
                 Dequeue(fptr) ;
                  break ;
            case 3 :
                count_display(fptr);
                ;break ;
            case 4 :
                search_emp() ;
                  break;
            case 5 :
                Edit_emp(fptr) ;
                  break ;
            case 6 :
                Display(fptr) ;
                break ;
            case 7 :
                 Reset(fptr) ;
                  break ;
            case 8 :
                    system("cls");
                    exit(0);
                     break ;
        }
    }
        fclose(fptr) ;
}

void removeCursor()
{
   HANDLE cursor = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 50;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(cursor, &info);
}

void displayCursor()
{
   HANDLE cursor = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 55;
   info.bVisible = TRUE;
   SetConsoleCursorInfo(cursor, &info);
}

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void draw1(void)
{
      int i;
      gotoxy(41,1); printf("%c",201);
      for (i=0;i<41;i++){
        printf("%c",205);
      }
      printf("%c",187);
      gotoxy(41,2); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,3); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,4); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,5); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,6); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,7); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,8); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,9); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,10); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,11); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,12); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,13); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,14); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,15); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,16); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,17); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,18); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,19); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,20); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,21); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,22); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,23); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,24); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
       gotoxy(41,25); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,26); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,27); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,28); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
       gotoxy(41,29); printf("%c",200);
      for (i=0;i<41;i++){
        printf("%c",205) ;
      }
      printf("%c",188) ;
}

void draw2(int y) {
    int i;
      gotoxy(42,y); printf("%c",201);
      for (i=0;i<39;i++){
        printf("%c",205);
      }
      printf("%c",187);
      gotoxy(42,++y);
       for (i=0;i<39;i++){
        printf(" ");
      }
       gotoxy(42,++y); printf("%c",200);
      for (i=0;i<39;i++){
        printf("%c",205) ;
      }
      printf("%c",188) ;
}

 int is_string(char name[50])
{

    for (int i = 0; i < strlen(name); ++i)
    {
        if (!(isalpha(name[i])) && (name[i] != '\n') && (name[i] != ' '))
        {
            return 0;

        }
    }
    return 1;
}

void Enqueue(FILE *ptr)
{
    system("cls") ;
    displayCursor(0) ;
    char again;
    employee *temp ;
    printf("please enter all data\n");
    int id,check=0;

    do
    {
        temp =malloc(sizeof(employee)) ;
        //get info
        do{
        printf("\nEnter Employee first and last names : ") ;
        fflush(stdin);
        gets(temp->name) ;
        fflush(stdin) ;

        }while(!is_string(temp->name));
        do{
        printf("enter the class of employee A or B or C: ");
        fflush(stdin);
        scanf("%c",&temp->degree);
        }while(temp->degree !='A' && temp->degree !='B' && temp->degree !='C');
        do{
        fflush(stdin);
        printf("Enter Employee age : ") ;
        scanf("%d",&temp->age) ;

        }while(!isspace(temp->age) && getchar()!='\n' || temp->age<0);
        do{
            fflush(stdin);
        printf("Enter Employee salary : ") ;
        scanf("%f",&temp->salary) ;
        }while(!isspace(temp->salary) && getchar()!='\n' || temp->salary<0);
        do{
            fflush(stdin);
            printf("enter employee id :");
            scanf("%d",&id);
        }while(!isspace(temp->id) && getchar()!='\n' ||  id<0);

        temp->next = NULL ;
        if(front == NULL)
        {
            temp->id=id;
            front = rear = temp;
        }
        else
        {
            employee *holder=front;
            // check the id
              while(holder!= NULL)
                {

                    if(id==holder->id)
                    {
                        check=1;
                        break;
                    }
                    holder=holder->next;
                }
        while(check==1)
            {
                printf("\n\n repeted id \n\n please enter another id: ");
                scanf("%d",&id);
                holder=front;
                 while(holder!= NULL)
                {

                    if(id==holder->id)
                    {
                        //still make check equal to 1 to repet
                        check=1;
                        break;
                    }
                    else{
                            //change its value to end the loop
                        check=2;
                    }
                    holder=holder->next;
                }

        }
            temp->id=id;
            rear->next = temp ;
            rear = temp ;

        }

        fwrite(temp,sizeof(employee),1,ptr) ;
        fprintf(ptr,"\n") ;
        count++ ;

        printf("\n*******employee added successfully********\n");
        printf("\n*******to add new employee enter Y or y if not type any character********\n");
        printf("Enter your choice :  ") ;
        again = getche() ;
        system("cls");
    }while(again=='y' || again =='Y');
    removeCursor(0) ;
    system("cls") ;

}
int emp_count(FILE *ptr)
{

        employee *temp  ;
        int total_count=0 ;
        temp = malloc(sizeof(employee)) ;
        rewind(ptr) ;
        while( fread(temp,sizeof(employee),1,ptr) >= 1 )
        {
             total_count++ ;
             fseek(ptr,1,SEEK_CUR) ;

        }

        return total_count ;
}
void count_display(FILE *fptr)
{
        system("cls") ;

        displayCursor(0) ;
        if(emp_count(fptr)==0)
        {
            printf("\n************* The file is empty************\n");
            system("pause");
        }
        else{
        printf("\n******numbers of employees in file  is %d **********\n",emp_count(fptr));
         system("pause");
        }
        removeCursor(0) ;
        system("cls");
}

void Dequeue(FILE *ptr)
{
        system("cls") ;
        displayCursor(0) ;
        char again ;
            employee *holder = malloc( sizeof(employee) ) ;
            rewind(ptr) ;
            //in case no data in the file
            if( fread(holder,sizeof(employee),1,ptr) < 1 )
            {
                 printf("\n\n file is empty...\n\n") ;
                 system("pause") ;
                 removeCursor(0) ;
                 system("cls") ;
            }

            //there is a data in file

            else
            {
                do
                {
                        if(emp_count(ptr)==0)
                        {
                            printf("\n\n file is empty\n\n");
                            system("pause") ;
                            removeCursor(0) ;
                            system("cls") ;
                            break;
                        }
                        rewind(ptr);
                        // Reading data from file and store it in the memory
                        front=rear =NULL;
                        while( fread(holder,sizeof(employee),1,ptr) >= 1 )
                        {

                            if(front == NULL)
                            {
                                front = rear = holder ;
                                holder->next = NULL ;
                                count++ ;
                            }
                            else
                            {
                                rear->next = holder ;
                                rear = holder;
                                holder->next = NULL ;
                                count++;
                            }
                            holder = malloc( sizeof(employee) ) ;
                            fseek(ptr,1,SEEK_CUR) ;
                        }
                        rear->next = NULL ;

                    // Delete first node ...

                        employee *temp ;
                        temp = front ;
                        front = front->next ;
                        count--;
                        free(temp) ;
                         // copy the stored data in memory to file again
                        fclose(ptr) ;
                        //clear the file
                        ptr = fopen("data file.bin","wb+") ;
                        //return it to append binary mode
                        freopen("data file.bin","ab+",ptr) ;

                       temp = front ;

                        while( temp != NULL )
                        {
                            fwrite(temp,sizeof(employee),1,ptr) ;
                            fprintf(ptr,"\n") ;
                            temp = temp->next ;
                        }
                        printf("\n*****Employee Deleted*****\n") ;

                        printf("\n to delete new employee enter Y or y if not type any character********\n") ;
                        printf("Enter your choice :  ") ;
                        again = getche() ;
                }while(again == 'y'|| again =='Y');

                removeCursor(0) ;
                system("cls") ;
            }
}

void Edit_emp(FILE *ptr)
{
     system("cls") ;
     displayCursor(0) ;
     char again;
     char value;
     int key;
      int newId,x;
     //if queue is empty
        if(front==NULL)
        {
            printf("\n\n queue is empty\n\n") ;
            system("pause") ;
            removeCursor(0) ;
            system("cls") ;
        }
        else
        {
            do {
                    system("cls");
                    //get id to modify
                    printf("\n Enter Employee id you want to modify :  ") ;
                    scanf("%d",&key);
                    employee *temp=front;
                    int flage=1; //check the id
                    while(temp!= NULL)
                    {
                        if(key==temp->id)
                        {
                            flage=2;
                            break;
                        }
                        temp=temp->next;
                    }
            // if id is not exist
                    if(flage==1)
                    {
                        printf("employee with id %d not found \n",key);

                    }
                    // if id is exist
                    else{
                    do{
                            system("cls");
                            int choice;
                        printf("\n\n enter what you want to modify: \n 1-id \n 2-name \n 3-salary \n 4-age \n 5-class \n enter your choice:");
                        fflush(stdin);
                        scanf("%d",&choice);
                        fflush(stdin);
                        // modify the cho
                        switch(choice)
                        {
                        case 1:
                                    do{
                                        fflush(stdin);
                                        printf("enter employee id :");
                                        scanf("%d",&newId);
                                    }while(!isspace(newId) && getchar()!='\n' ||  newId<0);
                                        employee *holder=front;
                                        // check the id
                                          while(holder!= NULL)
                                            {

                                                if(newId==holder->id)
                                                {
                                                    x=1;
                                                    break;
                                                }
                                                holder=holder->next;
                                            }
                                    while(x==1)
                                        {
                                            printf("\n\n repeted id \n\n please enter another id: ");
                                            scanf("%d",&newId);
                                            holder=front;
                                             while(holder!= NULL)
                                            {

                                                if(newId==holder->id)
                                                {
                                                    x=1;
                                                    break;
                                                }
                                                else{
                                                    x=5;
                                                }
                                                holder=holder->next;
                                            }

                                    }
                                    temp->id=newId;
                                    break;
                            case 2:
                                    do{
                                        printf("\nEnter Employee first and last names : ") ;
                                        fflush(stdin);
                                        gets(temp->name) ;
                                        fflush(stdin) ;

                                        }while(!is_string(temp->name));
                            break;
                        case 3:
                                      do{
                                                fflush(stdin);
                                            printf("Enter Employee salary : ") ;
                                            scanf("%f",&temp->salary) ;
                                            }while(!isspace(temp->salary) && getchar()!='\n' || temp->salary<0);
                            break;
                        case 4:
                                    do{
                                        fflush(stdin);
                                        printf("Enter Employee age : ") ;
                                        scanf("%d",&temp->age) ;

                                    }while(!isspace(temp->age) && getchar()!='\n' || temp->age<0);
                            break;
                        case 5:
                            do{
                            printf("\n\n enter new class: ");
                            fflush(stdin);
                            scanf("%c",&temp->degree);
                            }while(temp->degree != 'A' && temp->degree != 'B' && temp->degree != 'C');
                            break;
                        default:
                            printf("\n\n invalid choice");
                            break;

                        }
                  printf("\n\n to  modify another value enter Y or y if not type any character********\n") ;
                        printf("Enter your choice :  ") ;
                        value = getche() ;
                }while(value == 'y'|| value =='Y');
                    // modifying data in file ...

                    fclose(ptr) ;
                    ptr = fopen("data file.bin","wb+") ;
                    freopen("data file.bin","ab+",ptr) ;

                    employee *xptr = front ;
                    while( xptr != NULL )
                    {
                        fwrite(xptr,sizeof(employee),1,ptr) ;
                        fprintf(ptr,"\n") ;
                        xptr= xptr->next ;
                    }
                    system("cls");
                    }




                 printf("\n\n to search and modify new employee enter Y or y if not type any character********\n") ;
                        printf("Enter your choice :  ") ;
                        again = getche() ;
                }while(again == 'y'|| again =='Y');
                removeCursor(0) ;
                system("cls") ;
        }
}
void Display(FILE *ptr)
{
    system("cls") ;
    displayCursor(0) ;
    employee *temp;

        if( front == NULL )
        {
            printf("\n\n**** queue is empty******\n\n") ;
            removeCursor(0) ;
        }

        else
        {

            temp = front ;
            int index=1;
            printf("\n========================="
           "==========================="
           "=========================");
    printf("\n EMPLOYE NUMBER\t\t    NAME\t     ID\t   AGE\t    DEGREE\tSALARY\t"
           "\n"
           ,index,temp->name,temp->id,temp->age,temp->degree,
           temp->salary);
    printf("==========================="
           "==========================="
           "=======================\n");
            while( temp != NULL )
            {
                printf("\n\t[%d]\t\t%s\t     %d\t     %d\t     %c\t    %.2f\t\n",index,temp->name, temp->id, temp->age,temp->degree,
           temp->salary);


                temp = temp->next ;
                index++;
            }
        }
        puts("");
    system("pause") ;
    removeCursor(0) ;
    system("cls") ;
}

void search_emp()
{
        system("cls") ;
        displayCursor(0) ;
        employee *temp = malloc(sizeof(employee)) ;
        char again;
        temp=front;

            // search in memory
            if(front == NULL)
            {
                printf("\n\n queue is empty\n\n") ;
                system("pause") ;
                removeCursor(0) ;
                system("cls") ;
            }
            else
            {

                do
                {
                   int key;
                    printf("\n Enter Employee id to search :  ") ;
                    scanf("%d",&key);
                    int flage=0;
                    while(temp!=NULL)
                    {

                        if( key==temp->id)
                        {
                            printf("data of employee you search for is:\n");
                            printf("\t Name : %s\n", temp->name) ;
                            printf("\t Age : %d\n", temp->age) ;
                            printf("\t Id : %d\n", temp->id) ;
                            printf("\t Salary : %.1f\n",temp->salary) ;
                            flage=1;
                            break ;
                        }

                        temp=temp->next;
                    }
                    if(flage==0)
                    {
                        printf("/n employee with id %d is not found\n",key);
                    }

                    printf("\n enter Y or y to search for new employee to end enter any char \n") ;
                    printf("\nEnter your choice :  ") ;
                    again = getche() ;
                }while(again=='y' || again =='Y');
                removeCursor(0) ;
                system("cls") ;
            }


}

void Reset(FILE *ptr)
{
    system("cls") ;
    displayCursor(0) ;
    // Free the queue.
    employee *temp=front ;
    while( temp != NULL )
    {
        free(temp);
        temp=temp->next;

    }
    // Free the file  ...
    fclose(ptr) ;
    ptr = fopen("data file.bin","wb+") ;
    freopen("data file.bin","ab+",ptr) ;
    front=NULL;
    printf("\n****All data is deleted *****\n") ;
    system("pause");
    removeCursor(0) ;
    system("cls");
}
