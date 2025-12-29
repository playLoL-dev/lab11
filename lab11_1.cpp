#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>

using namespace std;

int main() {
    // 1. วาง srand ไว้บรรทัดแรกสุดของ main เพื่อให้ระบบควบคุมการสุ่มได้ง่าย
    srand(time(0)); 

    cout << "Press Enter 3 times to reveal your future." << endl;
    
    // 2. ใช้ cin.get() แทน cin.ignore() เพื่อความชัวร์ในการดักจับการกด Enter
    cin.get(); 
    cin.get();
    cin.get();

    // 3. สร้าง Array ของเกรดเพื่อลดความซับซ้อนของ if-else
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    
    // 4. สุ่มตัวเลข 0 ถึง 8 (มีเกรดทั้งหมด 9 ตัว)
    int fortune = rand() % 9; 

    // 5. แสดงผล (เช็คช่องว่างและจุดทศนิยมให้ตรงตามตัวอย่างในภาพ)
    cout << "You will get " << grades[fortune] << " in this 261102." << endl;

    return 0;
}