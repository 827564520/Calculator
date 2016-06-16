//
//  StrList.c
//  Calculator-C
//
//  Created by 李立 on 16/6/16.
//  Copyright © 2016年 李立. All rights reserved.
//

#include "StrList.h"
#include "Config.h"

/**
 *  创建节点
 *
 *  @param ch 节点字符
 *
 *  @return 返回节点
 */
StrNode *createStrNode(char ch);


StrNode *createStrNode(char ch)
{
    //分配节点
    StrNode *strNode = (StrNode *)malloc(sizeof(StrNode));
    if (!strNode)
    {
        Log("分配节点失败!");
        return NULL;
    }
    
    strNode->character = ch;
    strNode->next = NULL;
    
    return strNode;
}

/**
 *  创建字符链表
 *
 *  @param string 输入字符串
 *
 *  @return 返回指向字符链表的首节点
 */
StrNode *stringList(char *string)
{
    long length = strlen(string);   //获取字符串长度
    
    StrNode *pTemp = NULL;  //游标
    //创建头节点
    StrNode *headNode = createStrNode(*string);
    if (!headNode)
    {
        Log("创建表失败!");
        return NULL;
    }
    
    pTemp = headNode;
    
    for (long i = 1; i < length; i++)
    {
        pTemp->next = createStrNode(*(string + i));
        if (!pTemp->next)
        {
            Log("创建表失败!");
            //销毁
            removeStringList(headNode);
            return NULL;
        }
        
        //交换
        pTemp = pTemp->next;
    }
    
    //字符串结束标志 '\0'
    pTemp->next = createStrNode('\0');
    if (!pTemp->next)
    {
        Log("创建表失败!");
        //销毁
        removeStringList(headNode);
        return NULL;
    }
    
    //返回头结点
    return headNode;
}

/**
 *  删除字符链表
 *
 *  @param strNode 字符链表首节点
 */
void removeStringList(StrNode *strNode)
{
    if (!strNode)
    {
        printf("字符链表为空!");
        return;
    }
    
    StrNode *pTemp = strNode;
    
    while (pTemp)
    {
        strNode = pTemp->next;
        free(pTemp);
        Log("节点已删除!");
        pTemp = strNode;
    }
}

/**
 *  输出字符串链表
 *
 *  @param strNode 字符串链表首节点
 */
void showStringList(StrNode *strNode)
{
    if (!strNode)
    {
        printf("字符链表为空!");
        return;
    }
    
    StrNode *pTemp = strNode;
    
    while (pTemp && pTemp->character != '\0')
    {
        printf("%c",pTemp->character);
        pTemp = pTemp->next;
    }
}

/**
 *  获取长度
 *
 *  @param string 传入字符链表
 *
 *  @return 返回长度
 */
long stringLength(StringList string)
{
    long l = 0;
    
    if (!string)
    {
        return l;   //空表
    }
    
    StringList pTemp = string;
    
    while (pTemp && pTemp->character != '\0')
    {
        l ++;
        pTemp = pTemp->next;
    }
    
    return l;
}







