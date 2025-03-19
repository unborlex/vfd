
void          demo_var();
void          visualizar9();
void          apagado();
void          visualizar4();


const int vfd_clk = 25;
const int vfd_dat = 26;
const int vfd_str = 27;
unsigned char numeros9[] = {0b00010000,0b01110000,0b01011111,0b01011011,0b00110011,0b01111001,0b01101101,0b00110000, 0b01111110};          // 76543210 => Pabcdefg
unsigned char numeros4[] = {0b00000000,0b00000000,0b00000000,0b00000000,0b00000000,0b01111001,0b01101101,0b00110000, 0b01111110};          // 76543210 => Pabcdefg
int       ind = 0;

void setup()
{
            Serial.begin(115200);
            pinMode(vfd_clk, OUTPUT);  //definir pin como salida
            pinMode(vfd_dat, OUTPUT);  //definir pin como salida
            pinMode(vfd_str, OUTPUT);  //definir pin como salida
            digitalWrite(vfd_clk, HIGH);      // "0"
            digitalWrite(vfd_dat, HIGH);      // "0"
            digitalWrite(vfd_str, HIGH);      // "0"
           
}

void loop()
{
              
                         
                         visualizar9();       // 8 digitos con el brillo minimo  
                         //apagado();
                         //visualizar4();     // 4 digitos con mas billo                       
                         delay(1);
                         
             
}
void          visualizar9()      //posiblemente esten numeradas al reves las grillas
{
                      unsigned char  datos_vis;
                      datos_vis = numeros9[ind];      //  76543210 => Pabcdefg

                      
                      digitalWrite(vfd_dat, HIGH);      // "0" 3
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 4
                      demo_var();;
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 2
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( datos_vis & 0b01000000)    //76543210 => Pabcdefg   ***********  1  a  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( datos_vis & 0b00000010)    //76543210 => Pabcdefg   ***********  6  f  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"  

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( datos_vis & 0b00100000)    //76543210 => Pabcdefg   ***********  5  b  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"
                      
                      digitalWrite(vfd_dat, HIGH);      // "0"      
                      if( datos_vis & 0b00000001)    //76543210 => Pabcdefg   ***********  7 y 8  g  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"                    7
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"
                                            
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"                    8
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 11
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 12
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( datos_vis & 0b00000100)    //76543210 => Pabcdefg   ***********  10  e  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"
                      
                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( datos_vis & 0b00010000)    //76543210 => Pabcdefg   ***********  9  c  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 14
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"    

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( datos_vis & 0b00001000)    //76543210 => Pabcdefg   ***********  13  d  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 15
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 16
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      //****************** grillas **********************

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 2 )  //***********  19  grilla 3  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 3 )  //***********  20  grilla 4  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 1 )  //***********  18  grilla 2  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 0 )  //***********  17  grilla 1  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 5 )  //***********  22  grilla 6  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 4 )  //*********** 21  grilla 5  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 6 )  //***********  23  grilla 7  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 7 )  //***********  24  grilla 8  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 27
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 28
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 26
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 8 )  //***********  25  grilla 9  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"
    
                      digitalWrite(vfd_dat, HIGH);      // "0" 30
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"
                  
                      digitalWrite(vfd_dat, HIGH);      // "0" 29
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"  
  
                      digitalWrite(vfd_dat, HIGH);      // "0" 31
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"        

                      digitalWrite(vfd_dat, LOW);      // "0"    FILAMENTO
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"        
                      demo_var();
                      digitalWrite(vfd_dat, LOW);      // "0"    
                        
                      //********** genero STROBE *****************
                      demo_var();
                      digitalWrite(vfd_str, LOW);      // "1       GENERO STROBE     
                      demo_var();
                      digitalWrite(vfd_str, HIGH);      // "0"
                      demo_var();
                      // *********** incremento de puntero a datos y grilla    
                      ind++;
                      if(ind >= 9 )
                      {
                                ind = 0;
                      }
                      
  
}

void          visualizar4()               //posiblemente esten numeradas al reves las grillas
{
                      unsigned char  datos_vis;
                      datos_vis = numeros4[ind];      //  76543210 => Pabcdefg

                      
                      digitalWrite(vfd_dat, HIGH);      // "0" 3
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 4
                      demo_var();;
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 2
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( datos_vis & 0b01000000)    //76543210 => Pabcdefg   ***********  1  a  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( datos_vis & 0b00000010)    //76543210 => Pabcdefg   ***********  6  f  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"  

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( datos_vis & 0b00100000)    //76543210 => Pabcdefg   ***********  5  b  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"
                      
                      digitalWrite(vfd_dat, HIGH);      // "0"      
                      if( datos_vis & 0b00000001)    //76543210 => Pabcdefg   ***********  7 y 8  g  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"                    7
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"
                                            
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"                    8
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 11
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 12
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( datos_vis & 0b00000100)    //76543210 => Pabcdefg   ***********  10  e  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"
                      
                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( datos_vis & 0b00010000)    //76543210 => Pabcdefg   ***********  9  c  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 14
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"    

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( datos_vis & 0b00001000)    //76543210 => Pabcdefg   ***********  13  d  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 15
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 16
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      //****************** grillas **********************

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 2 )  //***********  19  grilla 3  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 3 )  //***********  20  grilla 4  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 1 )  //***********  18  grilla 2  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 0 )  //***********  17  grilla 1  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 5 )  //***********  22  grilla 6  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 4 )  //*********** 21  grilla 5  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 6 )  //***********  23  grilla 7  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 7 )  //***********  24  grilla 8  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 27
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 28
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 26
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"

                      digitalWrite(vfd_dat, HIGH);      // "0" 
                      if( ind == 8 )  //***********  25  grilla 9  *****************
                      {
                                    digitalWrite(vfd_dat, LOW);      // "1"                         
                      }
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"
    
                      digitalWrite(vfd_dat, HIGH);      // "0" 30
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"
                  
                      digitalWrite(vfd_dat, HIGH);      // "0" 29
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"  
  
                      digitalWrite(vfd_dat, HIGH);      // "0" 31
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"        

                      digitalWrite(vfd_dat, LOW);      // "1"    FILAMENTO
                      demo_var();
                      digitalWrite(vfd_clk, LOW);       // "1"
                      demo_var();
                      digitalWrite(vfd_clk, HIGH);      // "0"        
                      demo_var();
                      digitalWrite(vfd_dat, LOW);      // "0"    
                        
                      //********** genero STROBE *****************
                      demo_var();
                      digitalWrite(vfd_str, LOW);      // "1       GENERO STROBE     
                      demo_var();
                      digitalWrite(vfd_str, HIGH);      // "0"
                      demo_var();
                      // *********** incremento de puntero a datos y grilla    
                      ind++;
                      if(ind >= 9 )
                      {
                                ind = 5;
                      }
                      


  
}

void      demo_var()
{
         delayMicroseconds(2);
}
void      apagado()
{
                digitalWrite(vfd_clk, HIGH);      // "0"
                digitalWrite(vfd_dat, HIGH);      // "0"
                digitalWrite(vfd_str, HIGH);      // "0"                
                demo_var();
                for(int ss=0; ss<17; ss++)
                {
                            digitalWrite(vfd_clk, LOW);       // "1"
                            demo_var();
                            digitalWrite(vfd_clk, HIGH);      // "0"        
                            demo_var();                  
                }
                  //********** genero STROBE *****************
                demo_var();
                digitalWrite(vfd_str, LOW);      // "1       GENERO STROBE     
                demo_var();
                digitalWrite(vfd_str, HIGH);      // "0"
                demo_var();
          
}



/*chip 1   q1 filamento
 *chip 1   q2 31 nc  
 *chip 1   q3 29 nc
 *chip 1   q4 30 nc
 *chip 1   q5 25 grilla 9
 *chip 1   q6 26 nc
 *chip 1   q7 28 nc
 *chip 1   q8 27 nc 
 *
 *chip 2   q1 24 grilla 8
 *chip 2   q2 23 grilla 7
 *chip 2   q3 21 grilla 5
 *chip 2   q4 22 grilla 6 
 *chip 2   q5 17 grilla 1
 *chip 2   q6 18 grilla 2
 *chip 2   q7 20 grilla 4
 *chip 2   q8 19 grilla 3 
 * 
 *chip 3   q1 16
 *chip 3   q2 15  
 *chip 3   q3 13      d  
 *chip 3   q4 14
 *chip 3   q5 9       c
 *chip 3   q6 10      e
 *chip 3   q7 12
 *chip 3   q8 11 
 * 
 *chip 4   q1 8       g x 2
 *chip 4   q2 7       g x 2
 *chip 4   q3 5       b
 *chip 4   q4 6       f
 *chip 4   q5 1       a  
 *chip 4   q6 2
 *chip 4   q7 4
 *chip 4   q8 3  
 * 
 */
