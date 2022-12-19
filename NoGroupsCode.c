//未分类代码

/*编译日志
2022.12.19 23：32完成第一次编辑

*/




//代码区

#include <stdio.h>


//getchar()
// int main()
// {
//     int ret = 0;
// 	int ch = 0;
//     char passwd[20] = {0};
//     printf("请输入密码:>");
//     scanf("%s", passwd);        //scanf在读取输入缓冲区的内容时，只会读取\n（即回车）或空格前的内容，并不会读取\n和空格符
// 	//getchar();				//若要让ret能够被赋予通过getchar接收到在终端输入的字符，则要在此处再加个getchar()来将输入缓冲区内的\n或空格读取出来
// 	while( ch = getchar() != '\n')
// 	//若在scanf函数中输入了类似"123 asd"的数据时，则输入缓冲区内会剩下多个字符，而通过while循环读取输入缓冲区的字符直到将'\n'取出
// 	{;}
//     printf("请确认(Y/N)：");
//     ret = getchar();
// 	/*
// 	因为输入缓冲区在scanf读取完内容后还剩下'\n'
// 	getchar只读到了'\n'
// 	程序执行到这里不会给输入字符给getchar的时间
// 	而是会直接将'\n'赋给ret
// 	且此时ret值为10（因为\n的ASCII码为10）
// 	所以程序会直接运行完else语句后结束
// 	*/
//     if ( ret == 'Y')
//     {
//         printf("确认成功！");
//     }
//     else
//     {
//         printf("取消确认！");
//     }
//     return 0;
// }
//
/*总结：
当scanf函数和getchar函数连着一起使用时
一般要在需要被赋值的变量前再加个getchar()来将输入缓冲区内的'\n'取走
以保证需要被复制的变量能够正常用getchar函数通过终端输入来获取所需的字符
*/
