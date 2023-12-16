#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

/* LIBRARIES */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* STRUCTURES */
/**
 * structure listint_s - singly linked list
 *
 * @n: Int
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Descript: singly linked list node struct
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Int
 * @index: Index of the node in the list
 * @next: Pointer to the nxt node
 * @express: Pointer to the nxt node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/* PROTOTYPES */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *create_list(int *array, size_t size);
void free_list(listint_t *list);
void print_list(const listint_t *list);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
