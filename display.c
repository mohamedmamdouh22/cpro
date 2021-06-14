void Display(FILE *ptr)
{
    system("cls") ;
    showcursor(0) ;
    employee *temp;

        if( front == NULL )
        {
            printf("\n\n queue is empty\n\n") ;
            hidecursor(0) ;
        }

        else
        {

            temp = front ;
            int index=1;
            while( temp != NULL )
            {
                printf("employee number [%d] \n",index);
                printf("his name is %s\n",temp->name);
                printf("his id is %d\n",temp->id);
                printf("his age is %d\n",temp->age);
                printf("his name is %f\n",temp->salary);
                temp = temp->next ;
                index++;
            }
        }
    system("pause") ;
    hidecursor(0) ;
    system("cls") ;
}
