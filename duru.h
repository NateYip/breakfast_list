//
//  duru.h
//  breakfast_list
//
//  Created by nate yip on 2019/12/16.
//  Copyright © 2019 nate yip. All rights reserved.
//

#ifndef duru_h
#define duru_h
#include "jiegou.h"

struct yonghu *p ,*q ;
int n;

void xiejinqu()
{
    
    
    extern struct yonghu *head;
    

    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        char yh[22];
        char mima[22];
        scanf("%s",yh);
        scanf("%s",mima);
        q=(struct yonghu*)malloc(sizeof(struct yonghu));
        strcpy(q->name, yh);
        strcpy(q->pw, mima);
        q->next=NULL;
        if( head==NULL)
            head=q;
        else p->next=q;
        p=q;
    }
    
}

#endif /* duru_h */
