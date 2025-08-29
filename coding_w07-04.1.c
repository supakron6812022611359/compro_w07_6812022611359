#include <stdio.h>

int main() {                    
    int Level ;                                                               
    printf("Enter membership level(1-4): ");   //แสดงข้อความเพื่อป้อนระดับสมาชิก                                  
    scanf("%d", &Level);                       //รับค่าตัวแปร                                  
    
    switch (Level) {   //ตรวจสอบค่าตัวแปร
        case 1:                                                               
            printf("Silver Member :You get 5%% discount\n");break;           //ถ้าระดับเท่ากับ1                                                                    
        case 2:                                                              
            printf("Gold Member :You get 10%% discount+Reward points\n");break;            //ถ้าระดับเท่ากับ2                                                 
        case 3:                                                            
            printf("Platinum Member :You get 15%% discount + Reward points + Birthday gift\n");break;    //ถ้าระดับเท่ากับ3                                                        
        case 4:                                                               
            printf("Diamond Member : You get all prerogative + VIP events\n");break;                                   //ถ้าระดับเท่ากับ4                                                                        
        default:                                                                             
         printf("Invalid membership level\n");                             //ถ้าระดับไม่ถูกต้อง
    }

    return 0; 
}


//if - else if
// ข้อดี: สามารถตรวจสอบเงื่อนไขที่ซับซ้อน และหลากหลายได้ ใช้ตัวดำเนินการเปรียบเทียบได้หลากหลาย เช่น >, <, >=, <=, ==, != 
//และสามารถใช้ตัวดำเนินการตรรกะ (&&, ||) เพื่อรวมเงื่อนไขหลายๆ เงื่อนไขเข้าด้วยกัน
// ข้อเสีย: โค้ดอาจดูยุ่งยากและซับซ้อนเมื่อมีหลายเงื่อนไข และอาจทำให้เกิดข้อผิดพลาดได้ง่ายถ้าไม่ระวังในการจัดการเงื่อนไขต่างๆ
//switch - case
// ข้อดี: โค้ดดูเรียบง่ายและชัดเจนเมื่อมีการตรวจสอบค่าคงที่หลายค่า เช่น การตรวจสอบค่าของตัวแปรที่มีค่าจำกัด
// ข้อเสีย: ไม่สามารถใช้ตัวดำเนินการเปรียบเทียบและใช้ได้เฉพาะกับint, char เท่านั้น และไม่สามารถตรวจสอบเงื่อนไขที่ซับซ้อนได้เหมือน if - else if
// ข้อนี้ควรใช้switch - case เพราะมีการตรวจสอบค่าคงที่หลายค่า (1-4) และโค้ดจะดูเรียบง่ายและชัดเจนกว่าใช้ if - else if