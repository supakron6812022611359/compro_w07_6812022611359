#include <stdio.h>

int main() {
    float score, midterm;
    printf("midterm score: ");   //แสดงข้อความเพื่อป้อนคะแนน
    scanf("%f", &score);    //            

    if (score >= 50) {  //ถ้าคะแนนมากกว่าหร์อเท่ากับ 50
        midterm = score + (score * 0.05);  //คำนวณคะแนนเพิ่ม 5%
    } else {
        midterm = score; //ถ้าคะแนนน้อยกว่า 50 ไม่ต้องเพิ่มคะแนน
    }
    printf("Final score = %2.f\n", midterm); //แสดงผลคะแนนสุดท้าย
    printf("End of evalution\n"); //แสดงข้อความจบการทำงาน
    
    return 0;
}