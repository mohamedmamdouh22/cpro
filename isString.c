 int is_string(char name[50])
{

    for (int i = 0; i < strlen(name); ++i)
    {
        if (!(isalpha(name[i])) && (name[i] != '\n') && (name[i] != ' '))
        {
            return 0;

        }
    }
    return 1;
}
