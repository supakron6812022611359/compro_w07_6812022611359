#include <stdio.h>

int main() {
    int level;
    printf("Enter level (1-4):");    //แสดงข้อความเพื่อเพิ่มระดับ
    scanf("%d" , &level);  //รับค่าตัวแปร level

    if (level <= 0) {     //ถ้าระดับน้อยกว่าหรือเท่ากับ 0
        printf("The level below 1 is not allowed\n");    //แสดงข้อความระดับไม่ถูกต้อง
    } else if (level >4) {     //ถ้าระดับมากกว่าหรือเท่ากับ 4
        printf("The level adove 4 isnot allowed\n");    //แสดงข้อความระดับไม่ถูกต้อง
    } else {
    switch (level) {  //ถ้าระดับอยู่ระหว่าง 1-4
        case 1: printf("Beginner\n");break;    //ถ้าระดับเท่ากับ 1
        case 2: printf("intermediate\n");break;   //ถ้าระดับเท่ากับ 2
        case 3: printf("Advanced\n"); break;   //ถ้าระดับเท่ากับ 3
        case 4: printf("Expert\n"); break;    //ถ้าระดับเท่ากับ 4
        default: printf("Invalid level\n");  //ถ้าระดับไม่ถูกต้อง
    }
}    

       return 0;
}