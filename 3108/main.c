/***************************************************************/
/*                                                             */
/*  DON'T MODIFY main function ANYWAY!                         */
/*                                                             */
/***************************************************************/

#include <stdlib.h>

#define N 10


//********** Specification of input **********
void input(int* p, int n)
/* PreCondition:
      p points to an array with n integers
   PostCondition:
      enter and store n integers into an array pointed by p
*/
{ //TODO: your function definition
  int i;
 for(i=0;i<n;i++)scanf("%d",p+i);}

//********** Specification of rotate **********
void rotate(int* p, int n, int m)
/* PreCondition:
      p points to an array with n integers, m is also an integer
   PostCondition:
      rotate m elements of an array
*/
{ //TODO: your function definition
int i,j,temp;for(i=0;i<m%n;i++){
for(j=n-2;j>=0;j--){
temp=*(p+j);*(p+j)=*(p+j+1);*(p+j+1)=temp;
}

}
}

//********** Specification of output **********
void output(int* p, int n)
/* PreCondition:
      p points to an array with n integers
   PostCondition:
      print each element of an array pointed by p in one line,
     with one blank between elements.
*/
{ //TODO: your function definition
int i;printf("%d",*p);for(i=1;i<n;i++)printf(" %d",*(p+i));}

/***************************************************************/

int main()
{ int a[N],n,m;
  scanf("%d%d",&n,&m);
//***** functions input, rotate, output are called here ******
  input(a,n);
  rotate(a,n,m);
  output(a,n);
//************************************************************
  return 0;
}
