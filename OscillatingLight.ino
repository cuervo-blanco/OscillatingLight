int ledPin = 3;
int beatDuration = 60000 / 490;


void setup(){
        pinMode(ledPin, OUTPUT);
    }

void loop(){
        //Throbbing effect
        for (int i = 0; i < 255; i++) {
          analogWrite(ledPin, i);
          delay(beatDuration / 512);
            }
        for (int i = 255; i >= 0; i--){
          analogWrite(ledPin, i);
          delay(beatDuration / 512);
            }
    }
