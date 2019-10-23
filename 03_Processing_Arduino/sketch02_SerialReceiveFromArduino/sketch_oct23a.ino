int cnt1 =0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
//1초마다 pc로 숫자를 보내는 예제
void loop() {
  // put your main code here, to run repeatedly:
  char buf[255];
  sprintf(buf,"%d",cnt1);
  Serial.println(buf);
  cnt1++;

  delay(1000);
}
