
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(void)
{
    FILE *fp;
    size_t count;
    char *str = "1\t1\n2\t2\n3\t3\n";
    int i = 0;
    

    fp = fopen("data/data", "w");
    if(fp == NULL) {
        perror("failed to open file");
        return EXIT_FAILURE;
    }
    /*    count = fwrite(str, 1, strlen(str), fp);   */

    for(i = 0; i < 10;i++)
      {
        fprintf(fp,"%d \t %d \n",i,i);
      }

    printf("Wrote %u bytes. fclose(fp) %s.\n", count, fclose(fp) == 0 ? "succeeded" : "failed");
    return EXIT_SUCCESS;
}
