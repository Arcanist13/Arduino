//Clock library
#include <SoftI2C.h> // initialise required libraries
#include <DS3232RTC.h>
SoftI2C i2c(A4, A5); // assign pins to SDA and SCL
DS3232RTC rtc(i2c);

//Set pins for inputs/outputs
const int ledPin = 13;
const int buttonPin = 12;

//Initialise arrays (quick-access)
int birthdays[2][2]={{11,05},{12,05}};
int wakeAlm[]={7, 0, 0};

void setup()  {
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  
  //Clock initialisation
  rtc.readTime(&t);
  rtc.readDate(&d);
  int hour = t.hour
  int minute = t.minute
  int secon = t.second
  int day = t.day
  
  //Text-to-speech initialisation
  :N0      //Select text-to-speech voice style
  :V-6     //Set audio output volume (initial)
  :W110    //Set words per minute  
}

void loop(){    
  //Wake up check (sees if the time equates to alarm time
  if(hour==wakeAlm[0] && minute==wakeAlm[1] && second==wakeAlm[2] && day!=6 && day!=7){
      wakeUp();
  }
  //diagnositic check if button pressed
  if(digitalRead(buttonPin) == HIGH){
    :SStarting system diagnostics.
    diagnostics();
  }
}

void wakeUp(){
  //Alarm followed by voice output
  //Possible inclusion of temperature
  
  checkEvents();
}

void checkEvents(){
  //Check events on today (or important events on this week)
  //Events: birthdays, tests, exams, parties, to-do's etc...
}

void diagnostics(){
  //system check
  Serial.print("Checking text-to-speech shield...")
  Serial.print("Current settings: ")
  :C
  delay(4000);
  :D0
  delay(2000);
  for(int i=0, i < 10, i++){
    :Ni
    :SVoice test.
    delay(500);
  }
  delay(2000);
  Serial.print("Checking clock")
}
