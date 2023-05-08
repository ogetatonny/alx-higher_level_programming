#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - the singly linked list
 * @next: the points for next node
 * @n: the integer
 * Description: singly linked list node structure
 * for the Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

listint_t *add_nodeint(listint_t **head, const int n);
int check_cycle(listint_t *list);
size_t print_listint(const listint_t *h);
void free_listint(listint_t *head);
#endif /* LISTS_H */


