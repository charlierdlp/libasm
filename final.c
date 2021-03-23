#include "libasm.h"

void	test_ft_strlen()
{
	char *big = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque rhoncus, tellus ut commodo tempor, mi urna tempus purus, quis dictum dui tortor nec felis. Pellentesque ut sodales sapien. Donec laoreet diam id tristique venenatis. Sed congue nibh sit amet lorem porttitor condimentum. Nullam a ultriceslectus, cursus sodales velit. Ut euismod nibh mauris, sit amet sagittis tellus facilisis in. Donec luctus porttitor eleifend. Curabitur vulputate, elitut luctus consequat, risus arcu facilisis nisi, vel sollicitudin massa arculacinia arcu. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Aliquam vitae cursus purus. Nunc molestie purus vitae.";
	char *small = "Hello world!";
	char *empty = "";

	printf("\n\n\033[0;37m*============================*\n");
	printf("*=========>");
	printf("\033[0;32m STRLEN \033[0;37m");
	printf("<=========*\n");
	printf("*============================*\033[0m\n\n");
	printf("	     Original | FT\n");
	printf("------------------------------\n");
	printf("Long string: %8zu | %zu\n", strlen(big), ft_strlen(big));
	printf("Short string: %7zu | %zu\n", strlen(small), ft_strlen(small));
	printf("Empty string: %7zu | %zu\n", strlen(empty), ft_strlen(empty));
}

void	test_ft_strcpy()
{
	char *src = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque rhoncus";
	char dst[74];
	char dst2[74];
	char *empty = "";

	printf("\n\033[0;37m*============================*\n");
	printf("*=========>");
	printf("\033[0;32m STRCPY \033[0;37m");
	printf("<=========*\n");
	printf("*============================*\033[0m\n\n");
	printf("------------------------------\n");
	printf("Original: %s\n", strcpy(dst, src));
	printf("FT: %s\n", ft_strcpy(dst2, src));
	printf("Original: %s\n", strcpy(dst, empty));
	printf("FT: %s\n", ft_strcpy(dst2, empty));
}

void	test_ft_strcmp()
{
	char *s1 = "Hello World!";
	char *s2 = "Hello Friend!";
	char *empty = "";

	printf("\n\033[0;37m*============================*\n");
	printf("*=========>");
	printf("\033[0;32m STRCMP \033[0;37m");
	printf("<=========*\n");
	printf("*============================*\033[0m\n\n");
	printf("------------------------------\n");
	printf("Original: %d\n", strcmp(s1, s1));
	printf("FT: %d\n", ft_strcmp(s1, s1));
	printf("Original: %d\n", strcmp(s2, s1));
	printf("FT: %d\n", ft_strcmp(s2, s1));
	printf("Original: %d\n", strcmp(empty, s1));
	printf("FT: %d\n", ft_strcmp(empty, s1));
}

void	test_ft_write()
{
	char *text = "Hello world!";
	int bytes;
	int fd;

	fd = open("text", O_WRONLY | O_APPEND | O_CREAT, 0700);
	printf("\n\033[0;37m*============================*\n");
	printf("*=========>");
	printf("\033[0;32m WRITE \033[0;37m");
	printf("<==========*\n");
	printf("*============================*\033[0m\n\n");
	printf("------------------------------\n");
	printf("Original: %zd\n", write(fd, text, strlen(text)));
	close(fd);
}

void	test_ft_read()
{
	char buffer[100];

	printf("\n\033[0;37m*============================*\n");
	printf("*==========>");
	printf("\033[0;32m READ \033[0;37m");
	printf("<==========*\n");
	printf("*============================*\033[0m\n\n");
	printf("------------------------------\n");
	read(1, buffer, 100);
	printf("\nOriginal: %s\n", buffer);
	ft_read(1, buffer, 100);
	printf("\nFT: %s\n", buffer);
}

void	test_ft_strdup()
{
	char *s1 = "Test1";
	char *s2 = "Test2";

	printf("\n\033[0;37m*============================*\n");
	printf("*=========>");
	printf("\033[0;32m STRDUP \033[0;37m");
	printf("<=========*\n");
	printf("*============================*\033[0m\n\n");
	printf("Original: %s\n", strdup(s1));
	printf("FT: %s\n", ft_strdup(s2));
	free(s1);
	free(s2);
	printf("------------------------------\n");

}

int main()
{
	test_ft_strlen();
	test_ft_strcpy();
	test_ft_strcmp();
	test_ft_strdup();
	test_ft_write();
	test_ft_read();
}
