//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//                                                                         DRAW BITMAP
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
void drawGustavoSereno(int width, int height) {
  display.drawBitmap(width,height,gustavoSereno,40, 32, 1);
  display.display();
  delay(10);
}

void drawGustavoBravo(int width, int height) {
  display.drawBitmap(width,height,gustavoBravo,40, 32, 1);
  display.display();
  delay(10);
}

void drawGustavoBravo2(int width, int height) {
  display.drawBitmap(width,height,gustavoBravo2,40, 32, 1);
  display.display();
  delay(10);
}

void drawTelaTeste(int width, int height) {
  display.drawBitmap(width,height,telaTeste,128, 64, 1);
  display.display();
  delay(10);
}

void drawGustavoFalando(int width, int height) {
  display.drawBitmap(width,height,gustavoFalando,40, 32, 1);
  display.display();
  delay(10);
}

void drawBtPasso0(int width, int height) {
  display.drawBitmap(width,height,BtPasso0,72,40, 1);
  display.display();
  delay(10);
}
void drawBtPasso1(int width, int height) {
  display.drawBitmap(width,height,BtPasso1,72,40, 1);
  display.display();
  delay(10);
}
void drawBtPasso2(int width, int height) {
  display.drawBitmap(width,height,BtPasso2,72,40, 1);
  display.display();
  delay(10);
}
void drawBtPasso3(int width, int height) {
  display.drawBitmap(width,height,BtPasso3,72,40, 1);
  display.display();
  delay(10);
}
void drawBtPasso4(int width, int height) {
  display.drawBitmap(width,height,BtPasso4,72,40, 1);
  display.display();
  delay(10);
}
void drawBtPasso5(int width, int height) {
  display.drawBitmap(width,height,BtPasso5,72,40, 1);
  display.display();
  delay(10);
}

void aperteBotao(){
  display.setTextSize(1); 
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(5, 12);
//------------------"xxxxxxxxxxxxx"---    
  display.println(F("Aperte o"));
  display.setCursor(5, 22);
//------------------"xxxxxxxxxxxxx"---    
  display.println(F("botao"));
    display.setCursor(5, 32);
//------------------"xxxxxxxxxxxxx"---    
  display.println(F("SW_4!"));
  }

  
