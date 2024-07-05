#include<stdio.h>
#include<stdbool.h>
int main()
{
    float data=2.4f;
    float data1=44.56f;
    size_t s=sizeof(data);
    printf("size of: float %zu bytes\n",sizeof(s));
    printf("size of: float %llu bytes\n",sizeof(s));
    printf("data1=%f",data1);
    bool status=true;
    printf("%d",status);
    return 0;
}

