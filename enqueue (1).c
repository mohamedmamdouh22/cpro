
void Enqueue(FILE *ptr)
{
    system("cls") ;
    displayCursor(0) ;
    char another;
    employee *temp ;
    printf("please enter all data\n");
    int id,flage=0;

    do
    {
        temp =malloc(sizeof(employee)) ;
        //get info
        printf("\nEnter Employee Name : ") ;
        fflush(stdin);
        gets(temp->name) ;
        fflush(stdin) ;
        do{
        printf("enter the class of employee A or B or C: ");
        fflush(stdin);
        scanf("%c",&temp->degree);
        }while(temp->degree!='A'  && temp->degree != 'B' && temp->degree != 'C');
        printf("Enter Employee age : ") ;

        scanf("%d",&temp->age) ;
        printf("Enter Employee salary : ") ;
        scanf("%f",&temp->salary) ;


        printf("enter employee id :");
        scanf("%d",&id);


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
                        flage=1;
                        break;
                    }
                    holder=holder->next;
                }
        while(flage==1)
            {
                printf("******invalid id****** \n please enter another id: ");
                scanf("%d",&id);
                holder=front;
                 while(holder!= NULL)
                {

                    if(id==holder->id)
                    {
                        flage=1;
                        break;
                    }
                    else{
                        flage=5;
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

        printf("*******employee added successfully********\n");
        printf("*******to add new employee enter Y or y if not type any character********\n");
        printf("Enter your choice :  ") ;
        another = getche() ;
    }while(another=='y' || another =='Y');
    removeCursor(0) ;
    system("cls") ;

}
