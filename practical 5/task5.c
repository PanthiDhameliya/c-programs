#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    printf("The int range for char is from %d to %d\n ",CHAR_MIN,CHAR_MAX);
    printf("The size of char is=%zu\n",sizeof(char));
    printf("The int range is form %d to %d\n",INT_MAX,INT_MIN);
    printf("The size of int is=%zu\n",sizeof(int));
    printf("The unsigned int range is form %0 to %u\n",UINT_MAX);
    printf("The size of unsigned int is=%zu\n",sizeof(unsigned int));
    printf("The long range is form %ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("The size of long is=%zu\n",sizeof(long));
    printf("The  unsigned long rang is form %0 to %lu\n",ULONG_MAX);
    printf("The size of unsigned long is=%zu\n",sizeof(unsigned long));
    printf("The  long long range is form %lld to %lld\n",LLONG_MIN,LLONG_MAX);
    printf("The size of long long  is=%zu\n",sizeof(long long));
    printf("The  unsigned long long range is form %0 to %llu\n",ULLONG_MAX);
    printf("The size of unsigned long long is=%zu\n",sizeof(unsigned long long));
    printf("The  float  range is form %e to %e\n",FLT_MIN,FLT_MAX);
    printf("The size of float is=%zu\n",sizeof(float));
    printf("The  double range is form %e to %e\n",FLT_MIN,FLT_MAX);
    printf("The size of  double is=%zu\n",sizeof(double));
    printf("The  long double range is form %Le to %Le\n",LDBL_MIN,LDBL_MAX);
    printf("The size of long double is=%zu\n",sizeof(long double));




}




