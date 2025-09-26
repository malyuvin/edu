#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
//#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <malloc.h>

void mx_del_strarr(char** arr) {
    /*if (arr == NULL || *arr == NULL) {
        return;
    }*/
    
    for (int i = 0; arr[i] != NULL; i++) {
        printf("%s\n", arr[i]);
        free((char*)arr[i]);
        //free(*str);
        arr[i] = NULL;
        
    }

    free(arr); // Освобождаем массив указателей
    arr = NULL;// Устанавливаем переданный указатель в NULL
}

int main(){
	
//	double* double_ptr = NULL;
//	int* int_ptr = NULL;
//	char** ptr = NULL;
//	ptr = (char**)malloc(10 * sizeof(ptr)); 
	
	int **ptr = (int**)malloc(10*sizeof(int));
	
	for(int i = 0;i < 10;++i){	
		ptr[i] = (int*)malloc(10*sizeof(int));		
	}
	
	for(int i = 0;i < 10;++i){	
		free(ptr[i]);
		ptr[i] = NULL;		
	}
	free(ptr);
		
	
	

	
//	int** ptr;	
//	ptr = new int*[10];	
//	for(int i = 0;i < 10; ++i){
//		ptr[i] = new int[10];
//	}
	
	
	
//	printf("%d\n", sizeof(double_ptr));
//	printf("%d\n", sizeof(int_ptr));
//	printf("%d\n", sizeof(ptr));
	
	
	
	
}