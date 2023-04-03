void setup() 
{
  // Configura o pino d13 como saída 
  pinMode(8, OUTPUT);
}

void loop() 
{
  // Configura o pino 8 como HIGH
  digitalWrite(8, HIGH);
  // Espera 1000 ms (1 segundo)
   delay(100);             
  // Configura o pino 8 como LOW
  digitalWrite(8, LOW);   
  // Espera 1000 ms (1 segundo)
  delay(100);            
}
