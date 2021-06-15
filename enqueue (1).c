
void Enqueue(FILE *ptr)
{
    system("cls") ;
    showcursor(0) ;
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
        printf("enter the class of employee A or B or C: ");
        scanf("%c",&temp->degree);
        printf("Enter Employee age : ") ;
        scanf("%d",&temp->age) ;
        printf("Enter Employee salary : ") ;
        scanf("%f",&temp->salary) ;
        employee *holder=front;

        printf("enter employee id :");
        scanf("%d",&id);
        temp->id=id;

        temp->next = NULL ;
        if(front == NULL)
        {
            front = rear = temp;
        }else
        {
              while(holder!= NULL)
        {

            if(id==holder->id)
            {
                flage=1;
                break;
            }
            holder=holder->next;
        }
        do
        {
            printf("******invalid id****** \n please enter another id: ");
            scanf("%d",&id);
            if(id!= temp->id){
                flage=0;
            }
            holder->id=id;

        }while(flage==1);
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
    hidecursor(0) ;
    system("cls") ;
}

