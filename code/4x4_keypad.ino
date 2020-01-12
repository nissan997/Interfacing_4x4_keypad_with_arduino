#include <Keypad.h>
const byte ROWS = 4;
const byte COLS = 4;
char hexakey[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
};

byte rowpins[ROWS] = {9,8,7,6};
byte colpins[COLS] = {5,4,3,2};

Keypad customKeypad = Keypad(makeKeymap(hexakey),rowpins,colpins,ROWS,COLS);
void setup()
{
  Serial.begin(9600);
}

void loop()
{
 char customkey = customKeypad.getKey();
  if (customkey){
 	 Serial.println(customkey);
  }
}
