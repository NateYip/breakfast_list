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
    char *houzhui=".txt";
    strcat(name, houzhui);
    char ben[100]="/Users/nateyip/Desktop/breakfast_list/yonghushuju/";
    strcat(ben,name);
    
    FILE *shuju=fopen(ben,"a");
    struct zhangben *xxsming,*reread,*head;
    head=NULL;
    
    char *yhsj;
    float  yhq;
    while(fscanf(shuju,"%s", yhsj)!=EOF)
    {
        
        xxsming=(struct zhangben *)malloc(sizeof(struct zhangben));
        strcpy(xxsming->ch, yhsj);
        fscanf(shuju,"%f", &yhq);
        xxsming->income_expense = yhq;
        fscanf(shuju,"%f", &yhq);
        xxsming->day = yhq;
        fscanf(shuju,"%s", yhsj );
        strcpy(xxsming->source_or_aim, yhsj);
        
        xxsming->next= NULL;
        
        if(head==NULL)
            head = xxsming;
        else reread->next=xxsming;
        xxsming=reread;
        free(reread);
        
    }
    fclose(shuju);
    struct zhangben *current;
    current=head;
    printf("输入删除的日期:\n");
    int day;
    scanf("%d",&day);
    struct zhangben *Pre;
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
    {
        Pre->next=current->next;
    }
    current= head;
    remove(shuju);
    fclose(shuju);
    FILE *rewrite;
    
    rewrite=fopen(name, "w");
    
    while (current!=NULL)
    {
        fprintf(rewrite, "%s",current->ch);
        fprintf(rewrite, "%f",current->income_expense);
        fprintf(rewrite, "%f",current->day);
        fprintf(rewrite, "%s",current->source_or_aim);
        current=current->next;
        
    }
    fclose(rewrite);
}

#endif /* delet_h */
