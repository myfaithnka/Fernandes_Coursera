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
 * @brief Header Function for stats.c
 *
 * analyze an array of unsigned char data items and report analytics on the
 * maximum, minimum, mean, and median of the data set
 * 
 * @author Roland Fernandes
 * @date 11/08/2017
 *
 */



#include <stdio.h>
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
  /* Statistics and Printing Functions Go Here */
  sort_array(test, SIZE);
  print_array(test, SIZE);
  print_statistics(test, SIZE);

}

  void print_array(unsigned char *arr, unsigned int length){
      printf("The array is:\n");
      int i;
      for(i=0;i<length;i++){
          printf("%d ", (int)arr[i]);
      }
      printf("\n");
  }
  
  float find_median(unsigned char *arr, unsigned int length){
      float median = 0;
      if(length%2==1){
          median = (unsigned int)arr[(length-1)/2];
      }
      else{
          median = ((unsigned int)arr[(length-1)/2] + (unsigned int)arr[((length-1)/2)+1])/2;
      }
      return median;
  }
  
  float find_mean(unsigned char *arr, unsigned int length){
      unsigned int sum = 0;
      int i;
      for(i=0;i<length;i++){
          sum += (unsigned int)arr[i];
      }
      float mean = sum/length;
      return mean;
  }
  
  int find_maximum(unsigned char *arr, unsigned int length){
      unsigned int max = 0;
      int i;
      for(i=0;i<length;i++){
          if((int)arr[i] > max){
              max = (unsigned int)arr[i];
          }
      }
      return max;
  }
  
  int find_minimum(unsigned char *arr, unsigned int length){
      unsigned int min = 999;
      int i;
      for(i=0;i<length;i++){
          if((int)arr[i] < min){
              min = (int)arr[i];
          }
      }
      return min;
  }
  
    void print_statistics(unsigned char *arr, unsigned int length){
      float median = find_median(arr, length);
      float mean = find_mean(arr, length);
      int max = find_maximum(arr, length);
      int min = find_minimum(arr, length);
      printf("The mean is %.1f\nThe median is %.1f\n", mean, median);
      printf("The maximum is %d\nThe minimum is %d\n", max, min);
  }
  
  void sort_array(unsigned char *arr, unsigned int length){
      int i;
      for(i=0;i<length;i++){
          int j, k = arr[i];
          for(j=i-1;j>=0 && k>arr[j];j--){
              arr[j+1] = arr[j];
          }
          arr[j+1] = k;
      }
  }
/* Add other Implementation File Code Here */
