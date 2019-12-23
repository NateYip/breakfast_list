//
//  jiegou.h
//  breakfast_list
//
//  Created by nate yip on 2019/12/19.
//  Copyright © 2019 nate yip. All rights reserved.
//

#ifndef jiegou_h
#define jiegou_h


 struct yonghu
{
    char name[12];//学生姓名
    char pw[16];//此处为密码；
    struct yonghu *next;
};
/*
 struct yonghu xs= {
    .name="jian_jerry",
    .pw="wssbwsz",
    .next=NULL

};*/
#endif /* jiegou_h */
