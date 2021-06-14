void Dequeue(FILE *ptr)
{
        system("cls") ;
        showcursor(0) ;
        char another ;
            employee *holder = malloc( sizeof(employee) ) ;
            rewind(ptr) ;
            //in case no data in the file
            if( fread(holder,sizeof(employee),1,ptr) < 1 )
            {
                 printf("\n\n file is empty...\n\n") ;
                 system("pause") ;
                 hidecursor(0) ;
                 system("cls") ;
            }



            else
            {
                do
                {
                        rewind(ptr) ;
                        // Reading data from file and sotre it in the memory
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

                    // Delete from here ...

                        employee *temp ;
                        temp = front ;
                        front = front->next ;
                        count-- ;
                        free(temp) ;
                         // copy the stored data in memory to file again
                        fclose(ptr) ;
                        //clear the file
                        ptr = fopen("Employees DataBase.txt","wb+") ;
                        //return it to append binary mode
                        freopen("Employees DataBase.txt","ab+",ptr) ;

                       temp = front ;

                        while( temp != NULL )
                        {
                            fwrite(temp,sizeof(employee),1,ptr) ;
                            fprintf(ptr,"\n") ;
                            temp = temp->next ;
                        }
                        printf("\n*****Employee is Successfully Deleted*****\n") ;

                        printf("\n to add new employee enter Y or y if not type any character********\n") ;
                        printf("Enter your choice :  ") ;
                        another = getche() ;
                }while(another == 'y'|| another =='Y');

                hidecursor(0) ;
                system("cls") ;
            }
}
