/*
 This method will display the characters for the
 word "Arduino" one after the other on the matrix. 
 (you need at least 5x7 leds to see the whole chars)
 */
void writeArduinoOnMatrix(int address) {
  /* here is the data for the characters */
  byte a[]={B01111110,B10001000,B10001000,B10001000,B01111110};
  byte r[]={B00111110,B00010000,B00100000,B00100000,B00010000};
  byte d[]={B00011100,B00100010,B00100010,B00010010,B11111110};
  byte u[]={B00111100,B00000010,B00000010,B00000100,B00111110};
  byte i[]={B00000000,B00100010,B10111110,B00000010,B00000000};
  byte n[]={B00111110,B00010000,B00100000,B00100000,B00011110};
  byte o[]={B00011100,B00100010,B00100010,B00100010,B00011100};

  /* now display them one by one with a small delay */
  lc.setColumn( address,0,a[0]);
  lc.setColumn( address,1,a[1]);
  lc.setColumn( address,2,a[2]);
  lc.setColumn( address,3,a[3]);
  lc.setColumn( address,4,a[4]);
  delay(delaytime);
  lc.setColumn( address,0,r[0]);
  lc.setColumn( address,1,r[1]);
  lc.setColumn( address,2,r[2]);
  lc.setColumn( address,3,r[3]);
  lc.setColumn( address,4,r[4]);
  delay(delaytime);
  lc.setColumn( address,0,d[0]);
  lc.setColumn( address,1,d[1]);
  lc.setColumn( address,2,d[2]);
  lc.setColumn( address,3,d[3]);
  lc.setColumn( address,4,d[4]);
  delay(delaytime);
  lc.setColumn( address,0,u[0]);
  lc.setColumn( address,1,u[1]);
  lc.setColumn( address,2,u[2]);
  lc.setColumn( address,3,u[3]);
  lc.setColumn( address,4,u[4]);
  delay(delaytime);
  lc.setColumn( address,0,i[0]);
  lc.setColumn( address,1,i[1]);
  lc.setColumn( address,2,i[2]);
  lc.setColumn( address,3,i[3]);
  lc.setColumn( address,4,i[4]);
  delay(delaytime);
  lc.setColumn( address,0,n[0]);
  lc.setColumn( address,1,n[1]);
  lc.setColumn( address,2,n[2]);
  lc.setColumn( address,3,n[3]);
  lc.setColumn( address,4,n[4]);
  delay(delaytime);
  lc.setColumn( address,0,o[0]);
  lc.setColumn( address,1,o[1]);
  lc.setColumn( address,2,o[2]);
  lc.setColumn( address,3,o[3]);
  lc.setColumn( address,4,o[4]);
  delay(delaytime);
  lc.setColumn( address,0,0);
  lc.setColumn( address,1,0);
  lc.setColumn( address,2,0);
  lc.setColumn( address,3,0);
  lc.setColumn( address,4,0);
  delay(delaytime);
}
