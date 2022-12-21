//分支语句和循环语句测试.c

/*编译日志
2022.12.18 22：49 完成第一次编辑
2022.12.19 23：30 完成第二次编辑
2022.12.20 21：40 完成第三次编辑
2022.12.21 21：54 完成第四次编辑
*/



/*分支语句
    --if
        语法结构
	    --单分支
            if(表达式1)
		        语句1;
        --双分支 
            if(表达式1)
                语句1;
            else
                语句2;
        --多分支
            if(表达式1)
                语句1;
            else if(表达式2)
                语句2;
            else if(表达式3)
                语句3;
            ...
            else
                语句n;
        

        ps：else会与最近的未匹配的if匹配
            表达式中若是赋值语句,则永真
    
    -switch
        语法结构
            switch(整型表达式)
            {
                case 整型常量表达式:
                    语句;
                    break;
                default:    //处理非法语句
                    break;
            }

        ps：default只能出现一次，但是可以放在switch代码块中任何位置
*/

/*循环语句
    --while
        语法结构
            while(条件表达式)
                循环语句;

        ps：break在while循环中遇到将停止后期的所有循环，直接终止循环
            continue在while循环中遇到将停止本次循环，不执行以后的语句进入下一个循环

    --for
		语法结构
			for(表达式1;表达式2;表达式3)
			{
				循环体;
			}

		ps：表达式1为初始化部分，用于初始化循环变量，例如 i=0
			表达式2为条件判断部分，用于判断循环终止，例如 i<10
			表达式3为循环变量调整部分，用于调整循环变量值直到循环变量可终止循环，例如 i++
			break与continue作用与while中一致
			不可在for循环体内修改循环变量，防止for循环失去控制
			建议for语句的循环控制变量的取值采用“前闭后开区间”写法

    --do while
		语法结构
			do
				循环体；
			while(表达式);

		ps：break与continue作用与while中一致

*/

/*goto语句
    实现深层次跳出循环
        定义标签
    标签:
        goto 标签;
        
        ps：一般不会使用该语句，除非有多层嵌套循环语句时，可以利用该语句实现一次跳出多个循环
            相比break而言，在多层嵌套循环语句中，goto的作用更大
*/








//代码区
#define _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//分支语句--if
// int main()
// {
//     int age = 10;
    
//     //单分支
//     if(age < 18)
//         printf("未成年\n");
    
//     //双分支
//     if(age < 18)
//         printf("未成年\n");
//     else
//         printf("成年\n");
    
//     //多分支
//     if (age < 18)
//         printf("未成年\n");
//     else if (age >=18 && age <28)
//         printf("青年\n");
//     else if (age >=28 && age <50)
//         printf("中年\n");
//     else if (age >=50 && age <90)
//         printf("老年\n");
//     else
//         printf("神仙\n");

//     //else 会与最近的未被匹配的 if 匹配
//     if(age == 20)
//         if(age == 10)
//             printf("age = 10");
//     else
//         printf("age = 20");

//     //若表达式是赋值语句而非判断语句的话,则永真
//     if(age = 18)
//         printf("永真\n");

//     return 0;
// }


//分支语句--switch
// int main()
// {
//     int n = 0;
//     scanf("%d\n",n);

//     switch (n)
//     {
//     case 1:
//         printf("星期一"); 	 //当n=1时若此处无break;语句，则会执行其以下的所有case中的语句，直到都执行完成或遇到break;语句后跳出，其他case同理
// 		break;				//若此处有break;语句，则不会执行其以下的case中的语句并跳出，其他case同理
//     case 2:
//         printf("星期二");
//     case 3:
//         printf("星期三");
//     case 4:
//         printf("星期四");
//     case 5:
//         printf("星期五");
//         break;
//     case 6:
//         printf("星期六");
//     case 7:
//         printf("星期日");
//     default:    //处理非法语句，只能出现一次，但是能放在switch代码块里任何位置
//         printf("输入错误！");
//         break;
//     }

//     return 0;
// }


//循环语句--while
// int main()
// {
//     int i = 1;

//     while ( i <= 10)
//     {
//         //if( i == 5)
//         //  break;		//该行表示若i==5时停止并跳出该循环
// 		//	continue;	//该行表示若i==5时停止执行以后的语句并重新进入该循环
//         printf("%d ",i);
//         i++;
//     }

//     return 0;
// }


//循环语句--for
// int main()
// {
// 	int i = 0;

// 	for ( i = 1 ; i <= 10 ; i++)
//	//	  初始化	判断	调整
// 	{
// 		printf("%d ",i);
// 	}

// 	return 0;
// }


//循环语句-do while
// int main()
// {
// 	int i = 1;

// 	do
// 	{
// 		printf("%d ", i);
// 		i++;
// 	} while (i <= 10);
	
// 	return 0;
// }


//goto语句

// int main()
// {
//     int flag;
//     int i = 0;

// flag:
//     scanf("%d", &i);
//     if( i == 0)
//     {
//         printf("i = 0;\n");
//         goto flag;
//     }
//     else

//         return 0;
// }






//练习


//1.判断一个数是否是奇数
// int main()
// {
//     int i,j=0;
//     scanf("%d", &i);
//     j = i%2;
//     if (j == 1)
//         printf("该数是奇数！");
//     else if (j == 0)
//         printf("该数是偶数！");
//     return 0;
// }


//2.输出1-100之间的奇数
// int main()
// {
//     int i=0;
//     for(i=1;i<=100;i++)
//     {
//         if(i%2==1)
//             printf("%d ",i);
//         else 
//             continue;
//     }
//     return 0;
// }


//3.计算n的阶乘
// int main()
// {
// 	int n = 0;
// 	int i = 1;
// 	int a = 1;
// 	printf("请输入需要计算阶乘的数:>");
// 	scanf("%d", &n);
// 	for(i=1;i<(n+1);i++)
// 	{
// 		a = a*i;
// 	}
// 	printf("%d 的阶乘为：%d\n",n,a);
// 	return 0;
// }


//4.计算1!+2!+3!+...+10!
// int main()
// {
// 	int i,j =1;
// 	int a = 1;
// 	int b = 0;
// 	for( i=1 ; i<11; i++ )
// 	{
// 		a = a * i;
// 		b = a + b;
// 	}
// 	printf("1!+2!+3!+...+10!=%d",b);
// 	return 0;
// }


//5.在一个有序数组中查找具体的某个数字n
// int binsearch(int x,int v[],int n)
// {
// 	for ( n=0 ; n<10 ; n++)
// 	{
// 		if( x==v[n] )
// 		{
// 			printf("匹配成功，已找到该数，下标为：%d" ,n);
// 			break;
// 		}
// 		else if( n == 9)
// 		{
// 			printf("未找到该数！");
// 			break;
// 		}
// 		else
// 			printf("匹配失败，重新匹配中...\n");
// 	}
// }
//
// int main()
// {
// 	int arr[]={1,2,3,4,5,6,7,8,9,10};
// 	int x = 0;
// 	int n = 0;
// 	printf("输入需要查找的数：");
// 	scanf("%d",&x);
// 	binsearch(x,arr,n);
// 	return 0;
// }


//6.编写代码，演示多个字符从两端移动，向中间汇聚
// int main()
// {
// 	int i,j=0;
// 	int a=0;
// 	char x = '*';
// 	char arr[]="............................";
// 	a = sizeof(arr);
// 	for (i = 0,j = a-2;i<=a/2 && j>=a/2;i++,j--)
// 	{
// 		arr[i]=x;
// 		arr[j]=x;
// 		printf("%s\n",arr);
// 	}
// 	return 0;
// }
//
// int main()
// {
// 	int i,j=0;
// 	int a=0;
// 	char arr1[]="I love my girl wu ling ling!";
// 	char arr2[]="............................";
// 	a = sizeof(arr1);
// 	for (i = 0,j = a-2;i<=a/2 && j>=a/2;i++,j--)
// 	{
// 		arr2[i]=arr1[i];
// 		arr2[j]=arr1[j];
// 		Sleep(1000);
// 		system("cls");
// 		printf("%s\n",arr2);
// 	}
// 	return 0;
// }


//7.编写代码实现，模拟用户登录情景，并且只能登陆3次（只允许输入三次密码，如果提示登陆成功，如果三次均输入错误，则退出程序）
// int main()
// {
// 	printf("\t\t=====用户登录=====\n");
// 	printf("\t\t==用户名：Emmett==\n");
// 	printf("\t\t==================\n");
// 	printf("\t\t==登录======退出==\n");
// 	int i = 0;
// 	char pwd[20] = "123456";
// 	for ( i = 2; i >= 0; i--)
// 	{
// 		char upwd[20] = {0};
// 		printf("\t\t请输入密码：");
// 		scanf("%s",upwd);
// 		if( strcmp(pwd,upwd) == 1) //== 不能直接比较两个字符串是否相等，应该调用strcmp函数来比较
// 		{
// 			if( i == 0)
// 				{
// 					printf("\t\t密码错误次数过多，禁止登陆！");
// 					break;
// 				}
// 			printf("\t\t密码错误，你还有%d机会！\n",i);
// 			continue;
// 		}
// 		else
// 		{
// 			printf("\t\t登录成功！\n");
// 			break;
// 		}
// 	}
// 	return 0;
// }


//8.打印100~200之间的素数
// int main()
// {
//     1.试除法
//
//  
// 	int i=0;
// 	int count=0;
// 	for ( i=100;i<=200;i++ )
// 	{
//         int j = 0;
// 		for ( j=2;j<=i;j++ )
// 		{
// 			if( i%j == 0)
// 			{
// 				break;
// 			}
// 		}
//         if( i == j)
//         {
//             printf("%d ", i);
//             count++;
//         }
// 	}
//     printf("\n总共有 %d 个素数", count);
//     return 0;
//  
//
//     2.优化试除法 --利用开平方i缩小j遍历的范围，降低时间复杂度
//
//
//  int i=0;
// 	int count=0;
// 	for ( i=100;i<=200;i++ )
// 	{
//         int j = 0;
// 		for ( j=2;j<=sqrt(i);j++ )
// 		{
// 			if( i%j == 0)
// 			{
// 				break;
// 			}
// 		}
//         if( j > (sqrt(i)))
//         {
//             printf("%d ", i);
//             count++;
//         }
// 	}
//     printf("\n总共有 %d 个素数", count);
//     return 0;
//  
//
//     3.优化试除法 --利用偶数不可能是素数原理缩短i的遍历范围
//  
//  
//  int i=0;
// 	int count=0;
// 	for ( i=101;i<=200;i+=2 )
// 	{
//         int j = 0;
// 		for ( j=2;j<=sqrt(i);j++ )
// 		{
// 			if( i%j == 0)
// 			{
// 				break;
// 			}
// 		}
//         if( j > (sqrt(i)))
//         {
//             printf("%d ", i);
//             count++;
//         }
// 	}
//     printf("\n总共有 %d 个素数", count);
//     return 0;
// }


//9.计算1/1-1/2+1/3-1/4+1/5-...+1/99-1/100的和
// int main()
// {
//     int i=0;
//     double sum = 0.0;	//如果sum为整型，将无法输出小数
//     int flag = 1;
//     for( i=1;i<=100;i++)
//     {
//         sum += flag *1.0/i;
//         flag = -flag;   //实现加减交替
//     }
//     printf("sum = %lf", sum);
// }


//10.求十个整数中最大值
// int main()
// {
// 	int arr[10] = {};
// 	int i,n= 0;
// 	for (i=0;i<10;i++)
// 	{
// 		scanf("%d",&arr[i]);	//循环给数组赋值
// 	}
// 	int max = arr[0];	//max初始化不能为0，否则如果数组全是负数的话，只会输出0，应该给max赋值数组的首项
// 	for (i=0;i<9;i++)
// 	{
// 		if(max < arr[i])	//循环判断如果max小于数组中的元素，则将该元素赋值给max，直到max是最大的那个
// 		{
// 			max=arr[i];
// 		}
// 	}
// 	printf("max = %d",max);
// 	return 0;
// }


//11.打印九九乘法表
// int main()
// {
// 	int i,j=0;
// 	for ( i=1;i<10;i++)
// 	{
// 		for( j=1;j<=i;j++)
// 		{
// 			printf("%d * %d = %-2d ",j,i,i*j);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }


//12.猜数字游戏
// //--菜单函数
// int menu()
// {
// 	printf("======================\n");
// 	printf("===== 猜数字游戏 =====\n");
// 	printf("===== 1.开始游戏 =====\n");
// 	printf("===== 2.退出游戏 =====\n");
// 	printf("======================\n");
// 	return 0;
// }
// //--游戏函数
// int game()
// {
// 	int FLAG = 1;
// 	int x = random() % 100;
// 	int y = 0;
// 	while(FLAG == 1)
// 	{
// 		printf("请输入一个数：");
// 		scanf("%d",&y);
// 		if(y>x)
// 		{
// 			printf("太大了！\n");
// 			FLAG =1;
// 		}
// 		else if(y<x)
// 		{
// 			printf("太小了！\n");
// 			FLAG =1;
// 		}
// 		else
// 		{
// 			printf("恭喜你，猜对了！\n");
// 			FLAG = 0;
// 		}
// 	}
// 	int fl = 0;
// 	printf("是否再来一次？(1/2)：");
// 	scanf("%d",&fl);
// 	if( fl == 1)
// 	{
// 		FLAG = 1;
// 		return 1;
// 	}
// 	else( fl == 2);
// 		return 2;
// }
// //--主函数
// int main()
// {
// 	system("cls");
// 	int chs = 0;
// 	do
// 	{
// 		menu();
// 		printf("==============请选择：");
// 		scanf("%d",&chs);
// 		switch(chs)
// 		{
// 			case 1:
// 				chs = game();
// 				break;
// 			case 2:
// 				chs = 2;
// 				break;
// 			default:
// 				printf("输入错误！请重新输入\n");
// 				break;
// 		}
// 	}while (chs == 1);
// 	printf("欢迎下次游玩！");
// 	return 0;
// }
