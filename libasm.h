#ifndef LIBASM_H
# define LIBASM_H

#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

extern int ft_strlen(char *str);
extern int ft_strcmp(char *s1, char *s2);
extern int ft_write(int fd, void *buf, int byte);
extern int ft_read(int fd, void *buf, int byte);
extern char *ft_strcpy(char *dst, char *src);
extern char *ft_strdup(char *str);
extern char *ft_strdup2(char *str);

#endif
