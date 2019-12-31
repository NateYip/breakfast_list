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
    
    
 
    FILE *in;
    in=fopen("/Users/nateyip/Desktop/breakfast_list/durushuju/in.txt", "r");

    if(in==NULL) printf("wrong\n");
        else printf("open succeed\n");

    
    char shuju[22];
    //fscanf(in,"%d",&n);
    //printf("%d\n",n);
    while(fscanf(in,"%s",shuju)!=EOF)
    {
        q=(struct yonghu*)malloc(sizeof(struct yonghu));
        strcpy(q->name,shuju);
        //printf("%s",yh);
        
        fscanf(in,"%s",shuju);
        strcpy(q->pw, shuju);
       // printf("%s",mima);
        
       
        
        
        q->next=NULL;
        if( head==NULL)
            head=q;
        else p->next=q;
        p=q;

         
    }
   fclose(in);
}

#endif /* duru_h */
