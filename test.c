#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<assert.h>
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。
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
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
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
//3.模拟实现strcpy
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
////4.模拟实现strcat
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