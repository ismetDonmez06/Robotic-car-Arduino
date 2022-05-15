int data ;  

#define  motorR1 7
#define  motorR2 6
#define  motorRE 9
#define  motorL1 4
#define  motorL2 5
#define  motorLE 3


void setup() {
  // put your setup code here, to run once:
Serial1.begin(9600);
 pinMode(motorR1,OUTPUT);
  pinMode(motorR2,OUTPUT);
  pinMode(motorRE,OUTPUT);
  pinMode(motorL1,OUTPUT);
  pinMode(motorL2,OUTPUT);
  pinMode(motorLE,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial1.available()>0)
{
  data=Serial1.read();

  }
if(data=='1')
{
  ileri();
}
if(data=='2')
{
  geri();
}
if (data=='3')
{
  dur();
}
if (data=='5')
{
  sol();
}
if (data=='4')
{
  sag();
}



  

}


void sag(){
  digitalWrite(motorR1,LOW);
  digitalWrite(motorR2,HIGH);
  analogWrite(motorRE,250);
  digitalWrite(motorL1,HIGH);
  digitalWrite(motorL2,LOW);
  analogWrite(motorLE,250);
}



void sol(){
  digitalWrite(motorR1,HIGH);
  digitalWrite(motorR2,LOW);
  analogWrite(motorRE,250);
  digitalWrite(motorL1,LOW);
  digitalWrite(motorL2,HIGH);
  analogWrite(motorLE,250);
}


void ileri(){
  digitalWrite(motorR1,HIGH);
  digitalWrite(motorR2,LOW);
  analogWrite(motorRE,250);
  digitalWrite(motorL1,HIGH);
  digitalWrite(motorL2,LOW);
  analogWrite(motorLE,250);
}

void geri(){
  digitalWrite(motorR1,LOW);
  digitalWrite(motorR2,HIGH);
  analogWrite(motorRE,250);
  digitalWrite(motorL1,LOW);
  digitalWrite(motorL2,HIGH);
  analogWrite(motorLE,250);
}
void dur(){
  digitalWrite(motorR1,LOW);
  digitalWrite(motorR2,LOW);
  analogWrite(motorRE,250);
  digitalWrite(motorL1,LOW);
  digitalWrite(motorL2,LOW);
  analogWrite(motorLE,250);
}
