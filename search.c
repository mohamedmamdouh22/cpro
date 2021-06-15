void search_emp()
{
        system("cls") ;
        displayCursor(0) ;
        employee *temp = malloc(sizeof(employee)) ;
        char another;
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
                        printf("\n employee with id %d is not found\n",key);
                    }

                    printf("\n enter Y or y to search for new employee to end enter any char \n") ;
                    printf("\nEnter your choice :  ") ;
                    another = getche() ;
                }while(another=='y' || another =='Y');
                removeCursor(0) ;
                system("cls") ;
            }


}
