#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
    int Data;                                     ///4 Byte
    struct Node *Next;                            ///4 Byte
};

void Insert_First(struct Node **First,int No)
{
    struct Node *NewN = NULL;                ///Create pointer for New tab

    NewN = (struct Node*)malloc(sizeof(struct Node));   ///Allocation dyanamic memory for new Node in Data Section Heep

    NewN -> Data = No;
    NewN -> Next = NULL;                          ///Setting value to New tab

    if(*First == NULL)                             ///Only once menas for inserting very 2st element in LL
    {
         *First = NewN;
        printf("\n\n Inside if block of Insert first");
    }
    else                                       ///works for every next element from 2nd onwords
    {
        NewN -> Next = *First;
        *First = NewN;
        printf("\n\n Inside else block Insert first");
    }
    printf("\n %d Element Inserted Sucessfully",No);
    return ;
}
void Display_LL(struct Node *First)
{
    if(NULL == First)
    {
        printf("\n Given Link List is Already Empty");
    }
    else
    {
        printf("\n\n Element in Given Link List are\n");

        while(First !=NULL)
        {
            printf("\n |%d| ->",First -> Data);
               First = First -> Next;
        }
        printf("\n\n NULL");
    }
    return ;
}

int main()
{
    int Num = 83;
    struct Node *Head = NULL;

    Insert_First(&Head,Num);

    Insert_First(&Head,25);
    Insert_First(&Head,44);
    Insert_First(&Head,28);

    getch();
    system ("cls");

    Display_LL(Head);

    getch();
    return 0;
}
