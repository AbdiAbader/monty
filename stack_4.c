#include "monty.h"
/**
*rotls - rotates top of the elemenets
*@head: head of the list
*@value: line number
*Return: none
*/
void rotls(stack_t **head, __attribute__ ((unused)) unsigned int value)
{
stack_t *hold = *head;
int temp;
if (hold && hold->next)
{
while (hold->next != NULL)
{
temp = hold->n;
hold->n = hold->next->n;
hold->next->n = temp;
hold = hold->next;
}
}
}
