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
 * @brief Header file which provides functions to calculate the statistics of a
 *        dataset and prints the dataset's contents and statistics to the
 *        console. 
 *
 * This application takes a dataset of an unsigned char elements and performs
 * statistical analytics (median, mean, minimum, and maximum) on this dataset.
 * The dataset and its analytics can also be printed to the console.
 *
 * @author Maya F. Dunlap
 * @date 29 April 2025
 *
 */


#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Prints the statistics of an unsigned char data array
 *
 * This function takes a pointer to an n-element unsigned char data array and an
 * unsigned integer which represents the size of the data array. The function then
 * prints the median, mean, minimum, and maximum values of the data array. There
 * is no returned value.
 *
 * @param array_ptr The pointer to an n-element unsigned char data array
 * @param size The size (unsigned integer) of the data array
 *
 * @return None
 */
void print_statistics( unsigned char* array_ptr, unsigned int size );


/**
 * @brief Prints the elements of an unsigned char data array
 *
 * This function takes a pointer to an n-element unsigned char data array and an
 * unsigned integere which represents the size of the data array. The function then
 * prints the values of the data array to the console. There is no returned value.
 *
 * @param array_ptr The pointer to an n-element unsigned char data array
 * @param size The size (unsigned integer) of the data array
 *
 * @return None
 */
void print_array( unsigned char* array_ptr, unsigned int size );


/**
 * @brief Calculates the median value of the elements of an unsigned char data array
 *
 * This function takes a pointer to an n-element unsigned char data array and an
 * unsigned integer which represents the size of the data array. The function then
 * finds and returns the median value (unsigned char) of all the elements in the
 * array rounded down to the nearest integer.
 *
 * @param array_ptr The pointer to an n-element unsigned char data array
 * @param size The size (unsigned integer) of the data array
 *
 * @return The median value (unsigned char) of the elements in the data array
 */
unsigned char find_median( unsigned char* array_ptr, unsigned int size );


/**
 * @brief Calcuates the average value of the elements of an unsigned char data array
 *
 * This function takes a pointer to an n-element unsigned char data array and an
 * unsigned integer which represents the size of the data array. The function then
 * finds and returns the average value (unsigned char) of all the elements in the
 * array rounded down to the nearest integer.
 *
 * @param array_ptr The pointer to an n-element unsigned char data array
 * @param size The size (unsigned integer) of the data array
 *
 * @return The average value (unsigned char) of the elements in the data array
 */
unsigned char find_mean( unsigned char* array_ptr, unsigned int size );


/**
 * @brief Finds the element of an unsigned char data array with the largest value
 *
 * This function takes a pointer to an n-element unsigned char data array and
 * an unsigned integer which represents the size of the data array. The function
 * then finds and returns the largest value (unsigned char) found within the
 * data array.
 *
 * @param array_ptr The pointer to an n-element unsigned char data array
 * @param size The size (unsigned integer) of the data array
 *
 * @return The largest unsigned char value in the data array
 */
unsigned char find_maximum( unsigned char* array_ptr, unsigned int size );


/**
 * @brief Finds the element of an unsigned char data array with the smallest value
 *
 * This function takes a pointer to an n-element unsigned char data array and
 * an unsigned integer which represents the size of the data array. The function
 * then finds and returns the smallest value (unsigned char) found within the
 * data array.
 *
 * @param array_ptr The pointer to an n-element unsigned char data array
 * @param size The size (unsigned integer) of the data array
 *
 * @return The smallest unsigned char value in the data array
 */
unsigned char find_minimum( unsigned char* array_ptr, unsigned int size );


/**
 * @brief Sort the elements in a unsigned char data array from largest to smallest
 *
 * This function takes a pointer to an n-element unsigned char data array and
 * an unsigned integer which represents the size of the data array. The function
 * then reorders the elements of the original array. The largest element in the
 * data set is the first element in the array and the smallest element in the
 * data set is the last element in the array. There is no returned value.
 *
 * @param array_ptr The pointer to an n-element unsigned char data array
 * @param size The size (unsigned integer) of the data array
 *
 * @return None
 */
void sort_array( unsigned char* array_ptr, unsigned int size );

#endif /* __STATS_H__ */
