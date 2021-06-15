void main()
{
    FILE *fptr = fopen("data file.bin","ab+") ;
    int  choice = 1,x;
    char ch ;
    count = emp_count(fptr) ;
    HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
    removeCursor(0);
    while(1)
    {

        draw1() ;
        draw2(2);
        draw2(5);
        draw2(8);
        draw2(11);
        draw2(14);
        draw2(17);
        draw2(20);
        draw2(23);
        draw2(26);
     do
     {
         SetConsoleTextAttribute(h,15);
       gotoxy(42,3);printf(" Please enter the operation you want:   ");
       gotoxy(42,6);printf("           1]Add  employees.            ");
       gotoxy(42,9);printf("           2]Delete employees.          ");
      gotoxy(42,12);printf("           3]Count employees.           ");
      gotoxy(42,15);printf("           4]Search employees.          ");
      gotoxy(42,18);printf("           5]Search and modify.         ");
      gotoxy(42,21);printf("           6]Display employees.         ");
      gotoxy(42,24);printf("           7]Clear Employees' data.     ");
      gotoxy(42,27);printf("           8]Close program.             ");
      printf("\n");
      switch(choice)
      {
      case 1:
        SetConsoleTextAttribute(h,240);
      gotoxy(43,6); printf("          1]Add  employees.            "); break;
      case 2:
          SetConsoleTextAttribute(h,240);
      gotoxy(43,9); printf("          2]Delete employees.          "); break;
      case 3:
        SetConsoleTextAttribute(h,240);
      gotoxy(43,12);printf("          3]Count employees.           "); break;
        case 4:
        SetConsoleTextAttribute(h,240);
      gotoxy(43,15);printf("          4]Search  employees.         "); break;
      case 5:
        SetConsoleTextAttribute(h,240);
      gotoxy(43,18);printf("          5]Search and modify.         "); break;
      case 6:
        SetConsoleTextAttribute(h,240);
      gotoxy(43,21);printf("          6]Display employees.         "); break;
      case 7:
        SetConsoleTextAttribute(h,240);
      gotoxy(43,24);printf("          7]Clear Employees' data.     "); break;
      case 8:
        SetConsoleTextAttribute(h,240);
      gotoxy(43,27);printf("          8]Close program.             "); break;
      }
    ch=getch();
    if(ch==-32){
        ch=getch();
    }
    if(ch==72){
        choice--;
    if(choice==0)
    {
       choice=8;
    }
}
    if(ch==80){
    choice++;
    if(choice==9){
       choice=1;
    }
}
 }while(ch!=13);
 SetConsoleTextAttribute(h,15) ;
        gotoxy(40,20);
        switch(choice)
        {
            case 1 :
                 Enqueue(fptr);
                break;
            case 2 :
                 Dequeue(fptr) ;
                  break ;
            case 3 :
                count_display(fptr);
                ;break ;
            case 4 :
                search_emp() ;
                  break;
            case 5 :
            //     Edit_emp(fptr) ;
                  break ;
            case 6 :
                Display(fptr) ;
                break ;
            case 7 :
                 Reset(fptr) ;
                  break ;
            case 8 :
                    system("cls");
                    exit(0);
                     break ;
        }
    }
        fclose(fptr) ;
}

void removeCursor()
{
   HANDLE cursor = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(cursor, &info);
}

void displayCursor()
{
   HANDLE cursor = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 55;
   info.bVisible = TRUE;
   SetConsoleCursorInfo(cursor, &info);
}

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void draw1(void)
{
      int i;
      gotoxy(41,1); printf("%c",201);
      for (i=0;i<41;i++){
        printf("%c",205);
      }
      printf("%c",187);
      gotoxy(41,2); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,3); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,4); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,5); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,6); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,7); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,8); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,9); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,10); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,11); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,12); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,13); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,14); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,15); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,16); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,17); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,18); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,19); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,20); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,21); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,22); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,23); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,24); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
       gotoxy(41,25); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,26); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,27); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
      gotoxy(41,28); printf("%c",186);
       for (i=0;i<41;i++){
        printf(" ");
      }
      printf("%c",186);
       gotoxy(41,29); printf("%c",200);
      for (i=0;i<41;i++){
        printf("%c",205) ;
      }
      printf("%c",188) ;
}

void draw2(int y) {
    int i;
      gotoxy(42,y); printf("%c",201);
      for (i=0;i<39;i++){
        printf("%c",205);
      }
      printf("%c",187);
      gotoxy(42,++y); printf("%c",186);
       for (i=0;i<39;i++){
        printf(" ");
      }
       gotoxy(42,++y); printf("%c",200);
      for (i=0;i<39;i++){
        printf("%c",205) ;
      }
      printf("%c",188) ;
}
