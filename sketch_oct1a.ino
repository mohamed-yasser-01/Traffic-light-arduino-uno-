/*

simple traffic lights program

-first the green led pin will be set high.
-then there will be a delay of 15 sec.
-after these 15 sec the green led pin will be set low and the yellow led pin will be set high.
-then there will be a delay of 5 sec.
-after these 5 sec the yellow led pin will be set low and red led will be set high.
-then there will be a delay of 15 sec.
-after these 15 sec the red led will be set low and yellow light will be set high.
-etc.


/* A name for the LED on pin 8. */
int green = 8;
/* A name for the LED on pin 9. */
int yellow = 9;
/* A name for the LED on pin 10. */
int red = 10;

void setup() 
{
  
  /* Set LEDs green, yellow and red as output. */
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  
}

void loop()
{

    
    
 digitalWrite(yellow, LOW);
 digitalWrite(red, LOW);
 digitalWrite(green, HIGH);

delay(15000);

digitalWrite(green, LOW);
digitalWrite(red, LOW);
digitalWrite(yellow, HIGH);

delay(5000);

digitalWrite(yellow, LOW);
digitalWrite(green, LOW);
digitalWrite(red, HIGH);

delay(15000);

digitalWrite(red, LOW);
digitalWrite(green, LOW);
digitalWrite(yellow, HIGH);

delay(5000);


}

