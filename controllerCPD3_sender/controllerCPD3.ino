/* to do: Buttons
 *  
 *  
 *  
 *  CPD3 controller by Hannes Andersson Donuan
 *  
 *  ///////CONNECTIONS///////////
 *  
 *  BUTTONS
 *   5v - Button - Resistor (10k) - Pin && GND
 *  
 *  KNOBS
 *   GND   - /
 *   APin  -|
 *   5v    - \
 *  
 *  
 *  //////////////////////////////////////////////////
*/

//Digital Pins (Buttons)
int dPin1 = 51;
int dPin2 = 52; 
int dPin3 = 53;
int dPin4 = 49; 
int dPin5 = 45;
int dPin6 = 48;
int dPin7 = 47;
int dPin8 = 46;

//Digital Pins (Toggles)
int dPin9 = 41;
int dPin10 = 40;
int dPin11 = 39;
int dPin12 = 38;
int dPin13 = 37;
int dPin14 = 36;
int dPin15 = 35;
int dPin16 = 34;

//Analogue Pins (Knobs) 
int aPin1 = A0; int aPin2 = A1; int aPin3 = A2; int aPin4 = A3; int aPin5 = A4; int aPin6 = A5; int aPin7 = A6; int aPin8 = A7; int aPin9 = A8; int aPin10 = A9;

// Stored Values
boolean old_b1; boolean old_b2; boolean old_b3; boolean old_b4; boolean old_b5; boolean old_b6; boolean old_b7; boolean old_b8;
boolean old_t1_1; boolean old_t1_2; boolean old_t2_1; boolean old_t2_2; boolean old_t3_1; boolean old_t3_2; boolean old_t4_1; boolean old_t4_2;
int old_k1; int old_k2; int old_k3; int old_k4; int old_k5; int old_k6; int old_k7; int old_k8; int old_k9; int old_k10;



void setup() {

  Serial.begin(9600); 
  Serial.println("CPD3_Initiated");
  
  //Digital Pins Set to Inputs (Buttons)
  pinMode(dPin1, INPUT);

}

void loop() {



  //KNOBS////////////////////

  //K1
  int k1 = analogRead(aPin1); 
  if( k1 == 0 && k1 != old_k1 || k1 == 1023 && k1 != old_k1) {
    Serial.print("/k1 "); 
    Serial.println(k1); 
    old_k1 = k1;
  }
  if( k1 - old_k1 > 20 || old_k1 - k1 > 20) {
    Serial.print("/k1 ");
    Serial.println(k1);
    old_k1 = k1;
    }

  //K2
  int k2 = analogRead(aPin2);
    if( k2 == 0 && k2 != old_k2 || k2 == 1023 && k2 != old_k2) {
    Serial.print("/k2 "); 
    Serial.println(k2); 
    old_k2 = k2;
  }
  if( k2 - old_k2 > 20 || old_k2 - k2 > 20) {
    Serial.print("/k2 ");
    Serial.println(k2);
    old_k2 = k2;
    }

  //K3
  int k3 = analogRead(aPin3);
  if( k3 == 0 && k3 != old_k3 || k3 == 1023 && k3 != old_k3) {
    Serial.print("/k3 "); 
    Serial.println(k3); 
    old_k3 = k3;
  }
  if( k3 - old_k3 > 20 || old_k3 - k3 > 20) {
    Serial.print("/k3 ");
    Serial.println(k3);
    old_k3 = k3;
    }

  //K4
  int k4 = analogRead(aPin4);
  if( k4 == 0 && k4 != old_k4 || k4 == 1023 && k4 != old_k4) {
    Serial.print("/k4 "); 
    Serial.println(k4); 
    old_k4 = k4;
  }  
  if( k4 - old_k4 > 20 || old_k4 - k4 > 20) {
    Serial.print("/k4 ");
    Serial.println(k4);
    old_k4 = k4;
    }    

  //K5
  int k5 = analogRead(aPin5);
  if( k5 == 0 && k5 != old_k5 || k5 == 1023 && k5 != old_k5) {
    Serial.print("/k5 "); 
    Serial.println(k5); 
    old_k5 = k5;
  }  
  if( k5 - old_k5 > 20 || old_k5 - k5 > 20) {
    Serial.print("/k5 ");
    Serial.println(k5);
    old_k5 = k5;
    }

  //K6
  int k6 = analogRead(aPin6);
  if( k6 == 0 && k6 != old_k6 || k6 == 1023 && k6 != old_k6) {
    Serial.print("/k6 "); 
    Serial.println(k6); 
    old_k6 = k6;
  }  
  if( k6 - old_k6 > 20 || old_k6 - k6 > 20) {
    Serial.print("/k6 ");
    Serial.println(k6);
    old_k6 = k6;
    }    

  //K7
  int k7 = analogRead(aPin7);
  if( k7 == 0 && k7 != old_k7 || k7 == 1023 && k7 != old_k7) {
    Serial.print("/k7 "); 
    Serial.println(k7); 
    old_k7 = k7;
  }  
  if( k7 - old_k7 > 20 || old_k7 - k7 > 20) {
    Serial.print("/k7 ");
    Serial.println(k7);
    old_k7 = k7;
    }

  //K8
  int k8 = analogRead(aPin8);
  if( k8 == 0 && k8 != old_k8 || k8 == 1023 && k8 != old_k8) {
    Serial.print("/k8 "); 
    Serial.println(k8); 
    old_k8 = k8;
  }  
  if( k8 - old_k8 > 20 || old_k8 - k8 > 20) {
    Serial.print("/k8 ");
    Serial.println(k8);
    old_k8 = k8;
    }
    
  //K9
  int k9 = analogRead(aPin9);
  if( k9 == 0 && k9 != old_k9 || k9 == 1023 && k9 != old_k9) {
    Serial.print("/k9 "); 
    Serial.println(k9); 
    old_k9 = k9;
  }  
  if( k9 - old_k9 > 20 || old_k9 - k9 > 20) {
    Serial.print("/k9 ");
    Serial.println(k9);
    old_k9 = k9;
    }

  //K10
  int k10 = analogRead(aPin10);
  if( k10 == 0 && k10 != old_k10 || k10 == 1023 && k10 != old_k10) {
    Serial.print("/k10 "); 
    Serial.println(k10); 
    old_k10 = k10;
  }  
  if( k10 - old_k10 > 20 || old_k10 - k10 > 20) {
    Serial.print("/k10 ");
    Serial.println(k10);
    old_k10 = k10;
    }    
        
  //BUTTONS////////////////////

  //B1
  int b1 = digitalRead(dPin1);
  if( b1 != old_b1) {
    Serial.print("/b1 ");
    Serial.println(b1);
    old_b1 = b1;
    }

  //B2
  int b2 = digitalRead(dPin2);
  if( b2 != old_b2) {
    Serial.print("/b2 ");
    Serial.println(b2);
    old_b2 = b2;
    }

  //B3
  int b3 = digitalRead(dPin3);
  if( b3 != old_b3) {
    Serial.print("/b3 ");
    Serial.println(b3);
    old_b3 = b3;
    }

  //B4
  int b4 = digitalRead(dPin4);
  if( b4 != old_b4) {
    Serial.print("/b4 ");
    Serial.println(b4);
    old_b4 = b4;
    }

  //B5
  int b5 = digitalRead(dPin5);
  if( b5 != old_b5) {
    Serial.print("/b5 ");
    Serial.println(b5);
    old_b5 = b5;
    }

  //B6
  int b6 = digitalRead(dPin6);
  if( b6 != old_b6) {
    Serial.print("/b6 ");
    Serial.println(b6);
    old_b6 = b6;
    }

  //B7
  int b7 = digitalRead(dPin7);
  if( b7 != old_b7) {
    Serial.print("/b7 ");
    Serial.println(b7);
    old_b7 = b7;
    }

  //B8
  int b8 = digitalRead(dPin8);
  if( b8 != old_b8) {
    Serial.print("/b8 ");
    Serial.println(b8);
    old_b8 = b8;
    }


  //TOGGLES////////////////////

  //T1_1
  int t1_1 = digitalRead(dPin9);
  if( t1_1 != old_t1_1) {
    Serial.print("/t1_1 ");
    Serial.println(t1_1);
    old_t1_1 = t1_1;
    }

  //T1_2
  int t1_2 = digitalRead(dPin10);
  if( t1_2 != old_t1_2) {
    Serial.print("/t1_2 ");
    Serial.println(t1_2);
    old_t1_2 = t1_2;
    }

  //T2_1
  int t2_1 = digitalRead(dPin11);
  if( t2_1 != old_t2_1) {
    Serial.print("/t2_1 ");
    Serial.println(t2_1);
    old_t2_1 = t2_1;
    }

  //T2_2
  int t2_2 = digitalRead(dPin12);
  if( t2_2 != old_t2_2) {
    Serial.print("/t2_2 ");
    Serial.println(t2_2);
    old_t2_2 = t2_2;
    }

  //T3_1
  int t3_1 = digitalRead(dPin13);
  if( t3_1 != old_t3_1) {
    Serial.print("/t3_1 ");
    Serial.println(t3_1);
    old_t3_1 = t3_1;
    }

  //T3_2
  int t3_2 = digitalRead(dPin14);
  if( t3_2 != old_t3_2) {
    Serial.print("/t3_2 ");
    Serial.println(t3_2);
    old_t3_2 = t3_2;
    }

  //T4_1
  int t4_1 = digitalRead(dPin15);
  if( t4_1 != old_t4_1) {
    Serial.print("/t4_1 ");
    Serial.println(t4_1);
    old_t4_1 = t4_1;
    }

  //T4_2
  int t4_2 = digitalRead(dPin16);
  if( t4_2 != old_t4_2) {
    Serial.print("/t4_2 ");
    Serial.println(t4_2);
    old_t4_2 = t4_2;
    }

    
  delay(1);
  
}
