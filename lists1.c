#include "shell.h"

/**
 * add_sep_node_end - adds a separator found at the end
 * of a sep_list.
 * @head: head
 * @sep: separators ; | &
 * Return: address of the head.
 */
sep_list *add_sep_node_end(sep_list **head, char sep)
{
	sep_list *new, *tmp;

	new = malloc(sizeof(sep_list));
	if (new == NULL)
		return (NULL);

	new->separator = sep;
	new->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (*head);
}

/**
 * free_sep_list - frees a sep_list
 * @head: head
 * Return: void
 */
void free_sep_list(sep_list **head)
{
	sep_list *tmp, *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((tmp = curr) != NULL)
		{
			curr = curr->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * add_line_node_end - adds a command line at the end
 * of a line_list.
 * @head: head
 * @line: command line.
 * Return: address of head.
 */
line_list *add_line_node_end(line_list **head, char *line)
{
	line_list *new, *tmp;

	new = malloc(sizeof(line_list));
	if (new == NULL)
		return (NULL);

	new->line = line;
	new->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (*head);
}

/**
 * free_line_list - frees a line_list
 * @head: head
 * Return: void
 */
void free_line_list(line_list **head)
{
	line_list *tmp, *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((tmp = curr) != NULL)
		{
			curr = curr->next;
			free(tmp);
		}
		*head = NULL;
	}
}

