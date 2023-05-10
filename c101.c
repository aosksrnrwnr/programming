#include<stdio.h>
int main()
{
    int input_sec,hr,min,sec;
    printf("second:"), scanf("%d",&input_sec);
    hr = input_sec/3600;
    min = input_sec%3600/60;
    sec = input_sec%60;
    printf("%2d hours %2d mins %2d seconds\n ", hr,min,sec);
    return 0;
}