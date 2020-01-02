//
//  getinput.h
//  breakfast_list
//
//  Created by nate yip on 2019/12/31.
//  Copyright © 2019 nate yip. All rights reserved.
//

#ifndef getinput_h
#define getinput_h
#include "jiegou.h"

void getinput(char *name)
{
    //reread_information(name);
    
    /*char ben[100]={"/Users/nateyip/Desktop/breakfast_list/yonghushuju/"};
    //char *houzhui=".txt";
    //strcat(name, houzhui);
    strcat(ben,name);
    */
    FILE *wenjian=fopen(name ,"a");
    printf("请输入'-'代表支出，‘+‘代表收入\n");
    char shujchar[30];
    float shujint;
    
    scanf("\n%s",shujchar);
    
    fprintf(wenjian,"%s\n", shujchar);
    printf("请输入收入或者支出金额\n");
    scanf("%f",&shujint);
    fprintf(wenjian,"%f\n", shujint);
    printf("请输入日期");
    scanf("%f",&shujint);
    
    fprintf(wenjian,"%f\n", shujint);
    printf("请输入支出或者收入原因\n");
    scanf("%s",shujchar);
    fprintf(wenjian,"%s\n",shujchar);
    
    
    fclose(wenjian);
}


#endif /* getinput_h */
