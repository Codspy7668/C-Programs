#include<stdio.h>
int main()
{
  int n, m, sum, rem, fact;
  printf("Enter an Integer: ");
  scanf("%d",&n);
  m = n;
  sum = 0;

  while(m!=0)
  {
    rem = m % 10;
    fact = 1;

    
    for(int i=1; i<=rem; i++)
    {
      fact *= i;
    }

    sum += fact;
    m /= 10;
  }

  if(sum == n)
  {
    printf("%d is Krishnamurthy Number.",n);
  }
  else
  {
    printf("%d is not a Krishnamurthy Number.",n);
  }

  return 0;
}
