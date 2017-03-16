#include "stdio.h"

int main()
{
    int bmas[5], i, j, tmp;
    printf("Input number: ");
    for(i = 0; i < 5; i++){
        scanf("%d", &bmas[i]);
    }
    printf("\n");


    i = 0;
    while(i < 5){
        j = 0;
	while(j < (5 - i)){
	    if(bmas[j] > bmas[j + 1]){
                tmp = bmas[j];
                bmas[j] = bmas[j + 1];
                bmas[j + 1] = tmp;
            }j++;
	}i++;
    }

    for(i = 0; i < 5; i++){
        printf("%d", bmas[i]);
    }
    
    return 0; 
}
