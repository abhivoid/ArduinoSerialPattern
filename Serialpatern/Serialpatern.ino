
void setup() { 
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.print("Enter the levels");
  

}

void loop() {
  int i,c,s;
int a[]={3,5,6,9,10};
  while(Serial.available()!=0)
  {
    i=Serial.parseInt();
    if(i==0)
    {
      for(c=0;c<5;c++)
      {
        analogWrite(a[c],0);
      }
    }
    c=0;
    while(i>0)
    {
      s=i%10;
      analogWrite(a[c],40*s);
      c++;
      i=i/10;
    }
    //delay(100);
  }
  
   
}
