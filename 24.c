// Find value of y
int main()
{
  int x,n,y,X=1;
  printf("Enter x : ");
  scanf("%d",&x);
  printf("Enter n : ");
  scanf("%d",&n);
  if(n==1) printf("%d",1+x);
  else if(n==2) printf("%d",1+x/n);
  else if(n==3) 
  {
    for(int i=1 ; i<=n ; i++)
    X*=x;
    printf("%d",1+X);
  }
  else printf("%d",(n*x)+1);
  return 0;
}
