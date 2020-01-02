//
//  delet.h
//  breakfast_list
//
//  Created by nate yip on 2019/12/31.
//  Copyright © 2019 nate yip. All rights reserved.
//

#ifndef delet_h
#define delet_h
#include "jiegou.h"


void delete_project(char *name)
{
    /*
    char *houzhui=".txt";
    strcat(name, houzhui);
    char ben[100]="/Users/nateyip/Desktop/breakfast_list/yonghushuju/";
    strcat(ben,name);
    */
    
    FILE *deleshuju=fopen(name,"r");
    struct zhangben *xxsming,*reread,*delehead;
    delehead=NULL;
    
    char yhsj[30];
    float  yhq;
    while(fscanf(deleshuju,"%s", yhsj)!=EOF)
    {
        
        xxsming=(struct zhangben *)malloc(sizeof(struct zhangben));
        strcpy(xxsming->ch, yhsj);
        fscanf(deleshuju,"%f", &yhq);
        xxsming->income_expense = yhq;
        fscanf(deleshuju,"%f", &yhq);
        xxsming->day = yhq;
        fscanf(deleshuju,"%s", yhsj );
        strcpy(xxsming->source_or_aim, yhsj);
        
        xxsming->next= NULL;
        
        if(delehead==NULL)
            delehead = xxsming;
        else reread->next=xxsming;
        reread=xxsming;
        
    }
    fclose(deleshuju);
    struct zhangben *current;
    current=delehead;
    printf("输入删除的日期:\n");
    float day;
    scanf("%f",&day);
    struct zhangben *Pre = NULL;
    while (current != NULL && current->day != day)
    {
        Pre = current;
        current = current->next;
    }
    
    
    if (current == NULL)
    {
        printf("找不到匹配的选项\n");
        return;
    }
    else
        Pre->next=current->next;
    
    remove(name);

    FILE *rewrite;
    
    rewrite=fopen(name, "a");
    current= delehead;
    while (current!=NULL)
    {
        fprintf(rewrite, "%s\n",current->ch);
        fprintf(rewrite, "%f\n",current->income_expense);
        fprintf(rewrite, "%f\n",current->day);
        fprintf(rewrite, "%s\n",current->source_or_aim);
        current=current->next;
        
    }
    fclose(rewrite);
}

#endif /* delet_h */
