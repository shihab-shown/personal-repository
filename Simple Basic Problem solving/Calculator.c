#include <stdio.h>

    int main()
{
       char op;
        double opd1,opd2;
        printf("Select an oparator\n");
        scanf("%c",&op);
        printf("Enter two numbers\n");

        scanf("%d %d", &opd1,&opd2);
        switch (op)
        {
        case '+':
            printf("%d\n",opd1+opd2);
            break;
         case '-':
            printf("%d\n",opd1-opd2);
            break;
             case '*':
            printf("%d\n",opd1*opd2);
            break;
             case '/':
            printf("%d\n",opd1/opd2);
            break;

        default:printf("Invalid\n");
            break;
        }

    return 0;
}
