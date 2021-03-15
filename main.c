#include "libasm.h"

int main()
{
	/*
	char dst[10] = "";
    char dst1[10] = "";
	printf("ORIGINAL ANTES:[%s] FT ANTES:[%s]\n", dst, dst1);
	strcpy(dst, "hola");
	printf("ORIGINAL DESPUES:[%s]\n", dst);
	ft_strcpy(dst1, "hola");
	printf("FALSA DESPUES:[%s]\n", dst1);
	

  // printf("charlie:%lu\n", ft_strlen("ho       la"));
  // printf("ordenador:%lu\n", strlen("ho       la"));

	char str1[10] = "";
	char str2[10] = "";


printf("Original:[%d]\n", strcmp(str1, str2));
printf("Ft:[%d]\n", ft_strcmp(str1, str2));
	*/

	char str1[10] = "";
	char str2[10] = "";
	
	printf("Original:[%s]\n", strdup(str1));
	printf("Ft:[%s]\n", ft_strdup2(str2));
	return(0);
}
