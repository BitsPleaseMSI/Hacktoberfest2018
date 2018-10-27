// TASK
//
// Set the values of x , y , z such that the output will be 2, 2, 1

struct marks{
  int p:3;
  int c:3;
  int m:2;
};
void main(){
  int x =2;
  int y =2;
  int z =1;
  struct marks s={x,y,z};
  printf("%d %d %d",s.p,s.c,s.m);
}
