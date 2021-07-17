// #include<stdio.h>
// int main()
// {
// char arr1[]="abc";
// char arr2[]={'a','b','c','\0'};
// printf("%s\n",arr1);
// printf("%s\n",arr2);

//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main()
{
    char arr1[] = "abc";
    char arr2[] = {'a', 'b', 'c',0};
    printf("%lu\n", strlen(arr1));//3
    printf("%lu\n", strlen(arr2));//3
    return 0;
}