#include<stdio.h>
//��һ���������ҵ�ĳһ����
//���ֲ����㷨
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	int left = 0;//���±�
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ���,�±��ǣ�%d", mid);
			break;
		}
		if (left > right)
		{
			printf("�Ҳ���%d");
		}
	}
	return 0;
}
////1!+2!+31
// �����ķ���
//int main()
//{
//	int i = 0;
//int n = 0;
//int ret = 1;
//int sum = 0;
//for (n = 1; n <= 3; n++)
//{
//	ret = ret * n;
//	sum = sum + ret;
//}
//printf("sum=%d\n", sum);
//return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}
//��n�Ľ׳�
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d", &n);//���������
//		for(i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		printf("%d", ret);
//	return 0;
//}
////do-whileѭ��
//int main()\
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i=i+1;
//	} while (i <= 10);
//		return 0;
//}


//int main()
//{
//	for (;;)for����1
//	{
//		printf("hehe\n");
//	}
//		return 0;
//	}
	//forѭ���еĳ�ʼ�����֣��жϲ��֣����������ǿ���ʡ�Եģ����ǲ������ѧʱʡ�ԣ����׵�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//forѭ�����顮ǰ�պ󿪡�д��
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)//�ж�;���ڷ�ɢ��
//	{
//		i++;//����
//	}
//	printf("%d\n", i);
//	return 0;
//}
//forѭ��
//int main()
//{
//	int i = 0;
//	//  ��ʼ��  �ж�     ����
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//	}
//	return 0;
//}


//int main()//ɸѡ������
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//		return 0;
//}
//int main()
//{
//	int ch = 0;
//	//while ((ch = getchar())!= EOF)//EOF�ļ�������־
//	//{
//	//	putchar(ch);
//	//}
//	//ʹ�ü�ֵ
//	int ret = 0;
//	char password[20] = {0};
//	printf("���������룺>");
//	scanf_s("%s", password,20);//�������룬�������password������
//	//����������"\n"
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	getchar();
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}