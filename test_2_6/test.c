#include "stdio.h"
int main() {
// your code
  int num;
  scanf("%d",&num);
  if (num%3==0&&num%5==0&&num%7==0)
  {
    printf("%d能同时被3，5，7整除",num);
  }
  else if (num%3==0&&num%5==0)
  {
    printf("%d能同时被3,5整除",num);
  }
  else if (num%3==0&&num%7==0)
  {
    printf("%d能同时被3,7整除",num);
  }
  else if (num%5==0&&num%7==0)
  {
    printf("%d能同时被5，7整除",num);
  }
  else if (num%3==0&&num%5!=0&&num%7!=0)
  {
    printf("%d能被3整除",num);
  }
  else if (num%3!=0&&num%5==0&&num%7!=0)
  {
    printf("%d能被5整除",num);
  }
  else if (num%3!=0&&num%5!=0&&num%7==0)
  {
    printf("%d能被7整除",num);
  }
  else
  {
    printf("%d不能被3，5，7整除",num);
  }
}
