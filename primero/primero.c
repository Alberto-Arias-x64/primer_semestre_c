#include<p18f452.h>
void main (void)
{      

       TRISBbits.RB6=1;
       TRISBbits.RB7=1; // programado port B 
       TRISDbits.RD4=0;
       TRISDbits.RD5=0;
       TRISDbits.RD6=0; // programado port D 

       while(1) // generamos ciclo infinito 
    
       {  

           if (PORTBbits.RB6==0)
               
           {     
               if (PORTBbits.RB7==0)// RB6=0 y RB7=0 

                {  
                      PORTDbits.RD4=0;
                      PORTDbits.RD5=0;
                      PORTDbits.RD6=0;


                }

                else // RB6=0 y RB7=1

                {

                      PORTDbits.RD4=1;
                      PORTDbits.RD5=0;
                      PORTDbits.RD6=1;

                }   
 }

                else // RB6=1   

                {  
                      if (PORTBbits.RB7==0)// RB6=1 y RB7=0 

                {  
                      PORTDbits.RD4=1;
                      PORTDbits.RD5=1;
                      PORTDbits.RD6=0;


                }

                else // RB6=1 y RB7=1

                {

                      PORTDbits.RD4=1;
                      PORTDbits.RD5=1;
                      PORTDbits.RD6=1;

                }   


  
        
                }
       }
}
