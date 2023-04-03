
int Botao = 10;
void setup() 
{
   
  pinMode(Botao, INPUT);
  Serial.begin(9600);

}

void loop() 
{
    int Status = digitalRead(Botao);
    Serial.println(Status);
    delay(100);
}
