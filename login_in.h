//
//  login_in.h
//  breakfast_list
//
//  Created by nate yip on 2019/12/16.
//  Copyright © 2019 nate yip. All rights reserved.
//

#ifndef login_in_h
#define login_in_h
#include "jiegou.h"
extern struct yonghu *head;
extern struct yonghu *now;
int  panduan_yh(char *a)
{
    now=head;
    int q=0;
    while (now!=NULL)
    {
        
        if(!strcmp(now->name,a))
        {
            q=1;
            break;
        }
        else now=now->next;
    }
    
    return q;

}


int  panduan_pw(char *b,char *a)
{
    int q=0;
    now=head;
    while(now!=NULL)
    {
        if(!strcmp(now->name,b))
            break;
        else now=now->next;
    }
    
    if(!strcmp(now->pw,a))
        q=1;
    return q;
    
}

#endif /* login_in_h */
