/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief print statistics
 *
 *Program to print statistics to commandline using a variety of c-programming operators  
 *    and features.
 *
 * @author Katie Niedergeses
 * @date August 23, 2023
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char * pArray;
  pArray = test;
  unsigned int size = SIZE;
  unsigned char result;
  
  printf("\nPrint unsorted array:\n");
  print_array(pArray, size);
  printf("Sort and print array:\n");
  sort_array(pArray, size);
  print_array(pArray, size);
  print_statistics(pArray, size);
  
}

  /* Statistics and Printing Functions Go Here */
  void print_statistics(unsigned char pArray[], unsigned int size){
        printf("Printing Statistics:\n");
	printf("Mimimum of given array: %d\n", find_minimum(pArray, size));
        printf("Maximum of given array: %d\n", find_maximum(pArray, size));
        printf("Mean of given array: %d\n", find_mean(pArray, size));
        printf("Median of given array: %d\n", find_median(pArray, size));	
  }

  void print_array(unsigned char pArray[], int length){
     int nextline = 0;
     for(int i = 0; i < length -1; i++){
	printf("%5d, ", pArray[i]);
        nextline++;
        if(nextline % 8 == 0)
           printf("\n");
	}
     printf("%5d\n", pArray[length-1]);
  }
  

/* Add other Implementation File Code Here */
unsigned char find_median(unsigned char pArray[], unsigned int length){
  
  if(length % 2 == 1){
   return pArray[length / 2];
  }

  if(length % 2 == 0){
    return (pArray[length / 2] + pArray[(length / 2)+1]) / 2;
  }
}


unsigned char find_mean(unsigned char array[], unsigned int length){
  int sum =0;
  for(int i=0; i < length; i++){
	sum = sum + array[i];
  }
  return sum/length;
}

unsigned char find_maximum(unsigned char pArray[], unsigned int length){
   unsigned char maximum = pArray[0];
   for(int i = 0; i < length; i++){
       if(maximum < pArray[i])
          maximum = pArray[i];
      }
   return maximum;
}

unsigned char find_minimum(unsigned char pArray[], unsigned int length){
   unsigned char minimum = 99;
   for(int i = 0; i < length; i++){
       if(minimum > pArray[i])
          minimum = pArray[i];
      }
   return minimum;
}


void sort_array(unsigned char array[], int length){
  qsort(array, length, sizeof(char), compare);
}

  int compare(const void *x_void, const void *y_void){
       int x = *(unsigned char *)x_void;
       int y = *(unsigned char *)y_void;
       return y-x;
}