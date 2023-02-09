#include<stdio.h>
//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//int cmp(const void* p1, const void* p2) 
//{
//	return *((int*)p1) - *((int*)p2);
//}
//
//int cmp2(const void* p1, const void* p2) 
//{
//	return *((char*)p1) - *((char*)p2);
//}
//
//int cmp3(const void* p1, const void* p2) 
//{
//	return strcmp(*((char**)p1), *((char**)p2));
//}
//
//int cmp4(const void* p1, const void* p2) 
//{
//	return *((double*)p1) - *((double*)p2);
//}
//
//int main() {
//	int arr1[] = { 0 , 53 , 45 , 89 , 68 , 75 };
//	qsort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), cmp);
//	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) 
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	char arr2[] = { 'a' , 'f' , 'y' , 'o' ,'r' , 'w' };
//	qsort(arr2, sizeof(arr2) / sizeof(arr2[0]), sizeof(arr2[0]), cmp2);
//	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) 
//	{
//		printf("%c ", arr2[i]);
//	}
//	printf("\n");
//	char* arr3[] = { "can", "I", "sing", "jump", "rap", "and basketball" };
//	qsort(arr3, sizeof(arr3) / sizeof(arr3[0]), sizeof(arr3[0]), cmp3);
//	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) 
//	{
//		printf("%s ", arr3[i]);
//	}
//	printf("\n");
//	double arr4[] = { 0.0 , 82.7 , 16.5 , 16.6 , 50.9 };
//	qsort(arr4, sizeof(arr4) / sizeof(arr4[0]), sizeof(arr4[0]), cmp4);
//	for (int i = 0; i < sizeof(arr4) / sizeof(arr4[0]); i++) 
//	{
//		printf("%f ", arr4[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int cmp_int(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//void Swap(char* e1, char* e2, int width)
//{
//    int i = 0;
//    for (i = 0; i < width; i++)
//    {
//        char tmp = 0;
//        tmp = *e1;
//        *e1 = *e2;
//        *e2 = tmp;
//        e1++;
//        e2++;
//    }
//}
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//    int i = 0;
//    for (i = 0; i < sz - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < sz - 1 - i; j++)
//        {
//            if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//            {
//                Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//int my_strlen(const char* s) {
//	int count = 0;
//	assert(s != NULL);
//	while (*s != '\0') {
//		count++;
//		s++;
//	}
//	return count;
//}
//int main() {
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//char my_strcmp(const char* dest, const char* src)
//{
//	while ((*dest != '\0') && (*src != '\0'))
//	{
//		if (*dest < *src)
//		{
//			return -1;
//		}
//		else if (*dest > *src)
//		{
//			return 1;
//		}
//		else
//		{
//			++dest;
//			++src;
//		}
//	}
//	if (*dest < *src)
//	{
//		return -1;
//	}
//	else if (*dest > *src)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char dest[] = "hello world";
//	char src[] = "hello";
//	int ret = my_strcmp(dest, src);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//char* my_strcat(char* str, const char* sour) 
//{
//    assert(str != NULL && sour != NULL);
//    char* tmp = str;
//    while (*str) 
//    {
//        str++;
//    }
//    while ((*str++ = *sour++) != '\0') 
//    {
//        ;
//    }
//    return tmp;
//}
//int main() {
//    char A[] = "abc";
//    char B[] = "def";
//    my_strcat(A, B);
//    printf("%s\n", A);
//    return 0;
//}
char* my_strstr(char* dst, char* src)
{
    char* p = dst;           
    char* s1 = p;
    char* s2 = src;
    assert(dst);             
    assert(src);
    while (*s1)
    {
        s1 = p;
        while ((*s1 != '\0') && (*s2 != '\0'))
        {
            if (*s1 == *s2)
            {
                s1++;
                s2++;
            }
            else
            {
                p++;
                s2 = src;
                break;
            }
        }
        if (*s2 == '\0')          
        {
            return p;
        }
    }
    return NULL;                
}
int main()
{
    char* str1 = "ababcdef";
    char* str2 = "abc";
    char* ret = my_strstr(str1, str2);
    printf("%s\n", ret);
    return 0;
}