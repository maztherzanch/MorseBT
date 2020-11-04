//Libreria que permite crear puertos seriales "Virtuales" en la placa
#include <SoftwareSerial.h>
//Asignamos un puerto serial "Virtual" para conectar el bluetooth
SoftwareSerial btSerial(2,3); //Rx,Tx

String cadena; //Almacena el mensage
char letra;
int dPunto = 100, dGuion = 300, dReposo=50, buzzer=4;
void setup() {
  Serial.begin(9600);
  btSerial.begin(9600);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  delay(100);
  serialEvent();
}

void serialEvent(){
  while(btSerial.available()){
    if(btSerial.available()>0){//Analiza si hay datos entrantes
      letra = btSerial.read();
      Serial.println(letra);    
      letras();
      delay(reposo);
    }
  }
}

void letras(){
  switch(letra){
    case 'a':
      a();
    break;
    case 'b':
      b();
    break;
    case 'c':
      c();
    break;
    case 'd':
      d();
    break;
    case 'e':
      e();
    break;
    case 'f':
      f();
    break;
    case 'g':
      g();
    break;
    case 'h':
      h();
    break;
    case 'i':
      i();
    break;
    case 'j':
      j();
    break;
    case 'k':
      k();
    break;
    case 'l':
      l();
    break;
    case 'm':
      m();
    break;
    case 'n':
      n();
    break;
    case 'o':
      o();
    break;
    case 'p':
      p();
    break;
    case 'q':
      q();
    break;
    case 'r':
      r();
    break;
    case 's':
      s();
    break;
    case 't':
      t();
    break;
    case 'u':
      u();
    break;
    case 'v':
      v();
    break;
    case 'w':
      w();
    break;
    case 'x':
      x();
    break;
    case 'y':
      y();
    break;
    case 'z':
      z();
    break;
  }
}

void punto(){
  digitalWrite(buzzer, HIGH);
  delay(dPunto);
}
void guion(){
  digitalWrite(buzzer,HIGH);
  delay(dGuion);
}
void espacio(){
  delay (500);
}
void reposo(){
  digitalWrite(buzzer, LOW);
  delay(dReposo);
}
void fin(){
  digitalWrite(buzzer, LOW);
}
//clases para cada letra
void a(){
  punto(); reposo();
  guion(); fin();
}

void b(){
  guion(); reposo();
  punto(); reposo();
  punto(); reposo();
  punto(); fin();
}

void c(){
  guion(); reposo();
  punto(); reposo();
  guion(); reposo();
  punto(); fin();
  
}

void d(){
 guion(); reposo();
 punto(); reposo();
 punto(); fin();
}

void e(){
  punto(); fin();
}

void f(){
  punto(); reposo();
  punto(); reposo();
  guion(); reposo();
  punto(); fin();
}

void g(){
  guion(); reposo();
  guion(); reposo();
  punto(); fin();
}

void h(){
  punto(); reposo();
  punto(); reposo();
  punto(); reposo();
  punto(); fin();
}

void i(){
  punto(); reposo();
  punto(); fin();
}

void j(){
  punto(); reposo();
  guion(); reposo();
  guion(); reposo();
  guion(); fin();
}

void k(){
  guion(); reposo();
  punto(); reposo();
  guion(); fin();
}

void l(){
  punto(); reposo();
  guion(); reposo();
  punto(); reposo();
  punto(); fin();
}

void m(){
  guion(); reposo();
  guion(); fin();
}

void n(){
  guion(); reposo();
  punto(); fin();
}

void o(){
  guion(); reposo();
  guion(); reposo();
  guion(); fin();
}

void p(){
  punto(); reposo();
  guion(); reposo();
  guion(); reposo();
  punto(); fin();
}

void q(){
  guion(); reposo();
  guion(); reposo();
  punto(); reposo();
  guion(); fin();
}

void r(){
  punto(); reposo();
  guion(); reposo();
  punto(); fin();
}

void s(){
  punto(); reposo();
  punto(); reposo();
  punto(); fin();
}

void t(){
  guion(); fin();
}

void u(){
  punto(); reposo();
  punto(); reposo();
  guion(); fin();
}

void v(){
  punto(); reposo();
  punto(); reposo();
  punto(); reposo();
  guion(); fin();
}

void w(){
  punto(); reposo();
  guion(); reposo();
  guion(); fin();
}

void x(){
  guion(); reposo();
  punto(); reposo();
  punto(); reposo();
  guion(); fin();
}

void y(){
  guion(); reposo();
  punto(); reposo();
  guion(); reposo();
  guion(); fin();
}

void z(){
  guion(); reposo();
  guion(); reposo();
  punto(); reposo();
  punto(); fin();
}
