int pinoHorario = 3;
int pinoAntiHorario = 6;
float sensor;

void setup() 
{
 Serial.begin(9600);
 pinMode(5, OUTPUT); // Ativa a rotação do motor
 pinMode(pinoHorario, OUTPUT);
 pinMode(pinoAntiHorario, OUTPUT);
}

void loop() 
{
 sensor = analogRead(A0); // Leitura do LDR
 Serial.println(sensor); // Monitoramento 
 digitalWrite(5, HIGH);
  
 if(sensor > 100) // Sentido AntiHorário (ajustar a resistência)
 {
  digitalWrite(pinoHorario, LOW);
  delay(30);
  digitalWrite(pinoAntiHorario, HIGH);
  delay(7000); // Tempo para que o objeto seja separado
 }
 
 else // Sentido Horário
 {
  digitalWrite(pinoAntiHorario, LOW);
  delay(30);
  digitalWrite(pinoHorario, HIGH);
 }
 delay(10);
}
