#include <stdio.h>

static void leaky(void)
{
    FILE *fp = fopen("/etc/passwd", "r");
    char buffer[2048];
    while (fgets(buffer, sizeof(buffer), fp) != 0)
        fputs(buffer, stdout);
    /* fclose(fp); */
}

int main(void)
{
    leaky();
    return 0;
}