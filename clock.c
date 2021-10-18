#include <stdio.h>
#include<windows.h>

int main(){

    int h,m,s;
    int d=1000; // for set the timer and use for sleep function
    printf("Atur waktu:\n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>24 || m>60 || s>60)
    {
        printf("Error! \n");
        exit(0);
    }
    while(1)// this is for infinite loop
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
       if (m>59)
        {
           h++;
            m=0;
        }
        if (h>24)
        {
            h=0;
        }    
        printf("\n jam:");
        printf("\n %02d:%02d:%02d", h , m , s);// basic format fot 00:00:00
        Sleep(d); // function sleeps slow down and it looks like a real clock
        system("cls"); // for clearing the screen

    }
 }