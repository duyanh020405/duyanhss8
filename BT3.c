#include <stdio.h>
int main()
{
    int num,sum=0;
    printf("Nhập số phần tử có trong mảng");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    int findNumber;
    printf("Nhập giá trị cần tìm trong mảng ");
    scanf("%d", &findNumber);

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i]==findNumber)
        {
            printf("%d\n",i);
            sum++;
        }
    }
    printf("Tổng các phần tử có giá trị bằng số đc nhập vào là %d",sum);
}