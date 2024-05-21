#define FIREBASE_HOST "gismo1-5fd64-default-rtdb.firebaseio.com/IOTLAB" //Do not include https:// in FIREBASE_HOST
#define FIREBASE_AUTH "n6jYzr1emwpzl1J3IKzFk1UQNWfCRtjAmVLwDPsx"
#define WIFI_SSID "2nd tirumala 2B"
#define WIFI_PASSWORD "tirumala@2b"
#include <Wire.h>
#include "SSD1306.h" 
#include "FirebaseESP32.h"
FirebaseData firebaseData;
SSD1306  display(0x3c, 21, 22);
