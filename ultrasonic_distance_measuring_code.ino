// define pins numbers
const int trigPin = 2;
const int echoPin = 5;

// define variables
long duration;
int distance;

void setup() 
{
  pinMode(trigPin, OUTPUT); // sets the trigpin as an output
  pinMode(echoPin, INPUT);  // sets the echopin as an input
  Serial.begin(9600); //starts the serial communication
 }

void loop()
{
   // clear the trigpin
   digitalWrite(trigPin, LOW);
   delayMicroseconds(10);

   // sets the trigpin on high state for 10 micro seconds
   digitalWrite(trigPin, HIGH);
   delayMicroseconds(20);
   digitalWrite(trigPin, LOW);

   // reads the echopin, returns the sound wave travel time in microseconds
   duration = pulseIn(echoPin, HIGH);

   // calculating the distance 
   distance= duration*0.034/2;

   // prints the distance on the serial monitor
   Serial.print("Distance: ");
   Serial.println(distance);
}


 
