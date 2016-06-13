//
//  Logic.c
//  Calculator-C
//
//  Created by 李立 on 16/6/14.
//  Copyright © 2016年 李立. All rights reserved.
//

#include "Logic.h"


bool xrl(bool a, bool b)
{
    return (!a && b) || (a && !b);
}

bool xnor(bool a, bool b)
{
    return !xrl(a, b);
}

