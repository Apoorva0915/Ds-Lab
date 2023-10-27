#include <stdio.h>
int main()
{
    int arr[10], pos = -1, ch;
    do
    {
        printf("\n1...insert");
        printf("\n2...remove");
        printf("\n3...show");
        printf("\n4...exit");
        printf("\nenter choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (pos == 9)
            {
                printf("over");
            }
            else
            {
                pos++;
                printf("enter no\n");
                scanf("%d", &arr[pos]);
                printf("no.inserted\n");
            }
            break;
        case 2:
            if (pos == -1)
            {
                printf("empty");
            }
            else
            {
                printf("no. removed %d ", arr[pos]);
                pos--;
            }
            break;
        case 3:
            if (pos == -1)
            {
                /* code */
                printf("empty\n");
            }
            else
            {
                printf("number are\n");
                for (int i = 0; i <= pos; i++)
                {
                    /* code */
                    printf("%d ", arr[i]);
                }
            }
            break;
        case 4:
            printf("bye");
            break;
        default:
            printf("enter vaild choice");
        }
    } while (ch != 4);
    return 0;
}
