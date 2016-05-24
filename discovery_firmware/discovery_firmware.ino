const int analog_pins[] = {A0, A1, A2,A3};
const int digital_pins[] = {2,3,4,5,6,7,8,9};

const int led = 13;
bool led_state = false;

long then;
long now;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    for (int i; i < sizeof(analog_pins)/2; i++){
        pinMode(analog_pins[i], INPUT);
    }
    for (int i; i < sizeof(digital_pins)/2; i++){
        pinMode(digital_pins[i], INPUT);
    } 

    pinMode(led, OUTPUT);
    
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < sizeof(digital_pins)/2; i++){
    Serial.print(digitalRead(digital_pins[i]));
    Serial.print(" ");
  }
  
  Serial.println();
  
  for (int i = 0; i < sizeof(analog_pins)/2; i++){
    Serial.print(analogRead(analog_pins[i]));
    Serial.print(" ");
  }
  Serial.println();
  Serial.println("---------------------------");
  delay(500);
  }
