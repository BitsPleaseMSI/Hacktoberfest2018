// TASK
// Write code to find transpose of a 2D matrix
// Code Below

#inlcude<stdio.h>

void main(){
 int mat[3][3] = {{'1','2','3'},
                  {'0','2','1'},
                  {'3','2','1'}} ;
 int trans[3][3];
 int x,y;
  
  for(x=3,x>0,x--){
    for(y=3,y>0,y--){
     trans[x][y] = mat[y][x]; 
    }
  }
}
