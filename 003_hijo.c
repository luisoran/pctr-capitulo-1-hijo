#include <stdio.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
    //sleep(30);
    printf("proceso hijo con pid %ld con %s hermanos\n", (long)getpid(), argv[1]);

    return 0;
}
