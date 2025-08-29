#include <stdio.h>

int main() {
    int x,y;        //ประกาศตัวแปร x,y เป็นจำนวนเต็ม
    printf("Enter two values:");  //แสดงข้อความเพื่อเพิ่มค่าตัวแปร
    scanf("%d %d",&x,&y);     //รับค่าตัวแปร x,y
    if (x>y) {  //ถ้าxมากกว่าy
        printf("x is more than y\n");     //แสดงข้อความ x มากกว่า y
    } else if (x<y) {   //ถ้า x น้อยกว่า y
        printf("x is less than y\n");  //แสดงข้อความ x น้อยกว่า y
    } else {
        printf("x is equal to y\n");  //แสดงข้อความ x เท่ากับ y
    }

    return 0;
}