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
	system("CLS");
	while (1)
		{	//�D��� 
			printf("  ~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("  I  a.�e�X�����T����  I\n");
			printf("  I  b.��ܭ��k��      I\n");
			printf("  I  c. ����           I\n");
			printf("  ~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("�п�J:");
			scanf("%s",&key);
			if (key=='a'||key=='A')//�����r��A�Ba 
			{
				system("CLS");
				printf("��J�@�ӡ�a���졥n�����r��:");
				scanf("%s",&deta);
				while (deta>'n'||deta<'a')
				{	//a~n�H�~���s��J 
					printf("��J���~�Э��s��J:");
					scanf("%s",&deta);
				}

				int numHeight = deta - 'a' + 1;//�����T���� 
  				for(i = 1; i <= numHeight; i++)
				{
      				for(k = 0; k < numHeight - i; k++)
					{
            			printf(" ");
      				}
       				for(j = 0; j < i; j++)
					{
            			printf("%c", 'a' + j);
     				}
       				printf("\n");
				}
				system("pause");
				system("CLS");//�^��D��� 
			}
			if (key=='B'||key=='b')//�����r��B�Bb 
			{
				system("CLS");
				printf("��J�@��1~9�����n:");
				scanf("%d",&detb);
				for (i=1;i<=detb;i++)//���k�� 
				{
					for (j=1;j<=detb;j++)
					{
						printf("%d*%d=%2d ",j,i,i*j);
					}
					printf("\n");
				}
				system("pause");
				system("CLS");//�^��D��� 
			}
			if (key=='C'||key=='c')//�����r��C�Bc 
			{
				printf("Continue? (y/n)");
				scanf("%s",&yn);
				while (yn!='Y'&&yn!='y'&&yn!='N'&&yn!='n')//�P�_�j�p�gy,n 
				{
					printf("��J���~�Э��s��J:");
					scanf("%s",&yn);					
				}
				if (yn=='y'||yn=='Y')//Y�^��D��� 
				{
					system("CLS");
					continue; 
				}
				else if (yn=='n'||yn=='N')//n���� 
				{
					return 0;
				}
				
			}
		}
	
}
