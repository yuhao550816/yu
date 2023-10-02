#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar())!=EOF)//ctr1+z退出；EOF=end of file=-1;
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
//			continue;//跳过本次代码，继续循环
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
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default://建议放最后面
//		printf("输入错误\n");
//	}
//	return 0;
//}
//	switch (day)
//	{
//	case 1:
//			printf("星期一\n");
//			break;
//	case 2:
//				printf("星期二\n");
//				break;
//	case 3:
//					printf("星期三\n");
//					break;
//	case 4:
//						printf("星期四\n");
//						break;
//	case 5:
//							printf("星期五\n");
//							break;
//	case 6:
//								printf("星期六\n");
//								break;
//	case 7:
//									printf("星期天\n");
//									break;
//	}
//	return 0;
//}
//	if (1 == day)
//		printf("星期一\n");
//	else if (2 == day)
//		printf("星期二\n");
//	return 0;
//}
//判断一个数是否为奇数
//数出1-100之间的奇数
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
//推荐等于写法 常量放左边判断
//{
//		int num = 4;
//		if (5==num)//=是赋值 相等是==
//		{
//			printf("ehhe\n");
//		}
//		return 0;
//	}
//{
//	int num = 4;
//	if (num = 5)//=是赋值 相等是==
//	{
//		printf("ehhe\n");
//	}
//	return 0;
//}
//{
//	int age = 44;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("中年\n");
//	else if (age >= 50)
//		printf("老年\n");
//		return 0;
//}