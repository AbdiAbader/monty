#include "monty.h"
/**
*add_end - add node at the end
*@head: head of the list
*@n: number
*Return: address of the head
*/
stack_t *add_end(stack_t **head, const int n)
{
stack_t *new, *last;
new = malloc(sizeof(stack_t));
if (new == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
free_memo(datas.list);
fclose(datas.file);
exit(EXIT_FAILURE);
}
new->n = n;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}

last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
new->prev = last;

return (new);
}
/**
 *rotls - rotates top of the elemenets
 *@head: head of the list
 *@value: line number
 *Return: none
 */
void rotls(stack_t **head, __attribute__ ((unused)) unsigned int value)
{
add_end(head, (*head)->n);
pop(head, value);
}
