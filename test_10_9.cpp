#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	//shutdown -s 密令关机-t 60s
	//system()-执行系统命令的
	system("shutdown -s -t 60");
	again:
	printf("请注意，将在一分钟后关机，如果输入我我，就取消关机\n请输入>:");
	scanf_s("%s", input);
	if (strcmp(input, "我我") == 0)//strcmp比较两个字符串
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
//	goto again;//goto指跳到那里去
//	printf("111\n");
//again:
//	printf("222\n");
//	return 0;
//}
////#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////RAND_MAX-32767Z之间
//void menu()
//{
//	printf("********************\n");
//	printf("*1.play   0.exit   *\n"); 
//	printf("********************\n");
//}
//void game()
//{
////生成一个随机数字
//	int ret = 0;
//	int  guess = 0;;//接收猜的数字
//	//拿时间戳生成起始点
//	//time函数time_t
//	//NULL空指针//调用一次就可
//	//时间戳--当前计算机时间减去计算机的起始时间（1970.1.1.0：0：0）=（xxx）秒
// ret= rand()%100+1;//生成一个随机数字//生成1-100之间
//	//printf("%d\n",ret);
// //猜数字
// while (1)
// {
//	 printf("请猜数字:>");
//	 scanf_s("%d", &guess);
//	 if (guess > ret)
//	 {
//		 printf("猜大了\n");
//	 }
//	 else if (guess < ret)
//	 {
//		 printf("猜小了\n");
//	 }
//	 else
//	 {
//		 printf("恭喜你,猜对了\n");
//		 break;
//	 }
// }
//}
////猜数字游戏1.电脑生成一个随机数2.猜数字
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//NULL空指针//调用一次就可
//	do
//	{
//		menu();
//		printf("请选择>；");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//{
////乘法口诀表
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf(" %d*%d=%-2d", i, j, i * j);//%-2d左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}
//{
////求最大值
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//最大值//不能直接赋值max=0；
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
//	//求1/1+1/2-1/3+1/4-....+1/99-1/100
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
//打印100-200之间素数
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)//可以跳出偶数{i=101;i<=200;i+2}
//	{
//		//判断i是否为素数
//		//素数判断规则
//		//1.试除法
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
//判断闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//1.能被4整除且不能被100整除
//		//2.能被400整除是闰年
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