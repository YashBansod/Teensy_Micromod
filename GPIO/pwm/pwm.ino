const int pwm0 =  3;
const int pwm1 = 2;

void setup()   {
  pinMode(pwm0, OUTPUT);
  pinMode(pwm1, OUTPUT);
}

void loop()                     
{
  analogWriteFrequency(pwm0, 1000);
  
  analogWrite(pwm0, 50);
  analogWrite(pwm1, 100);

  delay(5e3);

  analogWriteFrequency(pwm0, 500);

  analogWrite(pwm0, 50);
  analogWrite(pwm1, 100);

  delay(5e3);
}
