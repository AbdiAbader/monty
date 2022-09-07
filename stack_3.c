#include "monty.h"
/**
 *div - add two stack values
 *@head: head of stack
 *@val: number of line
 *Return: nothing
 */
void divs(stack_t **head, unsigned int val)
{
int num;
if (!(*head) || (*head)->next == NULL)
{
fprintf(stderr, "L%u: can't div, stack too short\n", val);
free_memo(*head);
fclose(datas.file);
exit(EXIT_FAILURE);
}
if ((*head)->n == 0)
{
fprintf(stderr, "L%u: division by zero\n", val);
free_memo(*head);
fclose(datas.file);
exit(EXIT_FAILURE);
}
num = (*head)->next->n / (*head)->n;
pop(head, val);
(*head)->n = num;
}
/**
 *mul - add two stack values
 *@head: head of stack
 *@val: number of line
 *Return: nothing
 */
void mul(stack_t **head, unsigned int val)
{
int num;
if (!(*head) || (*head)->next == NULL)
{
fprintf(stderr, "L%u: can't mul, stack too short\n", val);
free_memo(*head);
fclose(datas.file);
exit(EXIT_FAILURE);
}
num = (*head)->next->n * (*head)->n;
pop(head, val);
(*head)->n = num;
}
/**
 *mods - add two stack values
 *@head: head of stack
 *@val: number of line
 *Return: nothing
 */
void mods(stack_t **head, unsigned int val)
{
int num;
if (!(*head) || (*head)->next == NULL)
{
fprintf(stderr, "L%u: can't mod, stack too short\n", val);
free_memo(*head);
fclose(datas.file);
exit(EXIT_FAILURE);
}
if ((*head)->n == 0)
{
fprintf(stderr, "L%u: division by zero\n", val);
free_memo(*head);
fclose(datas.file);
exit(EXIT_FAILURE);
}
num = (*head)->next->n % (*head)->n;
pop(head, val);
(*head)->n = num;
}
