#include "libasm.h"

void	test_ft_strlen()
{
	char *big = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque rhoncus, tellus ut commodo tempor, mi urna tempus purus, quis dictum dui tortor nec felis. Pellentesque ut sodales sapien. Donec laoreet diam id tristique venenatis. Sed congue nibh sit amet lorem porttitor condimentum. Nullam a ultriceslectus, cursus sodales velit. Ut euismod nibh mauris, sit amet sagittis tellus facilisis in. Donec luctus porttitor eleifend. Curabitur vulputate, elitut luctus consequat, risus arcu facilisis nisi, vel sollicitudin massa arculacinia arcu. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Aliquam vitae cursus purus. Nunc molestie purus vitae.";
	char *small = "Hello world!";
	char *empty = "";
	printf("\n\n\033[0;37m*============================*\n");
	printf("*==========>");
	printf("\033[0;32mSTRLEN\033[0;37m");
	printf("<==========*\n");
	printf("*============================*\033[0m\n\n");
	printf("	     Original | FT\n");
	printf("-----------------------------\n");
	printf("Long string: %8zu | %zu\n", strlen(big), ft_strlen(big));
	printf("Short string: %7zu | %zu\n", strlen(small), ft_strlen(small));
	printf("Empty string: %7zu | %zu\n", strlen(empty), ft_strlen(empty));
}

void	test_ft_strcpy()
{
	char *src = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque rhoncus, tellus ut commodo tempor, mi urna tempus purus, quis dictum dui tortor nec felis. Pellentesque ut sodales sapien. Donec laoreet diam id tristique venenatis. Sed congue nibh sit amet lorem porttitor condimentum. Nullam a ultriceslectus, cursus sodales velit. Ut euismod nibh mauris, sit amet sagittis tellus facilisis in. Donec luctus porttitor eleifend. Curabitur vulputate, elitut luctus consequat, risus arcu facilisis nisi, vel sollicitudin massa arculacinia arcu. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Aliquam vitae cursus purus. Nunc molestie purus vitae.";
	char dst[120];


	printf("\n\n\033[0;37m*============================*\n");
	printf("*==========>");
	printf("\033[0;32mSTRCPY\033[0;37m");
	printf("<==========*\n");
	printf("*============================*\033[0m\n\n");
	printf("	     Original | FT\n");
	printf("-----------------------------\n");
	printf("dst: %s\n", strcpy(dst, src));
}

int main()
{
	test_ft_strlen();
	test_ft_strcpy();
}
