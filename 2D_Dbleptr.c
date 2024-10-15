#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int **ptr = NULL;
    uint8_t rows,cols; 
    printf("Enter rows and cols:\n");
    scanf("%hhu %hhu",&rows,&cols);
    
    // Allocate memory for row pointers
    ptr = malloc(rows * sizeof(void *));
    for(int i = 0; i < rows; i++)
    { 
        printf("Double Pointer value allocated for Row Pointer %d: %p\n",i+1,((int **)ptr + i));
    }
    
    for(int i = 0; i < rows; i++)
    { 
        //ptr[i] = malloc(cols * sizeof(int));
        *(ptr + i) = malloc(cols * sizeof(int));
        printf("Double Pointer value allocated for Row Pointer %d on derefence has: %p\n", i+1 , *((int **)ptr + i));
        printf("Address of Col allocated from malloc: %p\n", (void *)ptr[i]);
    }
    
    fflush(stdout); // Flush the output buffer to ensure immediate printing
    
    for(int i = 0; i < rows; i++)
    { 
        printf("Row %d: %p\t", i+1 ,(int *)(ptr + i));
        for(int j = 0; j < cols; j++)
        {
            ptr[i][j] = i * cols + j;
            //printf("Col %d: %p\t", j+1 ,(*(ptr + i) + j));
            printf("Col %d: %p\t", j+1 ,(void *)&ptr[i][j]);
            printf("Data is %d\t",ptr[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0; i<rows; i++)
    {
        free(ptr[i]);
    }
    free(ptr);
    return 0;
}
