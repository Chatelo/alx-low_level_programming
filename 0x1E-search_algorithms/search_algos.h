#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h> /* Add this line to include size_t */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
int n;
size_t index;
struct listint_s *next;
} listint_t;

listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *jump_list_helper(listint_t *list, size_t step);
void print_value(listint_t *left, listint_t *right);

/* Structs */
/**
 * struct skiplist_s - Linked list with an express lane
 *
 * @n: Integer stored in the node
 * @index: Index of the node in the list
 * @next: Pointer to the next node in the list
 * @express: Pointer to the next node in the express lane
 */
typedef struct skiplist_s
{
int n;
size_t index;
struct skiplist_s *next;
struct skiplist_s *express;
} skiplist_t;

/* Function prototypes */
skiplist_t *linear_skip(skiplist_t *list, int value);

/* Function prototype */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
