//
//  StrList.h
//  Calculator-C
//
//  Created by 李立 on 16/6/16.
//  Copyright © 2016年 李立. All rights reserved.
//

/**
 *  字符串链表
 */

#ifndef StrList_h
#define StrList_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct StrNode
{
    char character;         //节点字符
    struct StrNode *next;   //指向下一个节点的指针
}StrNode;   //节点

typedef StrNode *StringList;

/**
 *  创建字符链表
 *
 *  @param string 输入字符串
 *
 *  @return 返回指向字符链表的首节点
 */
StringList stringList(char *string);

/**
 *  删除字符链表
 *
 *  @param strNode 字符链表首节点
 */
void removeStringList(StringList strNode);

/**
 *  输出字符串链表
 *
 *  @param strNode 字符串链表首节点
 */
void showStringList(StringList strNode);

/**
 *  获取长度
 *
 *  @param string 传入字符链表
 *
 *  @return 返回长度
 */
long stringLength(StringList string);

#endif /* StrList_h */



