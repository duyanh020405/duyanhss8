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
    printf("Nhập vị trí phần tử cần xóa ");
    int index;
    scanf("%d", &index);
    for (int i = index; i < (sizeof(arr) / sizeof(int))-1; i++)
    {
        arr[i] = arr[i+1];
    }

    for (int i = 0; i < (sizeof(arr) / sizeof(int))-1; i++)
    {
        printf("arr[%d]= %d\n", i, arr[i]);
    }
}