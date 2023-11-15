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
    printf("Nhập phần tử cần cập nhập ");
    int addValue;
    scanf("%d", &addValue);
    printf("Nhập vị trí phần tử cần cập nhập ");
    int index;
    scanf("%d", &index);
    arr[index]=addValue;
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        printf("arr[%d]= %d\n",i,arr[i]);
    }
    
}