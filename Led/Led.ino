int ledPin = 4;     // LED que se encuentra en el pin 4
   void setup(){ 
   pinMode(ledPin, OUTPUT); // El p1n 4 será una salida digital 
} 
void loop(){ 
   digitalWrite(ledPin, HIGH);  // Enciende el LED
   delay(1000);         // Pausa de 1 segundo 
   digitalWrite(ledPin, LOW);   // Apaga el LED 
   delay(1000);       // Pausa de 1 segundo 
}
