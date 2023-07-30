#include<stdio.h>

int     check(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return(i);
}

int     count_char(char *str, char *chr)
{
    int i = 0;
    int cpt = 0;

    while(str[i])
    {
        if(str[i] == chr[0])
        {
            cpt++;
        }
        i++;
    }
    return(cpt);
}
int     main(int argc, char **argv)
{
    if(argc != 3)
    {
        printf("\n");
        return(0);
    }
    int chck = check(argv[2]);
    if(chck != 1)
    {
        printf("Error, put a char not a string");
        return(0);
    }

    printf("%d time in the string", count_char(argv[1], argv[2]));
}