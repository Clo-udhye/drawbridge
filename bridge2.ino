void setup() {
    Serial.begin(9600);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}

void loop() {
    int sensorValue_1, sensorValue_2;
    sensorValue_1 = analogRead(A0);
    sensorValue_2 = analogRead(A1);
    float distance_1 = 12343.85 * pow( sensorValue_1, -1.15);
    float distance_2 = 12343.85 * pow( sensorValue_2, -1.15);


    int value; //Photoresistor value
    value = analogRead(A3);

    if( value <= 50){
        digitalWrite(5,HIGH);
        digitalWrite(6,HIGH);
        digitalWrite(7,HIGH);
        digitalWrite(8,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(11,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(13,HIGH);
    }

    else{
        digitalWrite(5,LOW);
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
        digitalWrite(12,LOW);
        digitalWrite(11,LOW);
        digitalWrite(13,LOW);
    }

    Serial.println((distance_2 + distance_1)*2); //Current distance

    //Buzzer for road blocker
    if((distance_1 + distance_2)*2 <= 50 && (distance_1 + distance_2)*2 >= 46 ){
        tone(4, 1000, 1000);
        delay(2000);
        noTone(4);
    }

    //Buzzer for bridge: rings two times
    if((distance_1 + distance_2)*2 <= 30 && (distance_1 + distance_2)*2 >= 26){
        tone(4, 3000, 700);
        delay(1000);
        noTone(4);

        tone(4, 3000, 700);
        delay(1000);
        noTone(4); 
    }
}