const int SENSOR_PIN = 2;// o pino Arduino conectado ao fio de saída (meio) do sensor
const int RELAY_PIN = 4; // o pino Arduino que está conectado ao controle do relé

void setup() {
  Serial.begin(9600); // configurar o Monitor Serial para exibir informações
   Serial.println("Arduino Tutorial");
   Serial.println("HC-SR501 sensor with relay");
  pinMode(SENSOR_PIN, INPUT); // Definir SENSOR_PIN como Entrada do sensor
  pinMode(RELAY_PIN, OUTPUT); // Definir RELAY_PIN como SAÍDA para o relé
}

void loop() {
  int motion =digitalRead(SENSOR_PIN);// ler o pino do sensor e armazená-lo na variável "motion"
 
  // se movimento for detectado
  if(motion){
    Serial.println("Motion detected");
    digitalWrite(RELAY_PIN, LOW);// // Ligar o relé
  }else{
     Serial.println("===nothing moves");
     digitalWrite(RELAY_PIN,HIGH); // Desligar o relé
  }
  delay(500);

}
