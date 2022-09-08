#include "monty.h"
/**
*add_end - add node at the end
*@head: head of the list
*@n: number
*Return: address of the head
*/
stack_t *add_end(stack_t **head, const int n)
{
stack_t *dark, *hold;
dark = malloc(sizeof(stack_t));
if (dark == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
free_memo(datas.list);
fclose(datas.file);
exit(EXIT_FAILURE);
}
dark->n = n;
dark->next = NULL;
dark->prev = NULL;
if (*head == NULL)
*head = dark;
else
{
hold = *head;
while (hold->next != NULL)
{
hold = hold->next;
}
hold->next = dark;
dark->prev = hold;
}
return (*head);
}
/**
 *rotls - rotates top of the elemenets
 *@head: head of the list
 *@value: line number
 *Return: none
 */
void rotls(stack_t **head, __attribute__ ((unused)) unsigned int value)
{
if ((*head)->next != NULL || (*head)->next->next != NULL)
{
add_end(head, (*head)->n);
pop(head, value);
}
}
