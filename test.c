#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<assert.h>
//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
//int main(){
//	int arr[] = { 2,2,1, 3, 1, 4, 3, 4, 5,5, 7,9, 7, 8 };
//	int i, j;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int count = 0;
//	for (i = 0; i < len; ++i){
//	    count = 0;
//		for (j = 0; j < len; ++j){
//			if (arr[i] == arr[j]){
//				count++;
//			}
//		}
//		if (count == 1){
//			printf("%d ", arr[i]);
//	}
//}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//int main(){
//	int num=20;
//	int empty = num;
//	while (empty>=2){
//		num += empty / 2;
//		if (empty % 2 == 0){
//			empty /= 2;
//		}
//		else{
//			empty = empty / 2 + 1;
//		}
//	}
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
//3.ģ��ʵ��strcpy
//char* my_strcpy(char*dst, const char*src)
//{
//	char* ret = dst;
//	assert(dst);
//	assert(src);
//
//	while (*dst)
//	{
//		*dst++ = *src++;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[20] = "victory";
//	char str2[20] = "abcdefg";
//	printf("%s\n", my_strcpy(str1, str2));
//	system("pause");
//	return 0;
//}
////4.ģ��ʵ��strcat
char* my_strcat(char *dst, const char*src)
{
	int len = strlen(dst);
	char *ret = dst;
	assert(dst);
	assert(src);
	while (*(dst + len) = *src++)
	{
		len++;
	}
	return ret;
}
int main()
{
	char str1[20] = "victory";
	char str2[20] = "abcdefg";
	printf("%s\n", my_strcat(str1, str2));
	system("pause");
	return 0;
}