#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main(int argc, char *argv[])
{

    char str0[1000];
    char str1[] = "sed -n '/";
    char str2[] = "/,/";
    char str3[] = "/p' ";
    char str4[] = " > ";

    if (argc != 5)
    {
        fprintf (stderr, "Usage %s <LogFile> <token1> <token2> <DumpFile>\n",
                argv[0]);
        exit(EXIT_FAILURE);
    }

    sprintf(str0, "%s%s%s%s%s%s%s%s", str1, argv[2], str2, argv[3],
            str3, argv[1],str4, argv[4]);

    system(str0);

    //debug line
    //printf("%s\n",str0);

    return 0;
}

