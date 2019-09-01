#include<stdio.h>
#ifndef TYPEDEF
#define TYPEDEF


typedef enum
{
    SUCCESS,ERROR,VARIABLE_NOT_DEFINED,OUT_OF_BOUND,FILE_ERROR
}resultStatus;


typedef struct result
{
    float data;
    float subdata[5];
    resultStatus status;
    char error_info[100];
}Result;
typedef struct var
{
    float val;
    char name[30];
    struct var *next;
}Var;

#endif
