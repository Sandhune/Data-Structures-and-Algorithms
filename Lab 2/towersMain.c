#include <stdlib.h> 
#include "towers.h" 
#include <stdio.h>
int main(int argc, char **argv) 
{ 
    int n = 3; 
    int from = 1; 
    int dest = 2; 

    if (argc ==2) 
    { 
       if( atoi(argv[1])>0)
    	{
        	n = atoi(argv[1]); 
        }
         else
     	{
        	fprintf(stderr,"Incorrect invocation");
             	exit(1);
       	}
     }
   
    else if (argc == 4)
    {
	int i;
	for (i = 1; i < 4; i++){
	if (atoi(argv[i]) == 0){
		fprintf(stderr,"Incorrect invocation");
             	exit(1);
	}
	}
		n = atoi(argv[1]);
       		from = atoi(argv[2]);
       		dest = atoi(argv[3]);

	if((from>=1 && dest>=1)&&(from <= 3 && dest <= 3)||(from!=dest))
    	{               
        }
      	else
     	{
        	fprintf(stderr,"Incorrect invocation-");
             	exit(1);
       	}

   
} towers(n, from, dest); 
    exit(0); 

}
