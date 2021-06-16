
void Reset(FILE *ptr)
{
    system("cls") ;
    displayCursor(0) ;
    // Free the queue.
    employee *temp=front ;
    while( temp != NULL )
    {
        free(temp);
        temp=temp->next;

    }
    // Free the file  ...
    fclose(ptr) ;
    ptr = fopen("data file.bin","wb+") ;
    freopen("data file.bin","ab+",ptr) ;
    front=NULL;
    printf("\n****All data is deleted *****\n") ;
    system("pause");
    removeCursor(0) ;
    system("cls");
}
