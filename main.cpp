//
//  main.cpp
//  C++ program
//
//  Created by river on 16/3/29.
//  Copyright © 2016年 river. All rights reserved.
//

#include <iostream>
#include <stdio.h>

#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
  int select = -1;
    
    //1
    char    num[16] = {0};
    char    name[32] = {0};
    char    sex = 'm';
    int     age = 0;
    float   cscore = 0.0;
    float   mscore = 0.0;
    float   escore = 0.0;
    
    //显示系统名称
    printf("**********************\n");
    printf("学生信息管理系统\n");
    printf("**********************\n");
    //显示空行
    printf("\n");
    printf("\n");
    do {
        
    //显示菜单
    printf("********菜单*******\n");
    printf("1 添加学生信息\n");
    printf("2 显示学生信息\n");
    printf("3 查找学生信息\n");
    printf("4 保存学生信息\n");
    printf("5 读取学生信息\n");
    printf("0 退出学生系统\n");
    printf("***************\n");
    
    printf("请输入0-5\n");
    scanf("%d", &select );
    printf("您选择了%d\n", select);

    switch (select) {
        case 1:
            printf("您选择的是添加学生信息\n");
            break;
        case 2:
            printf("您选择的是显示学生信息\n");
            break;
        case 3:
            printf("您选择的是查找学生信息\n");
            break;
        case 4:
            printf("您选择的是保存学生信息\n");
            break;
        case 5:
            printf("您选择的是读取学生信息\n");

            break;
        case 0:
            printf("您选择的是退出学生信息\n");

            break;
            
        default:
            printf("输入错误，请输入（0～5）\n");

            break;
    }

    }
    while (select != 0) ;
    
    
    
   system("pause");
    
    return 0;
}
