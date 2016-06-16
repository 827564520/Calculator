//
//  String.c
//  Calculator-C
//
//  Created by 李立 on 16/6/16.
//  Copyright © 2016年 李立. All rights reserved.
//

#include "String.h"
#include <string.h>



String *createString()
{
    String *string = (String *)malloc(sizeof(String));
    if (!string)
    {
        return NULL;
    }
    
    return string;
}


String *initString(char *_string, String *string)
{
    StringList str_list = stringList(_string);
    
    string->length = stringLength(str_list);
    string->string = str_list;
    
    return string;
}

void removeString(String *string)
{
    removeStringList(string->string);
    string->length = 0;
    free(string);
    string = NULL;
}


String *stringCopy(String *descStr, const String *srcStr)
{
    return NULL;
}

void printString(String *string)
{
    showStringList(string->string);
}

