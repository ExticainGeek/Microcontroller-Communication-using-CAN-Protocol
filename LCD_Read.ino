#include <SPI.h>
#include <mcp2515.h>
#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>
LiquidCrystal_PCF8574 lcd(0x27);

struct can_frame canMsg;
MCP2515 mcp2515(10);


void setup() {
  Serial.begin(115200);
   Serial.println("LCD...");
  Wire.begin();
  Wire.beginTransmission(0x27);
  lcd.begin(20,4);
  lcd.setBacklight(255);
  lcd.home();
  lcd.clear();
  lcd.print("done");
  delay(1000);
  lcd.clear();

  mcp2515.reset();
  mcp2515.setBitrate(CAN_500KBPS);
  mcp2515.setNormalMode();
  
  Serial.println("------- CAN Read ----------");
  Serial.println("ID  DLC   DATA");
  lcd.println("Project By          Mihir Deshmukh      Atharva Thakare     Shruti Lahane");
  
}

void loop() {
  if (mcp2515.readMessage(&canMsg) == MCP2515::ERROR_OK) {
    Serial.print(canMsg.can_id, HEX); // print ID
   
    lcd.println(canMsg.can_id, HEX);
    Serial.print(" "); 
    Serial.print(canMsg.can_dlc, HEX); // print DLC
    lcd.println(canMsg.can_dlc, HEX);
    Serial.print(" ");
    
    
    for (int i = 0; i<canMsg.can_dlc; i++)  {  // print the data
      Serial.print(canMsg.data[i],HEX);
      lcd.println(canMsg.data[i], HEX);
      
      Serial.print(" ");
    }
    Serial.println();      
  }
}
