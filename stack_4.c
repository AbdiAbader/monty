#include "monty.h"
/**
*rotls - rotates top of the elemenets
*@head: head of the list
*@value: line number
*Return: none
*/
void rotls(stack_t **head, __attribute__ ((unused)) unsigned int value)
{
stack_t *first = *head, *last = *head;
if ((*head)->next == NULL || (*head)->next->next == NULL)
return;

while (last->next != NULL)
last = last->next;
(*head) = (*head)->next;
(*head)->next->prev = NULL;
last->next = first;
first->prev = last;
first->next = NULL;
}
