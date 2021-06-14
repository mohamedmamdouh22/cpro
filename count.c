int emp_count(FILE *ptr)
{

        employee *temp  ;
        int total_count=0 ;
        temp = malloc(sizeof(employee)) ;
        rewind(ptr) ;
        while( fread(temp,sizeof(employee),1,ptr) == 1 )
        {
             total_count++ ;
             fseek(ptr,1,SEEK_CUR) ;

        }

        return total_count ;
}
void count_display(FILE *fptr)
{
        system("cls") ;
        showcursor(0) ;
        if(emp_count(fptr)==0)
        {
            printf("\n************* The file is empty************\n");
        }
        else{
        printf("\n******numbers of employees in file  is %d **********\n",emp_count(fptr));
         system("pause");
        }
        hidecursor(0) ;
        system("cls");
}

