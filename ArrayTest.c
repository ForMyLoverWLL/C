//数组学习.c
//定期更新

#include <stdio.h>

//创建数组并添加元素

int main()
{
    int array1[] = "abc";				//定义数组array1
	//int array2[] = {"a","b","c"};	
	//这样定义数组array2无法正常输出字符串abc，因为没有数组结束标识符\0，强行运行会输出abc+随机值（直到找到\0）
	int array2[] = {"a","b","c","0"};	//定义数组array2
	printf("%s\n%s\n",array1,array2);	//隔行输出数组array1和array2
	return 0;
}

//
