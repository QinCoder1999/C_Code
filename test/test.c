#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//My_Strlen����ֻ�Ǽ����ַ����ĳ��ȣ������Ķ��ַ��������ݣ���strָ������ݲ��ܱ�����
//�Ӹ�constȷ��strָ������ݲ��ᱻ���ģ���ǿ����Ľ�˶��
int My_Strlen(const char* str)
{
	int count = 0;
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