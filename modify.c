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

                            printf("\n\n enter new id : ");
                            fflush(stdin);
                            scanf("%d",&newId);
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
                                            printf("******invalid id****** \n please enter again id: ");
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
                            printf("\n\n enter new name: ");
                            fflush(stdin);
                            gets(temp->name);
                            break;
                        case 3:
                            printf("\n\n enter new salary: ");
                            fflush(stdin);
                            scanf("%f",&temp->salary);
                            break;
                        case 4:
                            printf("\n\n enter new age: ");
                            fflush(stdin);
                            scanf("%d",&temp->age);
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
