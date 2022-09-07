#include "monty.h"
/**
 *push - pushs value to the stack
 *@value: number of line
 *Return: nothing
 */
void push(stack_t **head, __attribute__ ((unused)) unsigned int value)
{
int i;
char *token;
token = strtok(NULL, " \t\n\r");
if (!token)
{
fprintf(stderr, "L%d: usage: push integer\n", value);
free_memo(datas.list);
fclose(datas.file);
exit(EXIT_FAILURE);
}
 for (i = 0;token[i];i++)
   {
     if (token[i] < 48  && token[i] >  57)
       {
fprintf(stderr, "L%d: usage: push integer\n", value);
free_memo(datas.list);
fclose(datas.file);
 exit(EXIT_FAILURE);}
}
 add(head,atoi(token));
}
/**
 *add - adds to doubly linked list
 *@head: head of the list
 *@value: number of lines
 *return: new address for head
 */
stack_t *add(stack_t **head, __attribute__ ((unused)) int value)
{
stack_t *new = malloc(sizeof(stack_t));
if (head == NULL)
return (NULL);
if (new == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
free_memo(datas.list);
fclose(datas.file);
exit(EXIT_FAILURE);
}
new->n = value;
new->next = *head;
new->prev = NULL;
*head = new;
if (new->next != NULL)
(new->next)->prev = new;
return (new);
}
void pall(stack_t **head, __attribute__ ((unused)) unsigned int line_number)
{
stack_t *current = NULL;
current = *head;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
}
/**
*free - free memory
*@head: head of the list
*Return: void
*/
void free_memo(stack_t *head)
{
stack_t *hold;
while (head)
{
hold = head;
head = head->next;
free(hold);
}
}
