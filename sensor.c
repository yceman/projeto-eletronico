int PinRoj = 8; // Valor conectado na placa
int PinAzu = 9;
int PinVer = 10;
int PinTMP = 0;

int valorTMP = 0;

void setup() {
	pinMode(PinRoj, OUTPUT);
	pinMode(PinAzu, OUTPUT);
	pinMode(PinVer, OUTPUT);
	
	Serial.begin(9600);
	
	digitalWrite(PinRoj, HIGH);
	digitalWrite(PinAzu, LOW);
	digitalWrite(PinVer, LOW);
}

void loop() {
	valorTMP = analogRead(pinTMP);
	Serial.print("Valor TMP := ");
	Serial.println(valorTMP);
	
	if(valorTMP <= 125) {
		digitalWrite(PinRoj, LOW);
		digitalWrite(PinAzu, HIGH);
		digitalWrite(PinVer, LOW);
	}
	
	if(valorTMP > 125 and valorTMP <= 160) {
		digitalWrite(PinRoj, LOW);
		digitalWrite(PinAzu, LOW);
		digitalWrite(PinVer, HIGH);
	}
	
	if(valorTMP > 160) {
		digitalWrite(PinRoj, HIGH);
		digitalWrite(PinAzu, LOW);
		digitalWrite(PinVer, LOW);
	}
}