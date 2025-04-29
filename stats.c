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
 * @brief Calculates the statistics of a dataset and prints the dataset's
 *        content and statistics to the console.
 *
 * This application takes a dataset of unsigned char elements and performs
 * statistical analytics (median, mean, minimum, and maximum) on this dataset.
 * The dataset and its analytics can also be printed to the console.
 * 
 *
 * @author Maya F. Dunlap
 * @date 29 April 2025
 *
 */


#include <stdio.h>
#include "stats.h"

void print_statistics( unsigned char* array_ptr, unsigned int size );
void print_array( unsigned char* array_ptr, unsigned int size );
unsigned char find_median( unsigned char* array_ptr, unsigned int size );
unsigned char find_mean( unsigned char* array_ptr, unsigned int size );
unsigned char find_maximum( unsigned char* array_ptr, unsigned int size );
unsigned char find_minimum( unsigned char* array_ptr, unsigned int size );
void sort_array( unsigned char* array_ptr, unsigned int size );

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114,  88,  45,  76, 123,  87,  25,  23,
                              200, 122, 150,  90,  92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations */
  unsigned char *array_ptr = test;

  /* Statistics and Printing Functions */
  printf( "UNSORTED ARRAY:\n" );
  print_array( array_ptr, SIZE );

  printf( "\nDATASET STATISTICS (Print Stats Function):\n" );
  print_statistics( array_ptr, SIZE );

  printf( "\nDATASET STATISTICS (Individual Stat Functions):\n" );
  unsigned char median = find_median( array_ptr, SIZE );
  printf( "Median:  %d\n", median );

  unsigned char mean = find_mean( array_ptr, SIZE );
  printf( "Mean:    %d\n", mean );

  unsigned char minimum = find_minimum( array_ptr, SIZE );
  printf( "Minimum: %d\n", minimum );

  unsigned char maximum = find_maximum( array_ptr, SIZE );
  printf( "Maximum: %d\n", maximum );

}

/* Implementation File Code */

/******************************************************************************
 * Function: print_statistics
 * Description:
 *     This function prints the statistics (median, mean, mimimum, and maximum)
 *     of a data set.
 * Parameters:
 *     unsigned char * array_ptr: Pointer to a dataset
 *     unsigned char        size: Number of items in the dataset
 * Return: 
 *     None.
 *****************************************************************************/
void print_statistics( unsigned char* array_ptr, unsigned int size ){
  unsigned char median = find_median( array_ptr, size );
  unsigned char mean = find_mean( array_ptr, size );
  unsigned char minimum = find_minimum( array_ptr, size );
  unsigned char maximum = find_maximum( array_ptr, size );

  printf( "Median:  %d\n", median );
  printf( "Mean:    %d\n", mean );
  printf( "Minimum: %d\n", minimum );
  printf( "Maximum: %d\n", maximum );
}

/******************************************************************************
 * Function: print_array
 * Description:
 *     This function prints the values of a dataset.
 * Parameters:
 *     unsigned char * array_ptr: Pointer to a dataset
 *     unsigned char        size: Number of items in the dataset
 * Return: 
 *     None.
 *****************************************************************************/
void print_array( unsigned char* array_ptr, unsigned int size ){
  // Iterate through the aray and print each element line
  for ( int i = 0; i < size; i++ ){
    printf( "item[%d]: %d\n", i, array_ptr[i] );
  }

}

/******************************************************************************
 * Function: find_median
 * Description:
 *     This function takes a set of numbers and performs finds the median of
 *     of the dataset.
 * Parameters:
 *     unsigned char * array_ptr: Pointer to a data set
 *     unsigned char        size: Number of items in data set
 * Return: 
 *     Median of the dataset.
 *****************************************************************************/
unsigned char find_median( unsigned char* array_ptr, unsigned int size ){
  unsigned char median;
  
  // Sort array ( largest --> smallest )
  sort_array( array_ptr, size );

  // Calcuate median
  if( size % 2 == 0 ){  // Even number of array items
    median = ( array_ptr[( size / 2 ) - 1] + array_ptr[size / 2] ) / 2;
  }
  else{  // Odd number of array items
    median = array_ptr[size / 2];
  }

  return median;
}

/******************************************************************************
 * Function: find_mean
 * Description:
 *     This function takes a set of numbers and performs finds the average of
 *     of the set.
 * Parameters:
 *     unsigned char * array_ptr: Pointer to a data set
 *     unsigned char        size: Number of items in data set
 * Return: 
 *     Average of the dataset.
 *****************************************************************************/
unsigned char find_mean( unsigned char* array_ptr, unsigned int size ){
  // Calculate dataset total
  unsigned int total = 0;
  
  for( int i = 0; i < size; i++ ){
    total += array_ptr[i];
  }

  return total / size;
}

/******************************************************************************
 * Function: find_maximum
 * Description:
 *     This function takes a set of numbers and performs finds the minimum
 *     value of the set.
 * Parameters:
 *     unsigned char * array_ptr: Pointer to a data set
 *     unsigned char        size: Number of items in data set
 * Return: 
 *     Minimum value of the dataset.
 *****************************************************************************/
unsigned char find_maximum( unsigned char* array_ptr, unsigned int size ){
  // Sort array (largest --> smallest)
  sort_array( array_ptr, size );

  // Get first element in sorted array
  return array_ptr[0];
}

/******************************************************************************
 * Function: find_minimum
 * Description:
 *     This function takes a set of numbers and performs finds the maximum
 *     value of the set.
 * Parameters:
 *     unsigned char * array_ptr: Pointer to a data set
 *     unsigned char        size: Number of items in data set
 * Return: 
 *     Maximum value of the dataset.
 *****************************************************************************/
unsigned char find_minimum( unsigned char* array_ptr, unsigned int size ){
  // Sort array (largest --> smallest)
  sort_array( array_ptr, size );
  
  // Get last element in sorted array
  return array_ptr[size - 1];
}

/******************************************************************************
 * Function: sort_array
 * Description:
 *     This function takes a set of numbers and reorders the items in the
 *     dataset from largest to smallest.
 * Parameters:
 *     unsigned char * array_ptr: Pointer to a data set
 *     unsigned char        size: Number of items in data set
 * Return: 
 *     None.
 *****************************************************************************/
void sort_array( unsigned char* array_ptr, unsigned int size ){
  // Insertion sort algorithm (descending)
  for( int i = 1; i < size; i++ ){
    unsigned char key = array_ptr[i];
    int j = i - 1;

    // Move elements of array[0...i-1] that are lesser than key to one
    // position ahead of current position.
    while( j >= 0 && array_ptr[j] < key ){
      array_ptr[j + 1] = array_ptr[j];
      j--;
    }

    // Move key to correct position
    array_ptr[j + 1] = key;
  }
}
