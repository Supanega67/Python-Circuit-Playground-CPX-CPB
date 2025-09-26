const int analog_pin = A0;
const int LED = 9; 

int ADC_val = 0;
int brightness = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  ADC_val = analogRead(analog_pin);
  Serial.println(ADC_val);

  brightness = map(ADC_val, 0, 1023, 50, 255);

  if (ADC_val <= 341) {
    analogWrite(LED, brighness); 
    delay(1000);
    analogWrite(LED, 0);          
    delay(1000);
  } else if (ADC_val <= 682) {
    
    analogWrite(LED, brightness);
    delay(500);
    analogWrite(LED, 0);
    delay(500);
  } else {
    
    analogWrite(LED, brightness);
    delay(200);
    analogWrite(LED, 0);
    delay(200);
  }
}

