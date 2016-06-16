//
//  ApplicationMain.c
//  Calculator-C
//
//  Created by 李立 on 16/6/16.
//  Copyright © 2016年 李立. All rights reserved.
//

#include "ApplicationMain.h"
#include "String.h"

int ApplicationMain(int argc, const char **argv)
{
    //创建字符串
    String *string = createString();
    //初始化字符串
    string = initString("My name is Lili.", string);
    //求长度
    printf("length = %ld\n",string->length);
    //输出字符串
    printString(string);
    printf("\n");
    //删除字符串
    removeString(string);
    string = NULL;
    
    return 0;
}



