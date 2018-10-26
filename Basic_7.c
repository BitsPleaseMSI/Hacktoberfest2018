// to reverse a string


void main()
{
int a,b,c;
  char d[20],e[20];
  cout<<"enter the string";
  gets(d);
  
  a = strlen(d);
  for(b=a;b>=0;b--)
  {
  e[b]=d[b-a];
  }
  cout<<"reversed string is";
  cout<<e;
}
