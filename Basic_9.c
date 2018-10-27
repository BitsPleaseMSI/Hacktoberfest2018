// TASK
// Write code to add 2 3D Matrix
// Code Below
#include<stdio.h>

void main(){
  int x,y,z;
 int arr1[2][2][3]= { { {'2','3','7'},
                       {'4','2','4'} 
                     }
                    , { {'4','3','2'},
                       {'4','2','3'}  
                      }
                    }
 int arr2[2][2][3]= { { {'6','3','9'},
                       {'4','6','4'} 
                     }
                    , { {'2','3','7'},
                       {'4','2','6'}  
                      }
                    }  
  int add[2][2][3];
  
  for(x=0,x<=3,x++){
   for(y=0,y<=3,y++){
    for(z=0,z<=3,z++){
      add[x][y][z] = arr1[x][y][z]+arr2[x][y][z];
    }
     
   }
    
    
  }
   
   
  
  
}
