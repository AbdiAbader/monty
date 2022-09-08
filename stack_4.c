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
void rotrs(stack_t **head, __attribute__ ((unused)) unsigned int value)
{
int buf[BUFSIZ];
int i = 0;
stack_t *hold = *head ,*s = *head;
if (hold && hold->next)
{
while (hold != NULL)
{
buf[i] = hold->n;
hold = hold->next;
i++;
}
 i--;
while (i >= 0 && s != NULL)
{
s->n = buf[i];
s = s->next;
 i--;
 }
 }

}
