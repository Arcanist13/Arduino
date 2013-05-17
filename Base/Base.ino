//Clock library
#include <SoftI2C.h> // initialise required libraries
#include <DS3232RTC.h>
SoftI2C i2c(A4, A5); // assign pins to SDA and SCL
DS3232RTC rtc(i2c);

//Set pins for inputs/outputs
const int ledPin = 13;
const int buttonPin = 12;

//Initialise arrays
const int birthdays[][2]={
  {18,01},{13,04}};
const int wakeAlm[]={
  7, 0, 0};
const char event[][3]={
  {25,12, "description"}};

void setup(){
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  
  //Clock initialisation
  rtc.readTime(&t);
  rtc.readDate(&d);
  int hour = t.hour
  int minute = t.minute
  int second = t.second
  int day = RTC::dayOfWeek(&d)
  
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
  //Alarm
  alarm();
  //Voice
  :sGood morning sir, how did you sleep last night?
  time();
  :sYour schedule today is as follows.
  checkEvents();
  //Possible inclusion of temperature
  cehckTemp();
}

void time(){
  days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  if(hour < 12){
    :sThe time is currently t.hour t.minute a m. It is days[RTC::dayOfWeek(&d)], t.day dash t.month dash t.year.
  }
  else{
    :sThe time is currently t.hour t.minute p m. It is days[RTC::dayOfWeek(&d)], t.day dash t.month dash t.year.
  }
}

void alarm(){
  
}

void checkTemp(){
  :sThe temperature outside is currently ... degrees.
  if(temp < 15){
    :sIt might be a good idea to take a jumper sir, it is a bit chilly.
  }
  else{
    :sIt should be a nice day outside, have a nice day sir.
  }
}

void checkEvents(){
  //Check events on today (or important events on this week)
  //Events: birthdays, tests, exams, parties, to-do's etc...
}

void diagnostics(){
  //system check
  Serial.print("Checking text-to-speech shield...");
  Serial.print("Current settings: ");
  :C
  delay(4000);
  :D0
  delay(2000);
  for(int i=0, i<10, i++){
    :Ni
    :SVoice test.
    delay(500);
  }
  delay(2000);
  Serial.print("Checking clock");
}
