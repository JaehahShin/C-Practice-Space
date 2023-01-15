// This is a calculator that can choose what value you want to calculate from resistance, voltage, or current
#include <stdio.h>

int main()  
{  
    char output;  
    float r = 0, v = 0, c = 0;
    int r1 = 0, c1 = 0;
    float res;
    printf (" Choose an operator(resistance, voltage, current) to perform the operation in ohm's law calculator\n ");  
    scanf ("%s", &output); // take an operator  
    if (output == "resistance" )  
    {  
        printf (" Mode: Resistance");  
    }  
    else if (output == "voltage")  
    {  
        printf (" Mode: Voltage");  
     }  
       
    else if (output == "current")  
    {  
        printf (" Mode: Current");  
     }  


  switch(output)  
    {  
    case 'r':  
    printf (" \n Value of voltage: ");  
    scanf(" %d", &v); 
    printf ("Value of current: ");  
    scanf (" %d", &c); 

            res = v / c;
            printf (" resistance is: %.2fohm", res);  
            break;  

    case 'c':
    printf (" \n Value of voltage: ");  
    scanf(" %d", &v); 
    printf ("Value of Resistance: ");  
    scanf (" %d", &r); 
            res = v / r;
            printf (" current is: %.2fA", res);


            break;
      
    case 'v':
    printf (" \n Value of Resistance: ");  
    scanf(" %d", &r1); 
    printf ("Value of current: ");  
    scanf (" %d", &c1); 
          res = r1 * c1;
          printf("Voltage is: %.2fv", res);
            break;

  default: 
            printf (" Something went wrong ");               
    }  
    return 0;  
    
}  


  
