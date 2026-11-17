#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
    int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int pass;
    int i;
    int hold;
    int swapped; // (b) 記錄是否有發生交換的旗標

    printf("Data items in original order\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    // 氣泡排序
    for (pass = 1; pass < SIZE; pass++)
    {
        swapped = 0; // 每回合開始前設為 0

        // (a) 條件改為 i < SIZE - pass，第 1 回合比 9 次、第 2 回合比 8 次，依此類推
        for (i = 0; i < SIZE - pass; i++)
        {
            if (a[i] > a[i + 1])
            {
                hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
                swapped = 1; // 發生交換
            }
        }

        // (b) 若該回合沒有發生任何交換，表示已排序完成，直接跳出迴圈
        if (swapped == 0)
        {
            break;
        }
    }

    printf("\nData items in ascending order\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}