/*********************************************************************
 **                                                                 **       
 **                          TÏTOL: Led Polsador                    ** 
 **                                                                 **
 **                                                                 ** 
 **  Nom: Salva Ramírez                          Data: 26/01/2017   **
 ********************************************************************/
 
//************************ INCLUDE ***********************************


//*********************** VARIABLES **********************************


//************************* SETUP ************************************

// Práctica encender y apagar un LED a través de botón pulsador
const int LED=13;
const int BOTON=7;
int val;
void setup(){
pinMode(LED,OUTPUT);
pinMode(BOTON,INPUT);
}


 
//************************** LOOP ************************************
void loop(){
val=digitalRead(BOTON);
 if  (val==HIGH){
digitalWrite(LED,HIGH);
}
else {
digitalWrite(LED,LOW);
}




//************************ FUNCIONS **********************************
