#include<stdio.h>
#include<stdlib.h>

int cmdHelp()
{
    printf( 
        "******************************Help*******************************\n"
        "*\t\t\t\t\t\t\t\t*\n"
        "*\tThis menu program is coded by Zhang Yu. Version 1.0\t*\n"
        "*\t\t\t\t\t\t\t\t*\n"
        "*\thelp\t\tShow the help list\t\t\t*\n"
        "*\tadd\t\tAdd two numbers together\t\t*\n"
        "*\tsub\t\tSubtraction of two numbers\t\t*\n"
        "*\tmul\t\tMultiplication of two numbers\t\t*\n"
        "*\tdiv\t\tThe number of division\t\t\t*\n"
        "*\tdate\t\tShow date and time\t\t\t*\n"
        "*\thello\t\tSay hello\t\t\t\t*\n"
        "*\tquit\t\tQuit menu program\t\t\t*\n"
        "*\t\t\t\t\t\t\t\t*\n"
        "*****************************************************************\n\n"
        );            
    return 0;
}

int cmdHello()
{
    printf("Hello!This is cmd menu.\n");
    return 0;
}

double add(double a,double b)
{
    return a+b;
}

double sub(double a,double b)
{
    return a-b;
}

double mul(double a,double b)
{
    return a*b;
}

double div_(double a,double b)
{
    return a/b;
}

int main()
{
    char cmd[128];
    while (1)
    {
        printf("My_shell->");
        scanf("%s", cmd);
        if (strcmp(cmd, "help") == 0)
        {
            cmdHelp();
        }
        else if (strcmp(cmd, "add") == 0)           
        {
            printf("Please input two number(double):\n");                                  
            double a,b;                                                                                  printf("First number:\n");
            scanf("%lf",&a);  
            printf("Second number:\n");       
            scanf("%lf",&b);
            printf("%lf add %lf is %lf!\n",a,b,add(a,b));  
        }
        else if (strcmp(cmd, "sub") == 0)
        {
            printf("Please input two number(double):\n");
            double a,b;
            printf("First number:\n");
            scanf("%lf",&a);
            printf("Second number:\n");
            scanf("%lf",&b);
            printf("%lf sub %lf is %lf!\n",a,b,sub(a,b));
        }
        else if (strcmp(cmd, "mul") == 0)
        {
            printf("Please input two number(double):\n");
            double a,b;
            printf("First number:\n");
            scanf("%lf",&a);
            printf("Second number:\n");
            scanf("%lf",&b);
            printf("%lf sub %lf is %lf!\n",a,b,mul(a,b));
        }
        else if (strcmp(cmd, "div") == 0)
        {
            printf("Please input two number(double):\n");
            double a,b;
            printf("First number:\n");
            scanf("%lf",&a);
            printf("Second number:\n");
            scanf("%lf",&b);
            printf("%lf sub %lf is %lf!\n",a,b,div_(a,b)); 
        }
        else if(strcmp(cmd,"date") == 0)
        {
            system(cmd);
        }
        else if (strcmp(cmd,"hello") == 0){
            cmdHello();
        }
        else if (strcmp(cmd, "quit") == 0)
        {
            exit(0);
        }
        else
        {
            printf("Error: unsupported comman, you can use 'help' to get help\n"); 
        } 
    }

}
