//
//  login_in.c
//  breakfast_list
//
//  Created by nate yip on 2019/12/16.
//  Copyright © 2019 nate yip. All rights reserved.
//


#include<stdio.h>
#include<string.h>

#include "main.c"


int  panduan_yh(char *a)
{
    int q=0;
    if(!strcmp(xs.name,a))
        q=1;
    return q;
    
}


int  panduan_pw(char *a)
{
    int q=0;
    if(!strcmp(xs.pw,a))
        q=1;
    return q;
    
}
