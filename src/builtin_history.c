/*
** EPITECH PROJECT, 2025
** history_42sh
** File description:
** builtin_history
*/

#include <stdlib.h>
#include <stdio.h>

#include "history.h"

char *his_last_command(char *line, his_variable_t *his_variable)
{
    char *new_line = malloc(sizeof(char) * 3);

    if (new_line == NULL)
    return NULL;
    new_line[0] = 'l';
    new_line[1] = 's';
    new_line[2] = '\0';
    free(line);

    return new_line;
}

char *his_last_same_command(char *line, his_variable_t *his_variable)
{
    char *new_line = malloc(sizeof(char) * 3);

    if (new_line == NULL)
        return NULL;
    new_line[0] = 'l';
    new_line[1] = 's';
    new_line[2] = '\0';
    free(line);

    return new_line;
}

char *his_id_command(char *line, his_variable_t *his_variable)
{
    char *new_line = malloc(sizeof(char) * 3);
    if (new_line == NULL)
    return NULL;

    new_line[0] = 'l';
    new_line[1] = 's';
    new_line[2] = '\0';
    free(line);

    return new_line;
}

char *his_last_word(char *line, his_variable_t *his_variable)
{
    char *new_line = malloc(sizeof(char) * 3);
    if (new_line == NULL)
    return NULL;

    new_line[0] = 'l';
    new_line[1] = 's';
    new_line[2] = '\0';
    free(line);

    return new_line;
}

char *his_last_arg(char *line, his_variable_t *his_variable)
{
    char *new_line = malloc(sizeof(char) * 3);

    if (new_line == NULL)
        return NULL;
    new_line[0] = 'l';
    new_line[1] = 's';
    new_line[2] = '\0';
    free(line);

    return new_line;
}
