#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - prints a listint_t linked list
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: the number of nodes in the list
 * Otherwise - if function fails, exit the program with status 98
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *goat, *pig;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

goat = head->next;
pig = (head->next)->next;

while (pig)
{
if (goat == pig)
{
goat = pig;
while (goat != pig)
{
nodes++;
goat = goat->next;
pig = pig->next;
}

goat = goat->next;
while (goat != pig)
{
nodes++;
goat = goat->next;
}

return (nodes);
}

goat = goat->next;
pig = (pig->next)->next;
}

return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;

nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodes);
}

