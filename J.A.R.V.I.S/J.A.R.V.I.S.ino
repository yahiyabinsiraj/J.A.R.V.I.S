#include <SD.h>
#include <SPI.h>
#include <TMRpcm.h>
#include <VoiceRecognitionV3.h>

#define SD_ChipSelectPin 53  
TMRpcm audio;   

VR myVR(10,11);
uint8_t buf[255];

void setup() {
 myVR.begin(9600);
 Serial.begin(115200);
 audio.speakerPin = 46;
 audio.setVolume(5);  
 pinMode(13,OUTPUT);
 if (!SD.begin(SD_ChipSelectPin)) {  
    return;
  }
 else{
    Serial.println("SD OK"); 
  }
}

void loop() {
 int ret;
  ret = myVR.recognize(buf, 50);
  if(ret>0){
    printVR(buf);
}
}

void printVR(uint8_t *buf)
{
  Serial.println(F("VR Index\tGroup\tRecordNum\tSignature"));
  Serial.print(buf[2], DEC);
  Serial.print(F("\t\t"));

  if(buf[0] == 0xFF){
    Serial.print(F("NONE"));
  }
  else if(buf[0]&0x80){
    Serial.print(F("UG "));
    Serial.print(buf[0]&(~0x80), DEC);
  }
  else{
    Serial.print(F("SG "));
    Serial.print(buf[0], DEC);
  }
  Serial.print(F("\t"));

  Serial.print(buf[1], DEC);
  Serial.print(F("\t\t"));
  if(buf[3]>0){
    printSignature(buf+4, buf[3]);
  }
  else{
    Serial.print(F("NONE"));
  }
  Serial.println(F("\r\n"));
  if(buf[2]==0){
    intro();
  }
  else if(buf[2]==1){
    at_service();
  }
  else if(buf[2]==2){
    reactor_on();
  }
  else if(buf[2]==3){
    delay(1500);
    I_LOVE_YOU_3000();
  }
  else if(buf[2]==4){
    jarvis_is_sad();
  }
}
void intro(){
 audio.setVolume(5);
 audio.play("INTRO.wav");
 delay(3000);
}

void at_service(){
    audio.play("ATSERV.wav");
    delay(2500);
}
  
void reactor_on(){

  for(int i=0;i<=255;i=i+5){
      analogWrite(13,i);
      delay(10);
  }
  
  analogWrite(13,255);
  audio.play("REACON.wav");
  delay(3000);

  analogWrite(13,0);
  delay(500);
  
  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(40);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(40);
  }
  analogWrite(13,0);
  delay(500);
  
  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(20);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(20);
  }
  analogWrite(13,0);
  delay(200);
  
  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(10);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(10);
  }

  analogWrite(13,0);
  delay(200);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(5);
  }
  
  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(5);
  }
  analogWrite(13,0);
  delay(200);
  
  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(2);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(2);
  }
  analogWrite(13,0);
  delay(100);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(2);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(2);
  }
  analogWrite(13,0);
  delay(100);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(2);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(2);
  }
  analogWrite(13,0);
  delay(100);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(2);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(2);
  }
  analogWrite(13,0);
  delay(100);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(2);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(2);
  }
  analogWrite(13,0);
  delay(100);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(2);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(2);
  }
  analogWrite(13,0);
  delay(100);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(2);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(2);
  }
  analogWrite(13,0);
  delay(100);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(2);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(2);
  }
  analogWrite(13,0);
  delay(100);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(2);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(2);
  }
  analogWrite(13,0);
  delay(100);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(2);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(2);
  }
  analogWrite(13,0);
  delay(100);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);

  for(int i=0;i<=100;i=i+5){
      analogWrite(13,i);
      delay(1);
  }

  for(int i=100;i>=0;i-=5){
      analogWrite(13,i);
      delay(1);
  }
  analogWrite(13,0);
  delay(50);
  
  for(int i=0;i<=255;i=i+5){
      analogWrite(13,i);
      delay(10);
  }
  
  analogWrite(13,255);
  audio.play("DEENLO.wav"); 
  delay(10000);
  
}
void I_LOVE_YOU_3000(){
  audio.play("ILU3000.wav");
  delay(3000);
}

void jarvis_is_sad(){
    audio.play("HEISSAD.wav");
    delay(15000);
}


void printSignature(uint8_t *buf, int len)
{
  int i;
  for(i=0; i<len; i++){
    if(buf[i]>0x19 && buf[i]<0x7F){
      Serial.write(buf[i]);
    }
    else{
      Serial.print(F("["));
      Serial.print(buf[i], HEX);
      Serial.print(F("]"));
    }
  }
}
