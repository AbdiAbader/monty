#include "monty.h"
/**
*rotls - rotates top of the elemenets
*@head: head of the list
*@value: line number
*Return: none
*/
void rotls(stack_t **head, __attribute__ ((unused)) unsigned int value)
{
int temp;
stack_t *first = *head, *last = *head;
if ((*head)->next == NULL || (*head)->next->next == NULL)
return;
temp = first->n;
while (last->next != NULL)
{
if (last->next != NULL)
last->n = last->next->n;
last = last->next;
}
last->n = temp;
}
