#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	//shutdown -s ����ػ�-t 60s
	//system()-ִ��ϵͳ�����
	system("shutdown -s -t 60");
	again:
	printf("��ע�⣬����һ���Ӻ�ػ�������������ң���ȡ���ػ�\n������>:");
	scanf_s("%s", input);
	if (strcmp(input, "����") == 0)//strcmp�Ƚ������ַ���
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
//{
//again:
//	printf("123\n");
//	goto again;//gotoָ��������ȥ
//	printf("111\n");
//again:
//	printf("222\n");
//	return 0;
//}
////#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////RAND_MAX-32767Z֮��
//void menu()
//{
//	printf("********************\n");
//	printf("*1.play   0.exit   *\n"); 
//	printf("********************\n");
//}
//void game()
//{
////����һ���������
//	int ret = 0;
//	int  guess = 0;;//���ղµ�����
//	//��ʱ���������ʼ��
//	//time����time_t
//	//NULL��ָ��//����һ�ξͿ�
//	//ʱ���--��ǰ�����ʱ���ȥ���������ʼʱ�䣨1970.1.1.0��0��0��=��xxx����
// ret= rand()%100+1;//����һ���������//����1-100֮��
//	//printf("%d\n",ret);
// //������
// while (1)
// {
//	 printf("�������:>");
//	 scanf_s("%d", &guess);
//	 if (guess > ret)
//	 {
//		 printf("�´���\n");
//	 }
//	 else if (guess < ret)
//	 {
//		 printf("��С��\n");
//	 }
//	 else
//	 {
//		 printf("��ϲ��,�¶���\n");
//		 break;
//	 }
// }
//}
////��������Ϸ1.��������һ�������2.������
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//NULL��ָ��//����һ�ξͿ�
//	do
//	{
//		menu();
//		printf("��ѡ��>��");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//{
////�˷��ھ���
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf(" %d*%d=%-2d", i, j, i * j);//%-2d�����
//		}
//		printf("\n");
//	}
//	return 0;
//}
//{
////�����ֵ
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//���ֵ//����ֱ�Ӹ�ֵmax=0��
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10;i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//{
//	//��1/1+1/2-1/3+1/4-....+1/99-1/100
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//��ӡ100-200֮������
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)//��������ż��{i=101;i<=200;i+2}
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϹ���
//		//1.�Գ���
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//�ж�����
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//1.�ܱ�4�����Ҳ��ܱ�100����
//		//2.�ܱ�400����������
//		if (year % 4 == 0&&year%100!=0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
////int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf_s("%d%d", &m, &n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n; 
//		n = r;
//	}
//	printf("%d", n);
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d " ,i);
//	}
//	return 0;
//}