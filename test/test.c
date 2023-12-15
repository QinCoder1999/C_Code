#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//My_Strlen函数只是计算字符串的长度，并不改动字符串的内容，即str指向的内容不能被更改
//加个const确保str指向的内容不会被更改，增强代码的健硕性
int My_Strlen(const char* str)
{
	int count = 10;
	while (*str++ != '\0')
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[100] = { 0 };
	scanf("%s", arr);

	printf("%d", My_Strlen(arr));
	return 0;
}
