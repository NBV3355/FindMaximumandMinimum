// FindMaximumandMinimum.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

int main()
{
    int a, b, c, d;

    do
    {
        printf("Please input 4 different integers:\n");
        scanf_s("%d", &a);
        scanf_s("%d", &b);
        scanf_s("%d", &c);
        scanf_s("%d", &d);

        // Maximum, Minimum
        if ((a > b) && (c > d))
        {
            if (a > c)
                printf("Maximum = %d\n", a);
            else
                printf("Maximum = %d\n", c);

            if (d < b)
                printf("Minimum = %d\n", d);
            else
                printf("Minimum = %d\n", b);
        }

        if ((a > b) && (c < d))
        {
            if (a > d)
                printf("Maximum = %d\n", a);
            else
                printf("Maximum = %d\n", d);

            if (b < c)
                printf("Minimum = %d\n", b);
            else
                printf("Minimum = %d\n", c);
        }

        if ((a < b) && (c > d))
        {
            if (b > c)
                printf("Maximum = %d\n", b);
            else
                printf("Maximum = %d\n", c);

            if (a < d)
                printf("Minimum = %d\n", a);
            else
                printf("Minimum = %d\n", d);
        }

        if ((a < b) && (c < d))
        {
            if (b > d)
                printf("Maximum = %d\n", b);
            else
                printf("Maximum = %d\n", d);

            if (a < c)
                printf("Minimum = %d\n", a);
            else
                printf("Minimum = %d\n", c);
        }

        printf("\n");

    } while (1);
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
