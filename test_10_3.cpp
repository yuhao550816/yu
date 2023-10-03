#include<stdio.h>
//从一组数组中找到某一个数
//二分查找算法
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
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
			printf("找到了,下标是：%d", mid);
			break;
		}
		if (left > right)
		{
			printf("找不到%d");
		}
	}
	return 0;
}
////1!+2!+31
// 更简便的方法
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
//求n的阶乘
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d", &n);//不考虑溢出
//		for(i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		printf("%d", ret);
//	return 0;
//}
////do-while循环
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
//	for (;;)for变种1
//	{
//		printf("hehe\n");
//	}
//		return 0;
//	}
	//for循环中的初始化部分，判断部分，调整部分是可以省略的，但是不建议初学时省略，容易导致问
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//for循环建议‘前闭后开’写法
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)//判断;过于分散；
//	{
//		i++;//调整
//	}
//	printf("%d\n", i);
//	return 0;
//}
//for循环
//int main()
//{
//	int i = 0;
//	//  初始化  判断     调整
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//	}
//	return 0;
//}


//int main()//筛选出数字
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
//	//while ((ch = getchar())!= EOF)//EOF文件结束标志
//	//{
//	//	putchar(ch);
//	//}
//	//使用价值
//	int ret = 0;
//	char password[20] = {0};
//	printf("请输入密码：>");
//	scanf_s("%s", password,20);//输入密码，并存放在password数据中
//	//缓冲区还有"\n"
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	getchar();
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}