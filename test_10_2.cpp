#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar())!=EOF)//ctr1+z�˳���EOF=end of file=-1;
	{
		putchar(ch);
 }
	/*int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);*/
	return 0;
}
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;//�������δ��룬����ѭ��
//		printf("%d ", i);
//	}
//	return 0;
//}
//{
//	//while (1)
//	//	printf("heh\n");
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ",i);
//		i++;
//	}
//		return 0;
//}
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++;
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}
//{
//	int day;//3
//	scanf_s("%d\\n",&day);
//	switch(day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default://����������
//		printf("�������\n");
//	}
//	return 0;
//}
//	switch (day)
//	{
//	case 1:
//			printf("����һ\n");
//			break;
//	case 2:
//				printf("���ڶ�\n");
//				break;
//	case 3:
//					printf("������\n");
//					break;
//	case 4:
//						printf("������\n");
//						break;
//	case 5:
//							printf("������\n");
//							break;
//	case 6:
//								printf("������\n");
//								break;
//	case 7:
//									printf("������\n");
//									break;
//	}
//	return 0;
//}
//	if (1 == day)
//		printf("����һ\n");
//	else if (2 == day)
//		printf("���ڶ�\n");
//	return 0;
//}
//�ж�һ�����Ƿ�Ϊ����
//����1-100֮�������
//{
//	int i = 1;
//	//while (i <= 100)
//	//{
//	//	printf("%d ", i);
//	//	i += 2;
//	//}
//	while (i<=100);
//	{
//		if (i%2 == 1)
//		printf("%d ",i);
//	i++;
//	}
//	return 0;
//}
//�Ƽ�����д�� ����������ж�
//{
//		int num = 4;
//		if (5==num)//=�Ǹ�ֵ �����==
//		{
//			printf("ehhe\n");
//		}
//		return 0;
//	}
//{
//	int num = 4;
//	if (num = 5)//=�Ǹ�ֵ �����==
//	{
//		printf("ehhe\n");
//	}
//	return 0;
//}
//{
//	int age = 44;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("����\n");
//	else if (age >= 50)
//		printf("����\n");
//		return 0;
//}