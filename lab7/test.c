#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "linktable.h"
#include "menu.h"

int Add(int argc, char *argv[])
{
    int a,b;
    printf("Please input two integer numbers:\n");
    scanf("%d %d", &a, &b);
    int c = a + b;
    printf("The result of add cmd is:\n");
    printf("%d+%d=%d\n", a,b,c);
    return 0;
}

int Sub(int argc, char *argv[])
{
    int a,b;
    printf("Please input two integer numbers:\n");
    scanf("%d %d", &a, &b);
    int c = a - b;
    printf("The result of sub cmd is:\n");
    printf("%d-%d=%d\n", a,b,c);
    return 0;
}

int Multi(int argc, char *argv[])
{
    int a,b;
    printf("Please input two integer numbers:\n");
    scanf("%d %d", &a, &b);
    int c = a * b;
    printf("The result of mul cmd is:%d*%d=%d\n",a,b,c);
    //printf("%d*%d=%d\n", a,b,c);
    return 0;
}

int Divide(int argc, char *argv[])
{
    int a,b;
    printf("Please input two integer numbers:\n");
    scanf("%d %d", &a, &b);
    int c = a / b;
    printf("The result of div cmd is:\n");
    printf("%d/%d=%d\n", a,b,c);
    return 0;
}


int Time(int argc, char *argv[])
{
    time_t t = time(0);
    char temp[64];
    strftime(temp, sizeof(temp), "%Y/%m/%d %X %A", localtime(&t));
    puts(temp);
    return 0;
}

int Quit(int argc, char *argv[])
{
    exit(0);
}

int main(int argc, char *argv[])
{
    MenuConfig("version", "menu program v3.0", NULL);
    MenuConfig("add", "this is add cmd!", Add);
    MenuConfig("sub", "this is sub cmd!", Sub);
    MenuConfig("mul", "this is mul cmd!", Multi);
    MenuConfig("div", "this is div cmd!", Divide);
    MenuConfig("time", "this is time cmd!", Time);
    MenuConfig("quit", "this is quit cmd!", Quit);

    ExecuteMenu();
    return 0;
}
