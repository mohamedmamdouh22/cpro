void Reset(FILE *ptr)
{
    system("cls") ;
    showcursor(0) ;
    // Free the queue.
    employee *temp=front ;
    while( temp != NULL )
    {
        free(temp);
        temp=temp->next;

    }
    // Free the file  ...
    fclose(ptr) ;
    ptr = fopen("Employees DataBase.txt","wb+") ;
    freopen("Employees DataBase.txt","ab+",ptr) ;

    printf("\n****All data is cleared *****\n") ;
    system("pause");
    hidecursor(0) ;
    system("cls");
}


