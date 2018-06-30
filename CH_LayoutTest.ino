//This the important part, include the CH suffixed version instead of the normal one and the rest goes same as the original lib.
#include "DigiKeyboardCH.h"

void setup() {

}

void loop() {
  // this is generally not necessary but with some older systems it seems to prevent missing the first character after a delay:
  DigiKeyboardCH.sendKeyStroke(0);
  //Hello XYZ äöü +"*%&/()=?€``¦@#|¢''^´´~¨$!£[]{},;.:-_§°<>\ 
  //The Keys ÄÖÜ¬ are not supported
  
  DigiKeyboardCH.println("Hello XYZ äöü +\"*%&/()=?€``¦@#|¢''^´´~¨$!£[]{},;.:-_§°<>\\");
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  DigiKeyboardCH.delay(5000);
}
