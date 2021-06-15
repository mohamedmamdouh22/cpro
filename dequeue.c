void Dequeue(FILE *ptr)
{
        system("cls") ;
        displayCursor(0) ;
        char another ;
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
                        rewind(ptr) ;
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
                        count-- ;
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
                        another = getche() ;
                }while(another == 'y'|| another =='Y');

                removeCursor(0) ;
                system("cls") ;
            }
}
