/*********************************************************************
 **                                                                 **       
 **                          TÏTOL: Led Potenciometre               ** 
 **                                                                 **
 **                                                                 ** 
 **  Nom: Salva Ramírez                          Data: 26/01/2017   **
 ********************************************************************/
 
//************************ INCLUDE ***********************************


//*********************** VARIABLES **********************************


//************************* SETUP ************************************

const int analogPin = A0;
int value;      //variable que almacena la lectura analógica raw
int position;   //posicion del potenciometro en tanto por ciento
 
void setup() {
}



//************************** LOOP ************************************

void loop() {
 value = analogRead(analogPin); // realizar la lectura analógica raw
 position = map(value, 0, 1023, 0, 100);  // convertir a porcentaje
 
 //...hacer lo que se quiera, con el valor de posición medido
 
 delay(1000);
}




//************************ FUNCIONS **********************************
