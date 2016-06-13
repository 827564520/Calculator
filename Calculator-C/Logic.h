//
//  Logic.h
//  Calculator-C
//
//  Created by 李立 on 16/6/14.
//  Copyright © 2016年 李立. All rights reserved.
//

#ifndef Logic_h
#define Logic_h

#include <stdio.h>
#include <stdbool.h>


/**
 *  求异或运算
 *
 *  @param a 逻辑值、条件表达式、参与运算的值
 *  @param b 逻辑值、条件表达式、参与运算的值
 *
 *  @return 返回异或运算结果
 */
bool xrl(bool a, bool b);

/**
 *  求同或运算
 *
 *  @param a 逻辑值、条件表达式、参与运算的值
 *  @param b 逻辑值、条件表达式、参与运算的值
 *
 *  @return 返回同或运算结果
 */
bool xnor(bool a, bool b);



#endif /* Logic_h */





