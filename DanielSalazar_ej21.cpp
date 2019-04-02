#include <iostream>
#include <stdlib.h>
#include <cmath>
using std::cout;
using std::endl;

int main(){
    int x;
    int y;
    float pi= 3.141516;
      
    srand48(0);
    
    for (i=0; i<=1000; i++){
        
       x = 2*drand48()-1;
       y = 2*drand48()-1; 
        
       R = sqrt(x*x + y*y);  
    
       dx = x/R;
       dy = y/R;    
           
       x = x+dx;
       y = y+dy;
          
       cout << x << " " << y << endl;    
           
     
  }
    
     return 0;   
        
    
    }
    
    
