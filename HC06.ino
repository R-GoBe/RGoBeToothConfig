/* 
Connect
  BT ---- Arduino
  TX ----> RX
  RX <---- TX
*/
// Variables
int ArduLED = 13;				      //Internal Arduino´s LED
char ssid[10] = "Jnzds";	    // Name for Bluetooth.
char baudios   = '4';		      // 1=>1200 baudios, 2=>2400, 3=>4800, 4=>9600 (default), 5=>19200, 6=>38400, 7=>57600, 8=>115200
char password[10]	= "1234";		// Password for pairing

void setup(){
  Serial.begin(9600);		// 9600bauds is the deafult baudrate for these modules.
					              //if it´s not working try changing this baudrate to match your HC-06 initial setup
	// Waiting time (10 seconds) onboard LED is ON:
  pinMode(ArduLED,OUTPUT);
  digitalWrite(ArduLED,HIGH);
  delay(10000);
  digitalWrite(ArduLED,LOW);
	
  Serial.print("AT");
  delay(1000);               // Now configuration start
  Serial.print("AT+NAME");
  Serial.print(ssid);
  delay(1000);               // Change Name of BT
  Serial.print("AT+BAUD");
  Serial.print(baudios);
  delay(1000);               // Change Baud
  Serial.print("AT+PIN");
  Serial.print(password);
  delay(1000);	             // Change Password
}

void loop(){
	// After programing bluetooth, onboard LED will Blink.
	digitalWrite(ArduLED, !digitalRead(ArduLED));
	delay(500);
}
