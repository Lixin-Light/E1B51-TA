#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,k,password,wrong=0;
    char key,deta,detb,height,yn;
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
	while (password!=2025)//�P�_�K�X 
	{
		wrong++;
		if (wrong==3)
		{
			printf("���~�T��!");
			return 0;
		}
		printf("�п�J�K�X(2025):");
		scanf("%d",&password);
	}
	printf("�w��!\n");
	system("pause");
	system("CLS");
	
}
