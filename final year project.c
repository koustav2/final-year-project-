int fn1 = 2; 

int br1 = 3;
int br2 = 4;
int br3 = 5;

int ent = 6;  //enmter key


int fn3 = 13;

int br4 = 12;
int br5 = 11;
int br6 = 10;

int fn4 = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(fn1,INPUT);
  pinMode(ent,INPUT);
  pinMode(fn3,INPUT);
  pinMode(fn4,INPUT);
  pinMode(br1,INPUT);
  pinMode(br2,INPUT);
  pinMode(br3,INPUT);
  pinMode(br4,INPUT);
  pinMode(br5,INPUT);
  pinMode(br6,INPUT);
}
int sum;
String wordb;

void loop()
{
  sum=0;
  while(digitalRead(ent)!=HIGH)
  {
    if(digitalRead(br1)==HIGH)
      sum=(sum*10)+1;
    if(digitalRead(br2)==HIGH)
      sum=(sum*10)+2;
    if(digitalRead(br3)==HIGH)
      sum=(sum*10)+3;
    if(digitalRead(br4)==HIGH)
      sum=(sum*10)+4;
    if(digitalRead(br5)==HIGH)
      sum=(sum*10)+5;
    if(digitalRead(br6)==HIGH)
      sum=(sum*10)+6;
    delay(100);
  }
  Serial.println(sum);
  delay(500);
  String let = letter(sum);
  //Serial.println(let);
  delay(100);
  wordb = wordb+let;
  Serial.println(wordb);
}
String letter(int a)
{
  if(a==0)
    return " ";
  if(a==1)
    return "A";
  if(a==12)
    return "B";
  if(a==14)
    return "C";
  if(a==145)
    return "D";
  if(a==15)
    return "E";
  if(a==124)
    return "F";
  if(a==1245)
    return "G";
  if(a==125)
    return "H";
  if(a==24)
    return "I";
  if(a==245)
    return "J";
  if(a==13)
    return "K";
  if(a==123)
    return "L";
  if(a==134)
    return "M";
  if(a==1345)
    return "N";
  if(a==135)
    return "O";
  if(a==1234)
    return "P";
  if(a==12345)
    return "Q";
  if(a==1235)
    return "R";
  if(a==234)
    return "S";
  if(a==2345)
    return "T";
  if(a==136)
    return "U";
  if(a==1236)
    return "V";
  if(a==2456)
    return "W";
  if(a==1346)
    return "X";
  if(a==13456)
    return "Y";
  if(a==1356)
    return "Z";
}