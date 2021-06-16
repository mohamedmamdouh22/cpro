int is_string(char name[50])
{
    for(int i=0;i<strlen(name);i++)
    {
        if(isdigit(name[i])==0)
        {
            return 1;
        }

    }
    return 0;
}
