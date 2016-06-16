//
//  Config.h
//  Calculator-C
//
//  Created by 李立 on 16/6/13.
//  Copyright © 2016年 李立. All rights reserved.
//

#ifndef Config_h
#define Config_h

#include <stdio.h>

#define PRINT_LOG   (0) //打印日志
#define Log(msg)\
if (PRINT_LOG) printf("Log:%s\n",msg);


#endif /* Config_h */



