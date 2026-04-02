void setup() {
  // put your setup code here, to run once:
// Definición de los pines para cada LED
const int ledRojo = 13;
const int ledAmarillo = 12;
const int ledVerde = 11;

void setup() {
  // Configurar los pines como salida
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // VERDE: Encendido por 5 segundos
  digitalWrite(ledVerde, HIGH);
  delay(5000);
  digitalWrite(ledVerde, LOW);

  // AMARILLO: Encendido por 2 segundos (Precaución)
  digitalWrite(ledAmarillo, HIGH);
  delay(2000);
  digitalWrite(ledAmarillo, LOW);

  // ROJO: Encendido por 5 segundos
  digitalWrite(ledRojo, HIGH);
  delay(5000);
  digitalWrite(ledRojo, LOW);
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
