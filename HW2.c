#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,k,password;
    char ch;
    printf("     ___\n");//6��26��ӤH����e�� 
    printf("     \\ /\n");
    for (i=0;i<=3;i++)
    {
    	printf("     |");
    	printf("H");
    	printf("|");
    	printf("\n");
	}
    printf("/-----------\\\n");
	printf("I<<<<<X>>>>>I\n");
    printf("\\-----------/\n");
    for (i=0;i<=12;i++)
    {
    	printf("     |");
    	printf("H");
    	printf("|");
    	printf("\n");
	}
	printf("      V\n");
	system("pause");
	system("CLS");
	printf("�п�J�K�X(2025):");
	scanf("%d",&password);
	system("CLS");
	if (password==2025)//�P�_�K�X
	{//�D��� 
		printf("  ~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("  I  a.�e�X�����T����  I\n");
		printf("  I  b.��ܭ��k��      I\n");
		printf("  I  c. ����           I\n");
		printf("  ~~~~~~~~~~~~~~~~~~~~~~\n");
	}
}
