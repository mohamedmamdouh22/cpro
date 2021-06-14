
void Enqueue(FILE *ptr)
{
    system("cls") ;
    showcursor(0) ;
    char another;
    employee *temp ;
    printf("please enter all data\n");
    printf("------------------------------------------------------") ;
    do
    {
        temp =malloc(sizeof(employee)) ;
        //get info
        printf("\nEnter Employee Name : ") ;
        fflush(stdin) ;
        gets(temp->name) ;
        fflush(stdin) ;
        printf("Enter Employee id : ") ;
        scanf("%d",&temp->id) ;
        printf("Enter Employee age : ") ;
        scanf("%d",&temp->age) ;
        printf("Enter Employee salary : ") ;
        scanf("%f",&temp->salary) ;

        temp->next = NULL ;
        if(front == NULL)
        {
            front = rear = temp;
        }else
        {
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
