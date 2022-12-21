//函数测试.c

/*编译日志
2022.12.21 21：51 完成第一次编辑
*/

/*函数的组成
ret_type fun_name(paral, *)
{
    statement; //语句项
}

ret_type 返回类型
fun_name 函数名
paral    函数参数
*/

/*函数的参数
	--实际参数（实参）
	|	真实传给函数的参数叫实参。
	|	实参可以是：常量、变量、表达式、函数等。
	|	无论实参是何种类型的量，在进行函数调用时，它们都必须有确定的值，以便把这些值传给形参。

	--形式参数（形参）
	|	形式参数是指函数名后括号中的变量
	|	因为形式参数只有在函数被调用的过程中才实例化（分配内存单元），所以叫形式参数
	|	形式参数当函数调用完成之后就自动销毁了，因此形式参数值在函数中有效。
*/

/*函数的调用
	--传值调用
	|	函数的形参和实参分别占有不同的内存块，对形参的修改不会影响实参

	传址调用
	|	传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式
	|	这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量

*/

/*函数的嵌套调用和链式访问
	--嵌套调用
	|在一个函数体里调用另一个函数
	|例如
	|void add()
	|{
	|	del();
	|}

	--链式访问
	|将一个函数的返回值作为另一个函数的实参
	|例如
	|printf("%d",strlen("adc"));
*/

/*函数的声明和定义
	--函数声明
	|

	--函数定义
	|
*/




//代码练习区

#include <stdlib.h>
#include <stdio.h>


//1.交换函数
// void Swap2(int* x,int* y)
// {
// 	int tmp = 0;
// 	tmp = *x;
// 	*x = *y;
// 	*y = tmp;
// }

//2.判断素数函数
// int Prime(int num)
// {
// 	int i = 0;
// 	for(i=2;i<num;i++)
// 	{
// 		if( num%i == 0)
// 			return 1;	//仿函数返回值为 1 时，该数不为素数
// 	}
// 	return 0;	//当函数返回值为 0 时，该数为素数
// }

//3.判断闰年函数
// int Leapyear(int year)
// {
// 	if((year%4==0 && year%100!=0) || year%400==0)
// 		return 1;
// 	else
// 		return 0;
// }

//4.二分查找函数
// int Binarysearch(int n,int sz,int arr[])
// {
// 	int left = 0;
// 	int right = sz-1;
// 	int mid = 0;
// 	while(left <= right)
// 	{
// 		mid = (left+right)/2;
// 		if( n > arr[mid])
// 			left = mid+1;
// 		else if( n < arr[mid])
// 			right = mid-1;
// 		else
// 			return mid;
// 	}
// 	return -1;
// }

//5.迭加函数
// int Addloop()
// {
// 	static int num = 0;
// 	num++;
// 	return num;
// }



//主函数调用区

int main()
{
	// //交换函数
	// int a = 10;
	// int b = 20;
	// printf("a=%d b=%d\n", a,b);
	// Swap2(&a,&b);
	// printf("a=%d b=%d\n", a,b);

	// //判断素数
	// int n = 0;
	// scanf("%d", &n);
	// if(prime(n) == 0)
	// 	printf("是素数");
	// else
	// 	printf("不是素数");

	// //判断闰年
	// int x,y = 0;
	// printf("输入年份：");
	// scanf("%d",&x);
	// y=Leapyear(x);
	// if(y == 1)
	// 		printf("是闰年");
	// else
	// printf("不是闰年");

	//二分查找
	// int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	// int n = 0;
	// int sz = sizeof(arr)/sizeof(arr[0]);
	// //注意，不能在自定义函数里求通过形参传进的数组大小，即sizeof(arr)，必须要在数组所在的函数内部计算好后通过形参传给自定义函数
	// printf("请输入需要查找的数：");
	// scanf("%d", &n);
	// int ret = Binarysearch(n,sz,arr);
	// if(ret == -1)
	// 	printf("未找到");
	// else
	// 	printf("已找到，下标为：%d",ret);

	// //迭加函数
	// printf("%d\n",Addloop());
	// printf("%d\n",Addloop());
	// printf("%d\n",Addloop());
	// printf("%d\n",Addloop());

	// printf("%d\n",printf("%d\n",printf("%d\n",)));
	return 0;
}
