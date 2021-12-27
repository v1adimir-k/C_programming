#include <stdio.h>
#include <math.h> 
#include <conio.h> 
#include <stdlib.h> 
#include "func.h"

int main(void)
{
	unsigned int len = 0,sizeDest = 0,index = 0 ;
	char *point;
	_Bool err;
	_Bool b = 1;
	while (b==1)
	{
	printf("Menu:\n");
	printf("1. Task 1\n");
	printf("2. Task 2\n");
	printf("3. Task 3\n");
	printf("4. Task 4\n");
	printf("5. Task 5\n");
	printf("6. Task 6\n");
	printf("7. Exit \n");
	printf("Select Task number: ");
	switch (_getch())
	{
	case '1':
	{
		printf("Task 1:\n");
		char str[] = " MAX ";
		printf("str = ");
		scanf("%s", &str);
		len = strlen1(str);
		printf("strlen = ");
		printf("%i", len);
		printf("\n");
		break;
	}
	case '2':
	{
		printf("Task 2:\n");
		char str[] = " MAX ";
		printf("str = ");
		scanf("%s", &str);
		printf("\n");
		char substr[] = " MAX ";
		printf("substr = ");
		scanf("%s", &substr);
		printf("\n");
		point = find1(str,substr);
		point == 0 ? printf("result = 0"):printf("result = ");printf("%s",substr);	
		printf("\n");
		break;
	}
	case '3':
	{
		printf("Task 3:\n");
		char str[] = " MAX ";
		printf("str = ");
		scanf("%s", &str);
		printf("\n");
		char substr[] = " MAX ";
		printf("substr = ");
		scanf("%s", &substr);
		printf("\n");
		delete1(str,substr);
		printf("strdelete = ");
		printf("%s",str);
		printf("\n");
		break;
	}
	case '4':
	{
		printf("Task 4:\n");
		int sizeBuffer;
		char str[] = " MAX ";
		printf("str = ");
		scanf("%s", &str);
		printf("\n");
		printf("sizeBuffer = ");
		scanf("%i", &sizeBuffer);
		printf("\n");
		char buff[sizeBuffer];
		strcpy1(buff,sizeBuffer,str);
		printf("Buffer = ");
		printf("%s", buff);
		printf("\n");
		break;
	}
	case '5':
	{
		printf("Task 5:\n");
		int sizeBuffer;
		printf("sizeBuffer = ");
		scanf("%i", &sizeBuffer);
		printf("\n");
		char buff[sizeBuffer];
		char str1[] = " MAX ";
		char str2[] = " MAX ";
		printf("str1 = ");
		scanf("%s", &str1);
		printf("\n");
		printf("str2 = ");
		scanf("%s", &str2);
		printf("\n");
		strcat1(buff,sizeBuffer,str1,str2);
		printf("buff = ");
		printf("%s", buff);
		printf("\n");
		break;
	}
	case '6':
	{
		printf("Task 6:\n");
		int sizeDest = 100;
		char dest[sizeDest];
		char str1[] = " MAX ";
		char str2[] = " MAX ";
		printf("str1 = ");
		scanf("%s", &str1);
		printf("\n");
		printf("str2 = ");
		scanf("%s", &str2);
		printf("\n");
		printf("index = ");
		scanf("%i", &index);
		err = insert1(str1,str2,index,dest,sizeDest);
		printf("result = ");
		err ? printf("%s\n",dest):printf("Erorr\n" );
		break;
	}
	case '7':
	{
		b = 0;
		break;
	}
	default:
	{
		printf("\nInvalid value entered. Try again.\n");;
		break;
	}
	}
	} 
	system("pause");
	return 0;
}
