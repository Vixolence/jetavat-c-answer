#include <stdio.h>

void main()
{
    int all_rows, all_columns, rows, columns; // กำหนดตัวแปร
    
    printf("Input Rows : ");
    scanf("%d", &all_rows);
    printf("Input Columns : ");
    scanf("%d",&all_columns);

    int matrix[all_rows][all_columns]; // กำหนดตัวแปรอาร์เรย์

    if (all_rows <= 3 && all_columns <= 3) // อาจจะใช้ "||" ก็ได้เพราะ ในโจทย์ได้ระบุไว้ว่า "หรือ" (กำกวม)
    {
        for (rows = 0; rows < all_rows; rows++) // ทำ Input ซ้ำ 
        {
            for (columns = 0; columns < all_columns; columns++)
            {
                printf("Matrix A [%d][%d] = ",rows,columns);
                scanf("%d",&matrix[rows][columns]);
            }
        }
        printf("Matrix 2A : ");
        for (int select_rows = 0; select_rows < all_rows; select_rows++) // แสดง Output ซ้ำ
        {
            for (int select_columns = 0; select_columns < all_rows; select_columns++)
            {
                printf("%d ", matrix[select_rows][select_columns]*2,);
            }
        }
    }
    else // ref โจทย์: กำหนดให้ผู้ใช้ระบุจำนวนแถว "หรือ" คอลัมน์ได้ไม่เกิน 3 
    {
        printf("ERROR");
    }
}