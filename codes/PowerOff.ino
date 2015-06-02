 /*
  * IR TV Poweroff Utility
  * Author: Mert SARICA
  * E-mail: mert [ . ] sarica [ @ ] gmail [ . ] com
  * URL: http://www.mertsarica.com
 */
 
#include <IRremote.h>

IRsend irsend;

/* Samsung TV Power OFF */
unsigned int Samsung_OFF[68]={4700,4300,600,1650,550,1700,550,1650,650,400,600,500,650,450,550,500,550,550,550,1650,550,1700,550,1650,600,500,650,450,550,500,650,450,550,500,600,500,550,1650,600,500,550,500,650,450,650,400,650,450,650,450,650,1550,550,500,600,1650,650,1600,550,1650,600,1650,600,1650,600,1600,600};

/* Sony TV Power OFF */
unsigned int Sony1_OFF[26]={2350,650,1150,600,600,600,1150,600,600,600,1150,600,600,600,550,600,1200,600,550,600,600,600,550,600,600};
unsigned int Sony2_OFF[26]={2450,600,1200,600,550,600,1150,650,550,600,1200,600,550,600,600,600,1150,600,600,600,550,600,600,600,550};
unsigned int Sony3_OFF[26]={2400,650,1150,600,600,600,1150,600,600,600,1150,600,600,600,550,600,1200,600,550,600,600,600,550,600,600};

/* LG TV Power OFF */
unsigned int LG1_OFF[68]={9050,4400,650,550,550,550,550,1550,650,550,550,550,550,550,550,550,500,550,550,1650,600,1600,600,550,550,1600,600,1650,550,1600,600,1650,600,1600,600,550,550,550,550,550,550,1600,600,550,550,550,550,550,550,550,500,1650,600,1600,600,1600,600,600,500,1550,650,1600,600,1650,600,1600,600};
unsigned int LG2_OFF[4]={8900,2250,550};

/* Philips TV Power OFF */
unsigned int Philips_OFF[40]={2900,750,400,900,450,500,400,500,1400,1300,450,450,400,500,450,500,400,450,400,500,450,450,500,400,500,450,450,450,400,450,500,400,950,500,400,900,400,550,350};

/* Beko TV Power OFF */
unsigned int Beko1_OFF[24]={900,850,1800,900,850,900,850,900,900,850,900,900,850,900,850,900,850,1800,900,900,1750,900,900};
unsigned int Beko2_OFF[24]={850,900,1800,900,850,900,850,900,900,850,900,850,900,900,850,900,850,1750,950,900,1750,900,850};
unsigned int Beko3_OFF[24]={950,800,1800,900,850,900,850,900,900,850,900,900,850,900,1050,700,900,1750,900,900,1750,900,900};

/* Vestel TV Power OFF */
unsigned int Vestel_OFF[36]={8450,4300,500,1650,500,1650,500,600,450,600,500,550,500,550,500,600,450,550,500,1650,500,1650,500,1650,500,600,500,1600,500,600,500,550,500,550,500};

/* Panasonic TV Power OFF */
unsigned int Panasonic_OFF[76]={3650,1900,400,550,400,1450,450,500,450,500,400,550,400,550,400,550,400,500,450,500,400,550,400,550,400,550,400,550,400,1450,450,500,400,550,400,550,400,550,400,550,400,500,450,500,400,550,400,550,400,1500,400,500,450,500,400,550,400,550,400,550,400,550,400,550,400,500,450,1450,400,550,400,1500,400,1450,400};

/* Sharp TV Power OFF */
unsigned int Sharp1_OFF[32]={300,1850,250,800,250,800,250,800,250,800,250,800,300,1850,300,1850,250,800,300,1850,250,800,250,800,250,750,350,1850,250,800,250};
unsigned int Sharp2_OFF[32]={300,1850,250,800,250,800,250,800,250,800,250,800,300,1850,300,1850,250,800,300,1800,300,800,250,800,250,800,250,1850,250,800,300};
unsigned int Sharp3_OFF[32]={300,1850,250,800,250,800,250,800,250,800,250,800,300,1850,300,1800,300,800,250,1850,250,800,250,800,250,800,300,1850,250,800,250};

/* Sanyo TV Power OFF */
unsigned int Sanyo1_OFF[68]={9000,4450,550,1650,550,1650,600,500,600,500,550,1650,650,1550,600,550,500,550,550,600,600,450,550,600,500,550,550,600,500,550,550,550,550,550,550,550,550,550,500,550,650,450,600,500,600,550,600,450,550,550,650,1550,600,1600,600,1650,550,1650,550,1650,550,1650,600,1650,500,1700,550};
unsigned int Sanyo2_OFF[4]={8900,2250,500};
  
void setup()
{  
  Serial.begin(9600); 
}

void samsung_send_ir() {
  irsend.sendRaw(Samsung_OFF, 68, 38);
  delay(40);
}

void sony_send_ir() {
  irsend.sendRaw(Sony1_OFF, 26, 38);
  irsend.sendRaw(Sony2_OFF, 26, 38);
  irsend.sendRaw(Sony3_OFF, 26, 38);
  delay(40);
}

void lg_send_ir() {
  irsend.sendRaw(LG1_OFF, 68, 38);
  irsend.sendRaw(LG2_OFF, 4, 38);
  delay(40);
}

void philips_send_ir() {
  irsend.sendRaw(Philips_OFF, 40, 38);
  delay(40);
}

void beko_send_ir() {
  irsend.sendRaw(Beko1_OFF, 24, 38);
  irsend.sendRaw(Beko2_OFF, 24, 38);
  irsend.sendRaw(Beko3_OFF, 24, 38);
  delay(40);
}

void sharp_send_ir() {
  irsend.sendRaw(Sharp1_OFF, 32, 38);
  irsend.sendRaw(Sharp2_OFF, 32, 38);
  irsend.sendRaw(Sharp3_OFF, 32, 38);
  delay(40);
}

void panasonic_send_ir() {
  irsend.sendRaw(Panasonic_OFF, 76, 38);
  delay(40);
}

void vestel_send_ir() {
  irsend.sendRaw(Vestel_OFF, 36, 38);
  delay(40);
}

void sanyo_send_ir() {
  irsend.sendRaw(Sanyo1_OFF, 68, 38);
  irsend.sendRaw(Sanyo2_OFF, 4, 38);
  delay(40);
}

void loop() {
  samsung_send_ir();
  delay(40);
  sony_send_ir();
  delay(40); 
  lg_send_ir();
  delay(40);
  philips_send_ir();
  delay(40);
  vestel_send_ir();
  delay(40);
  beko_send_ir();
  delay(40);
  sharp_send_ir();
  delay(40);
  panasonic_send_ir();
  delay(40);
  sanyo_send_ir();
  delay(40);
}




