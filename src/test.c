#include <stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{
    int i;
    for(i=0;i<argc;i++)
	printf("%d\n",atoi(argv[i+1]));
}
