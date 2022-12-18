//分支语句和循环语句测试.c

/*编译日志
2022.12.18
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

        ps：只能出现一次，但是可以放在switch代码块中任何位置


*/

/*循环语句
    --while
        语法结构
            while(条件表达式)
                循环语句;

        ps：break在while循环中遇到将停止后期的所有循环，直接终止循环
            continue在while循环中遇到将停止本次循环，不执行以后的语句进入下一个循环
    --for

    --do while

*/

/*goto语句

*/

//代码区











#include <stdio.h>

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


//switch练习代码
// int main(){
//     int n=1;
//     int m=2;
//     switch (n)
//     {
//     case 1: 
//         m++;
//     case 2: 
//         n++;
//     case 3:
//         switch (n)
//         {//switch 支持嵌套使用
//         case 1:
//             n++;
//         case 2:
//             m++;
//             n++;
//             break;
//         }
//     case 4:
//         m++;
//         break;
//     default:
//         break;
//     }

//     printf("m = %d\n n = %d", m,n);
//     return 0;
// }
