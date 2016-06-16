//
//  String.h
//  Calculator-C
//
//  Created by 李立 on 16/6/16.
//  Copyright © 2016年 李立. All rights reserved.
//

#ifndef String_h
#define String_h

#include <stdio.h>
#include "StrList.h"

/**
 *  字符串结构体
 */
typedef struct
{
    long length;        //字符串长度
    StringList string;  //字符串指针
}__String;

typedef __String *String;

/**
 *  创建字符串结构
 *
 *  @return 返回字符串结构
 */
String createString();

/**
 *  创建字符串结构体
 *
 *  @param _string 传入字符串
 *  @param string  传入指向字符串的结构指针
 *
 *  @return 返回字符串结构
 */
String initString(char *_string, String string);

/**
 *  删除字符串结构
 *
 *  @param string 被删除的字符串结构
 */
void removeString(String string);

/**
 *  字符串结构拷贝
 *
 *  @param descStr 目标字符串
 *  @param srcStr  源字符串
 *
 *  @return 返回新的字符串
 */
String stringCopy(String descStr, const String srcStr);

/**
 *  输出字符串
 *
 *  @param string 传入字符串结构
 */
void printString(String string);


#endif /* String_h */
