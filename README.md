# Documentație librărie `Bitmi.h`

Această librărie oferă o interfață simplificată pentru controlul unui robot pe roți folosind Arduino.  
Clasa principală este **`Robot_Bitmi`**, care permite controlul direcțiilor de deplasare și rotație, folosind semnale PWM și registrul de deplasare.

---

## 📌 Utilizare de bază

```cpp
#include "Bitmi.h"

Robot_Bitmi robot;

void setup() {
  robot.Setup();  // inițializează pinii necesari
}

void loop() {
  robot.Forward(200);      // robotul merge înainte cu viteză 200
  delay(1000);
  robot.TurnLeft(150);     // se rotește spre stânga cu viteză 150
  delay(1000);
  robot.Stop();            // oprește robotul
  delay(1000);
}
```

---

## 📌 Funcțiile disponibile

### 🔧 Inițializare
```cpp
void Setup();
```
- Configurează automat toți pinii necesari pentru robot (`PWM1`, `PWM2`, `SHCP`, `EN_PIN`, `DATA_PIN`, `STCP`).
- Trebuie apelată în **`setup()`**.

---

### 🚗 Deplasare înainte
```cpp
void Forward(unsigned int speed);
```
- Robotul se deplasează **înainte**.  
- `speed` = valoare PWM între `0` și `255`.

---

### 🚗 Deplasare înapoi
```cpp
void Backward(unsigned int speed);
```
- Robotul se deplasează **înapoi**.  
- `speed` = valoare PWM între `0` și `255`.

---

### ↪️ Viraj la stânga
```cpp
void TurnLeft(unsigned int speed);
```
- Robotul virează **stânga**.  
- `speed` = valoare PWM între `0` și `255`.

---

### ↩️ Viraj la dreapta
```cpp
void TurnRight(unsigned int speed);
```
- Robotul virează **dreapta**.  
- `speed` = valoare PWM între `0` și `255`.

---

### ↖️ Deplasare în față stânga
```cpp
void TopLeft(unsigned int speed);
```
- Robotul merge **în față spre stânga** (mișcare diagonală).  
- `speed` = valoare PWM între `0` și `255`.

---

### ↙️ Deplasare în spate stânga
```cpp
void BottomLeft(unsigned int speed);
```
- Robotul merge **înapoi spre stânga** (mișcare diagonală).  
- `speed` = valoare PWM între `0` și `255`.

---

### ↗️ Deplasare în față dreapta
```cpp
void TopRight(unsigned int speed);
```
- Robotul merge **în față spre dreapta** (mișcare diagonală).  
- `speed` = valoare PWM între `0` și `255`.

---

### ↘️ Deplasare în spate dreapta
```cpp
void BottomRight(unsigned int speed);
```
- Robotul merge **înapoi spre dreapta** (mișcare diagonală).  
- `speed` = valoare PWM între `0` și `255`.

---

### ⛔ Oprire
```cpp
void Stop();
```
- Robotul se oprește complet (viteza devine `0`).

---

### 🔄 Contra-rotație
```cpp
void ContraRotate(unsigned int speed);
```
- Robotul se rotește pe loc în **sens invers acelor de ceasornic**.  
- `speed` = valoare PWM între `0` și `255`.

---

### 🔁 Rotație în sensul acelor de ceasornic
```cpp
void RotateClockwise(unsigned int speed);
```
- Robotul se rotește pe loc în **sensul acelor de ceasornic**.  
- `speed` = valoare PWM între `0` și `255`.

---

## 📌 Exemple practice

### Mers înainte și oprire
```cpp
robot.Forward(180);  // merge înainte cu viteză 180
delay(2000);         // timp 2 secunde
robot.Stop();        // oprește robotul
```

### Mișcare în diagonală
```cpp
robot.TopLeft(150);      // se deplasează în față stânga
delay(1500);
robot.BottomRight(150);  // se deplasează în spate dreapta
delay(1500);
robot.Stop();
```

### Rotație pe loc
```cpp
robot.RotateClockwise(200);  // se rotește la dreapta pe loc
delay(1000);
robot.ContraRotate(200);     // se rotește la stânga pe loc
delay(1000);
robot.Stop();
```

---

## 📌 Observații
- Valorile pentru `speed` trebuie să fie între **0 și 255** (semnal PWM).  
- Pentru mișcări line, se recomandă viteze între **100 și 200**.  
- Pentru rotații precise, folosește `RotateClockwise` și `ContraRotate` cu un `delay()` pentru controlul timpului.
