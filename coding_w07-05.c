#include <stdio.h>

int main() {
int age, vip_level;        //ประกาศตัวแปร age, vip_level เป็นจำนวนเต็ม
float amount;              //ประกาศตัวแปร amount เป็นจำนวนทศนิยม
int discount = 0;          //ประกาศตัวแปร discount เป็นจำนวนเต็ม


printf("Enter age: ");     //แสดงข้อความเพื่อเพิ่มอายุ
scanf("%d", &age);            //รับค่าตัวแปร age

printf("Enter VIP level (1-5): ");          //แสดงข้อความเพื่อเพิ่มระดับสมาชิก
scanf("%d", &vip_level);                //รับค่าตัวแปร vip_level

printf("Enter purchase amount: ");      //แสดงข้อความเพื่อเพิ่มยอดซื้อ
scanf("%f", &amount);                //รับค่าตัวแปร amount


if (age > 60 || vip_level == 3 || vip_level == 4) {           //ถ้าอายุมากกว่า 60 หรือระดับสมาชิกเท่ากับ 3 หรือ 4
discount = 20;                                              //กำหนดส่วนลดเป็น 20
} else if ((age >= 30 && age <= 40) && amount > 2000) {           //ถ้าอายุอยู่ระหว่าง 30-40 และยอดซื้อมากกว่า 2000
discount = 15;                               //กำหนดส่วนลดเป็น 15%
} else if ((age >= 18 && age <= 25) && amount > 1000) {            //ถ้าอายุอยู่ระหว่าง 18-25 และยอดซื้อมากกว่า 1000
discount = 10;                    //กำหนดส่วนลดเป็น 10%
} else if (vip_level == 5 || amount > 50000) {            //ถ้าระดับสมาชิกเท่ากับ 5 หรือยอดซื้อมากกว่า 50000
discount = 25;                                  //กำหนดส่วนลดเป็น 25%
} else {             //ถ้าไม่เข้าเงื่อนไขข้างต้น
discount = 0; //กำหนดส่วนลดเป็น 0
}


printf("\n--- Customer Info ---\n");                  //แสดงข้อความหัวข้อข้อมูลลูกค้า
printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vip_level, amount);      //แสดงข้อมูลลูกค้า

if (discount > 0) {                   //ถ้าส่วนลดมากกว่า 0
printf("Discount received: %d%%\n", discount);    //แสดงข้อความส่วนลดที่ได้รับ
} else {           //   ถ้าส่วนลดเท่ากับ 0
printf("No discount applied\n");          //แสดงข้อความไม่มีส่วนลด
}

printf("Thank you for shopping with us!\n");               //แสดงข้อความขอบคุณที่ใช้บริการ

return 0;            //จบการทำงานของโปรแกรม