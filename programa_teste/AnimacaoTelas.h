void sequenciaTelas()
{
  display.clearDisplay(); // Clear the buffer
  display.display();
  delay(100);

//----------------------------------------------------------------------- INTRODUÇÃO
  
  
  drawGustavoSereno(50,0);    // Draw a small bitmap image
  for(int i=0;i<8;i++)
  {
    display.invertDisplay(false);
    delay(80);
    display.invertDisplay(true);
    delay(80);
  }

  display.startscrollright(0x00, 0x0F);
  delay(2650);
  display.stopscroll();
  delay(500);
  display.clearDisplay();
//---------------------------------------------------------------------- PRIMEIRA CENA  
  display.drawRoundRect(2, 32, 124,31,4, 1);
  display.setTextSize(1); 
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(5, 34);
//------------------"xxxxxxxxxxxxx"---    
  display.println(F("Ola! Como vai voce? "));
  display.setCursor(5, 44);
  display.println(F("Me chamo Gustavo"));
  display.setCursor(5, 54);
  display.println(F("Prazer em conhecer!"));
  
  for(int i=0;i<12;i++){
    drawGustavoFalando(90,0);
    delay(90);
    display.fillRoundRect(85, 0, 43,32 , 1, BLACK);
    drawGustavoSereno(90,0);
    delay(90);
    display.fillRoundRect(85, 0, 43,32 , 1, BLACK);
  }
  delay(2000);
//---------------------------------------------------------------------- SEGUNDA CENA  
  display.fillRoundRect(3, 33, 122,29,4, BLACK);
  display.setTextSize(1); 
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(5, 34);
//------------------"xxxxxxxxxxxxx"---    
  display.println(F("Vamos estudar ele_"));
  display.setCursor(5, 44);
  display.println(F("tronica? Voce vai "));
  display.setCursor(5, 54);
  display.println(F("se divertir!"));
  
  for(int i=0;i<12;i++){
    drawGustavoFalando(90,0);
    delay(90);
    display.fillRoundRect(85, 0, 43,32 , 1, BLACK);
    drawGustavoSereno(90,0);
    delay(90);
    display.fillRoundRect(85, 0, 43,32 , 1, BLACK);
  }
  delay(2000);
//---------------------------------------------------------------------- TERCEIRA CENA  
  display.fillRoundRect(3, 33, 122,29,4, BLACK);
  display.setTextSize(1); 
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(5, 34);
//------------------"xxxxxxxxxxxxx"---    
  display.println(F("Primeiro vamos"));
  display.setCursor(5, 44);
  display.println(F("apertar o botao!!"));
  display.setCursor(5, 54);
  display.println(F(""));
  
  for(int i=0;i<8;i++){
    drawGustavoBravo2(90,0);
    delay(90);
    display.fillRoundRect(85, 0, 43,32 , 1, BLACK);
    drawGustavoBravo(90,0);
    delay(90);
    display.fillRoundRect(85, 0, 43,32 , 1, BLACK);
  }
  drawGustavoBravo(90,0);

  delay(1000);
//---------------------------------------------------------------------- QUARTA CENA (BOTAO) 
  display.clearDisplay();
  aperteBotao();
  while(!digitalRead(sw_4)){
    drawBtPasso0(56,0);
    delay(90);
    display.fillRect(56, 0, 72,40 ,BLACK);
    drawBtPasso1(56,0);
    delay(90);
    display.fillRect(56, 0, 72,40 ,BLACK);
    drawBtPasso2(56,0);
    delay(90);
    display.fillRect(56, 0, 72,40 ,BLACK);
    drawBtPasso3(56,0);
    delay(90);
    display.fillRect(56, 0, 72,40 ,BLACK);
    drawBtPasso4(56,0);
    delay(90);
    display.fillRect(56, 0, 72,40 ,BLACK);
    drawBtPasso5(56,0);
    delay(90);
    display.fillRect(56, 0, 72,40 , BLACK);
    drawBtPasso4(56,0);
    delay(90);
    display.fillRect(56, 0, 72,40 , BLACK);
    drawBtPasso3(56,0);
    delay(90);
    display.fillRect(56, 0, 72,40, BLACK);
    drawBtPasso2(56,0);
    delay(90);
    display.fillRect(56, 0, 72,40, BLACK);
    drawBtPasso1(56,0);
    delay(90);
    display.fillRect(56, 0, 72,40, BLACK);
  }
//---------------------------------------------------------------------- QUINTA CENA 
  display.clearDisplay();
  display.drawRoundRect(2, 32, 124,31,4, 1);
  display.setTextSize(1); 
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(30, 44);
//------------------"xxxxxxxxxxxxx"---    
  display.println(F("Ola Mundo!!! "));
  drawGustavoSereno(50,0);
  delay(90);
  
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
    divider2 = melody[thisNote + 1];
    if (divider2 > 0) {
      noteDurations = (wholenotes) / divider2;
    } 
    else if (divider2 < 0) {
      noteDurations = (wholenotes) / abs(divider2);
      noteDurations *= 1.5; 
    }
    tone(5, melody[thisNote], noteDurations * 0.9);
    delay(noteDurations);
    noTone(5);
}

  delay(1000);
  }
