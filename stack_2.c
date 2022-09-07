#include "monty.h"
/**
 *pop - remove heads of list
 *@head: head of the list
 *@val: line number
 *Return: nothing
 */
void pop(stack_t **head, unsigned int val)
{
stack_t *hold;
if (*head == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", val);
fclose(datas.file);
exit(EXIT_FAILURE);
}
hold = *head;
head = head->next;
free(hold);
}
