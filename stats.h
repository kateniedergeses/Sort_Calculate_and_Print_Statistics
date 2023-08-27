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
 * @file stats.h
 * @brief headerfile for statistics program
 *
 * Program to sort, print, and calculate statistics of an array of data in C.
 * 
 *
 * @author Katie Niedergeses
 * @date August 23, 2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief prints statistics of an array
 *
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param unsigned char *pArray - a pointer to an array of unsigned char
 * @param unsigned int size    - size of the array
 * @return void
 *
*/
void print_statistics(unsigned char pArray[], unsigned int size);
 
/**
 * @brief print array
 * Given an array of data and a length, prints the array to the screen
 * @param unsigned char[] array - array holding an integer of numbers
 * @return void
 */
 void print_array(unsigned char array[], int length);

/**
 * @brief compare 2 values
 *  function to compare one variable to other to help qsort, return 1, -1, or 0
 * @param const void *x_void
 * @param const void *y_void
 * @return int
 */
int compare(const void *x_void, const void *y_void);


/**
 * @brief return median value
 *
 * Given an array of data and a length, returns the median value
 *
 * @param int[] array -- array of data
 * @param int length -- length of array
 *
 * @return int median 
 */
unsigned char find_median(unsigned char pArray[], unsigned int length);

/**
 * @brief returns mean
 *
 * Given an array of data and a length, returns the mean
 *
 * @param int[] array --array of data
 * @param int length --length of array
 *
 * @return int mean
 */
unsigned char find_mean(unsigned char array[], unsigned int length);

 
/**
 * @brief return maximum
 *
 * Given an array of data and a length, returns the maximum value in the array
 *
 * @param int[] array --array of data
 * @param int length --length of array
 *
 * @return int maximum
 */
unsigned char find_maximum(unsigned char pArray[], unsigned int length);

/**
 * @brief find minimum value
 *
 *  Given an array of data and a length, returns the minimum
 *
 * @param int[] array --array of data
 * @param int length --length of array
 *
 * @return return minimum
 */
unsigned char find_minimum(unsigned char pArray[], unsigned int length);

/**
 * @brief sort array
 *
 *   Given an array of data and a length, sorts the array from largest to smallest.  
 *   (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * @param unsigned char pArray --pointer to array of unsigned char data
 * @param int length --length of array
 *
 * @return return minimum
 */
void sort_array(unsigned char pArray[], int length);

#endif /* __STATS_H__ */