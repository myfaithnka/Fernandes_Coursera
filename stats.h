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
 * @brief Header file for stats.c
 *
 * variables and functions declared for stats.c
 *
 * @author Roland Fernandes
 * @date 11/08/2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief prints the statistics of an array
 *
 * prints the statistics of an array including minimum, maximum, mean, and
 * median
 *
 * @param arr the array
 * @param length the length of the array
 *
 * @return None
 */
void print_statistics(unsigned char *arr, unsigned int length);
  
/**
 * @brief prints the array to the screen
 *
 * prints the array to the screen
 *
 * @param arr the array
 * @param length the length of the array
 *
 * @return None
 */
void print_array(unsigned char *arr, unsigned int length);

/**
 * @brief Calculates the median value
 *
 * Calculates the median value in an array
 *
 * @param arr the array
 * @param length the length of the array
 *
 * @return None
 */
float find_median(unsigned char *arr, unsigned int length);

/**
 * @brief Calculates the mean value
 *
 * Calculates the mean value in an array
 *
 * @param arr the array
 * @param length the length of the array
 *
 * @return None
 */
float find_mean(unsigned char *arr, unsigned int length);

/**
 * @brief Finds the maximum value
 *
 * Finds the maximum value in an array
 *
 * @param arr the array
 * @param length the length of the array
 *
 * @return None
 */
int find_maximum(unsigned char *arr, unsigned int length);

/**
 * @brief Finds the maximum value
 *
 * Finds the maximum value in an array
 *
 * @param arr the array
 * @param length the length of the array
 *
 * @return None
 */
int find_minimum(unsigned char *arr, unsigned int length);

/**
 * @brief sorts the array from largest to smallest
 *
 * sorts the array from largest to smallest using insertion sort
 *
 * @param arr the array
 * @param length the length of the array
 *
 * @return None
 */
void sort_aaray(unsigned char *arr, unsigned int length);

#endif /* __STATS_H__ */
