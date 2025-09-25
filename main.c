#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sec;
    
    printf("input the second >>> ");
    scanf("%d", &sec);
    
    printf("The time for %d second is %d : %d : %d\n", sec,
    sec/3600, (sec%3600)/60, (sec%3600)%60);
    
    printf("\n--------------------\n");
    
    system("PAUSE");	
    return 0;
}
