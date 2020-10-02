// TASK
// Write code to find the average of the elements in an array
// Code Below
void avg(int ar[],int n){
  int s=0;
  for(int i=0;i<n;i++){
    s+=ar[i];
  }
  cout<<s/n;
}
