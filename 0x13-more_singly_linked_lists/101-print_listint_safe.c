#ifndef LISTS_H
#define LISTS_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

#endif

#include <stdio.h>

/**
* *insert_nodeint_at_index - insert node at a given position
*
* @head: head element of the list
*
* @idx: index of the list to insert a new node
*
* @n: integer n
*
* Return: New node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        unsigned int a = 0;
        listint_t *new_node, *prev_node, *next_node;

        new_node = malloc(sizeof(listint_t));

        if (idx == 0 || *head == NULL)
        {
                new_node->n = n;
                new_node->next = *head;
                *head = new_node;
                return (new_node);
        }
        if (new_node == NULL)
                return (NULL);

        prev_node = *head;

        while (*head != NULL && a < (idx - 1))
        {
                prev_node = prev_node->next;
                a++;
        }

        next_node = prev_node->next;
        prev_node->next = new_node;
        new_node->n = n;
        new_node->next = next_node;
        return (new_node);

        if (a < idx && *head == NULL)
                return (NULL);
}
int main(void)
{
    listint_t *head;

    head = NULL;
    insert_nodeint_at_index(&head, 5, 4096);
    return (0);
}
