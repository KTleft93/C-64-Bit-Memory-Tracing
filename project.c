#include <stdio.h>
#include <string.h>

  int id=55;
  unsigned short bigNum=10000;
  float num=0.125;
  
 void Print(int a, int b, int c, int id2, int double d, float e, unsigned short bigNum2, float num2, int ans)
 {
 
  void *pointer;
  int address;
  void *baseptr;
  
  asm("mov %%rbp, %0;" :"=r"(baseptr));
  printf("The value of the basepointer of Print function is:\n");
  printf("The address stored at the basepointer of print function is: \n);
  Printf("The address of a is: %p\n" ,&a);
  Printf("The address of a is: %p\n" ,&b);
  Printf("The address of a is: %p\n" ,&c);
  Printf("The address of a is: %p\n" ,&id2);
  Printf("The address of a is: %p\n" ,&d);
  Printf("The address of a is: %p\n" ,&e);
  Printf("The address of a is: %p\n" ,&bigNum2);
  Printf("The address of a is: %p\n" ,&ans);
}

int main()
{

  int a=5;
  int b=10;
  int c=20;
  double d=12.45;
  float e=0.0125;
  int id2=id;
  unsigned short bigNum2=bigNum;
  float num2=num;
  int ans=((a+b+c)*d)/e;
  
  void *baseptr;
  asm("mov %%rbp, %0;" :"=r"(baseptr));
  printf("The value of the basepoint of main function is:\n");
  printf("%p\n" ,&baseptr);
  
  printf("The address of id is: %p\n" ,&id);
  printf("The address of bigNum is: %p\n" ,&bigNum);
  printf("The address of num is %p\n" ,&num);
  
  Print(a,b,c,id2,d,3,bigNum2,nums,ans);
  return 0;
