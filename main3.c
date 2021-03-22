/*
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "libasm.h"

char 		*ft_strcpy(char *dst, char *src);
char		*ft_strdup(char *s);
size_t		ft_strlen(char *str);
ssize_t		ft_write(int filedes, const void *buff, size_t nbyte);
ssize_t		ft_read(int filedes, void *buff, size_t nbyte);
int			ft_strcmp(char *s1, char *s2);
*/

#include "libasm.h"

int main(void)
{
	char	*src;
	char	*dst;
	char	*dst1;
	char	*text;
	char	*test;
	char	*test1;
	int		fd;
	int		fd1;
	
	src = strdup("¡Hola qué tal!");
	dst = malloc(sizeof(char) * (strlen(src) + 1));
	if (!dst)
		return (1);
	dst1 = malloc(sizeof(char) * (strlen(src) + 1));
	if (!dst1)
		return (1);
	text = strdup("Holaaa jejeje\n");
	if (!text)
		return (1);
	test = malloc(sizeof(char) * (strlen(text) + 1));
	if (!test)
		return (1);
	test1 = malloc(sizeof(char) * (strlen(text) + 1));
	if (!test1)
		return (1);
	fd = open("text", O_WRONLY | O_APPEND | O_CREAT, 0700);
	fd1 = open("text1", O_WRONLY | O_APPEND | O_CREAT, 0700);
	printf("------------------------\n");
	printf("%s\n\n", "STRLEN");
	printf("Real: %zu | Mío: %zu\n", strlen("¡Hola qué tal!"), ft_strlen("¡Hola qué tal!"));
	printf("Real: %zu | Mío: %zu\n", strlen(""), ft_strlen(""));
	printf("------------------------\n");
	printf("%s\n\n", "STRCPY");
	printf("Real: %s | Mío: %s\n", strcpy(dst, src), ft_strcpy(dst1, src));
	printf("Real: %s | Mío: %s\n", strcpy(dst, ""), ft_strcpy(dst1, ""));
	printf("------------------------\n");
	printf("%s\n\n", "STRCMP");
	printf("Real: %d | Mío: %d\n", strcmp("Hola!", "Hola!"), ft_strcmp("Hola!", "Hola!"));
	printf("Real: %d | Mío: %d\n", strcmp("Holx!", "Hola!"), ft_strcmp("Holx!", "Hola!"));
	printf("------------------------\n");
	printf("%s\n\n", "WRITE");
	printf("Real: %zd | Mío: %zd\n", write(fd, text, strlen(text)), ft_write(fd1, text, strlen(text)));
	printf("------------------------\n");
	printf("%s\n\n", "READ");
	printf("Real: %zd | Mío: %zd\n", read(fd, test, strlen(text)), ft_read(fd1, test1, strlen(text)));
	printf("------------------------\n");
	printf("%s\n\n", "STRDUP");
	printf("Real: %s | Mío: %s\n", strdup("Holaaaaa!"), ft_strdup("Holaaaaa!"));
	printf("------------------------\n");
	free(dst);
	free(dst1);
	free(src);
	close(fd);
	close(fd1);
	return (0);
}
