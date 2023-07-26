#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/*init the Comparing direction macros for the bitonic sort*/
#define UP 0
#define DOWN 1

/*enum bool - enum of boolean values*/
typedef enum bool
{
    false = 0,
    true
} bool;


/**
 * struct listint_s - init doubly linked list
 * @n: int value of the node
 * @prev: pointing to previous element in the list
 * @next: pointing to next element in the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/*helper_function for substituting*/
void swap_ints(int *a, int *b);

/*Printing the helper functions*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*init the Regular functions prototypes*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif
