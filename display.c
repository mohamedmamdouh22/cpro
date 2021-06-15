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
    printf("\n EMPLOYE NUMBER\t\t NAME\t  ID\tAGE\tDEGREE\t\tSALARY\t"
           "\n"
           ,index,temp->name,temp->id,temp->age,temp->degree,
           temp->salary);
    printf("==========================="
           "==========================="
           "=======================\n");
            while( temp != NULL )
            {
                printf("\n\t[%d]\t\t%s\t   %d\t  %d\t  %c\t\t%.2f\t\n",index,temp->name, temp->id, temp->age,temp->degree,
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
