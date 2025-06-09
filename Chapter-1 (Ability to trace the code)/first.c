#include <stdio.h>

int main()
{
    char c;
    printf("Enter value of c : \n ");
    c = getch();
    printf("%c's asci value is : %d ", c, c);
    getch();
}

/*

Here due to getch() an empty console window will open then on pressing any character it will close.
Then another console window will appear with 'hello' message and will clear on entering the text.


-- understanding the getch();
the getch hold the screen and return the character on key press.

#include <stdio.h>

int main()
{
    getch();
    printf("hello");
    getch();
}

-- escape charcter

\" => i i use a backward slach with double clone then it become a character which is printable.


 printf(" \" my sirg \" ") ;

 output => " my sirg "


 sum problem

  int x=5, y=6;

    printf("the value of %d and %d is : %d ",x,y, x+y);


    taking inout from user and printing that value's ascii value

    with scanf

    char c;
    printf("Enter value of c : \n ");
    scanf("%c",&c);
    printf("%d",c);

    with getch()

    char c;
    printf("Enter value of c : \n ");
    c = getch();
    printf("%c's asci value is : %d ", c, c);
    getch();

*/