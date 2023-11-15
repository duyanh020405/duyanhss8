#include <stdio.h>
int main()
{
    int num;
    printf("Nhập số phần tử của mảng ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhập phần tử cần đưa vào ");
    int addValue;
    scanf("%d", &addValue);
    printf("Nhập vị trí phần tử cần đưa vào ");
    int index;
    scanf("%d", &index);
    for (int i = sizeof(arr) / sizeof(int); i > index; i--)
    {
      
        arr[i] = arr[i-1];
    }
    arr[index] = addValue;
    for (int i = 0; i < (sizeof(arr) / sizeof(int))+1; i++)
    {
        printf("arr[%d]= %d\n", i, arr[i]);
    }

}