#include <WiFi.h>
#include <M5StickC.h>
#include <efont.h>
#include "efontEnableJa.h"
#include "efontM5StickC.h"
int i=7;
void setup() {
M5.begin();
M5.IMU.Init();
M5.Lcd.setRotation(3);
M5.Lcd.setTextColor(WHITE,TFT_CYAN);
M5.Lcd.setTextSize(5);
M5.Axp.ScreenBreath(8);

}

void loop() {
  switch (i%7){
  case 0:
  { 
  M5.Lcd.setTextColor(WHITE,TFT_CYAN);
  printEfont("HA↗");
  WiFi.softAP(".HA↗HA↘HA↗HA↘ぺこぺこ");
  break;
  }
  case 1:
  { 
  M5.Lcd.setTextColor(TFT_CYAN,WHITE);
  printEfont("HA↘");
  WiFi.softAP(".HA↘HA↗HA↘ぺこぺこ");
  break;
  }
  case 2:
  { 
  M5.Lcd.setTextColor(WHITE,TFT_CYAN);
  printEfont("HA↗");
  WiFi.softAP(".HA↗HA↘ぺこぺこ");
  break;
  }
  case 3:
  { 
  M5.Lcd.setTextColor(TFT_CYAN,WHITE);
  printEfont("HA↘");
  WiFi.softAP(".HA↘ぺこぺこ");
  break;
  }
  case 4:
  { 
  M5.Lcd.setTextColor(WHITE,TFT_CYAN);
  printEfont("ぺこ");
  WiFi.softAP(".ぺこぺこ");
  break;
  }
  case 5:
  { 
  M5.Lcd.setTextColor(TFT_CYAN,WHITE);
  printEfont("ぺこ");
  WiFi.softAP(".ぺこ");
  break;
  }
  }
  delay(3000);
  M5.Lcd.setCursor(0,0);
  i++;
}
