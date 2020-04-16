#include "mbed.h"
// #include "USBMouseKeyboard.h"
#include "PS_PAD.h"

Serial pc(USBTX, USBRX); // tx, rx

//LED1: NUM_LOCK
//LED2: CAPS_LOCK
//LED3: SCROLL_LOCK
// BusOut leds(LED1, LED2, LED3);
 
//USBMouseKeyboard
// USBMouseKeyboard key_mouse;

/*
 * ======================
 * VS-C3/VS-RCV3 PIN
 * ======================
 * 1:NC  2:NC
 * 3:DAT 4:CMD
 * 5:SEL 6:CLK
 * 7:+5~7V 8:NC
 * 9:+3V 10:GND
 *
 */
PS_PAD ps2(p5, p6, p7, p21);  //mosi=CMD,miso=DAT,clk=CLK,ss=SEL

// DigitalOut myled[] = {LED1, LED2, LED3, LED4};

int main() {
    pc.baud(115200);
    pc.printf("START\n");
    ps2.init();

    // while(1) {
    //     wait(3.0);
    //     pc.printf("LOOP\n");
    // }

    while(1)
    {   
        ps2.poll();     
        pc.printf("%i ",ps2.read(PS_PAD :: PAD_L2));
        pc.printf("%i ",ps2.read(PS_PAD :: PAD_R2));
        pc.printf("%i ",ps2.read(PS_PAD :: PAD_L1));
        pc.printf("%i ",ps2.read(PS_PAD :: PAD_R1));
        
        pc.printf("%i ",ps2.read(PS_PAD :: PAD_TRIANGLE));
        pc.printf("%i ",ps2.read(PS_PAD :: PAD_CIRCLE));
        pc.printf("%i ",ps2.read(PS_PAD :: PAD_X));
        pc.printf("%i ",ps2.read(PS_PAD :: PAD_SQUARE));
        
        pc.printf("%i ",ps2.read(PS_PAD :: PAD_SELECT));
        // pc.printf("%i ",ps2.read(PS_PAD :: PAD_L3));
        // pc.printf("%i ",ps2.read(PS_PAD :: PAD_R3));
        pc.printf("%i ",ps2.read(PS_PAD :: PAD_START));
        
        pc.printf("%i ",ps2.read(PS_PAD :: PAD_TOP));
        pc.printf("%i ",ps2.read(PS_PAD :: PAD_RIGHT));
        pc.printf("%i ",ps2.read(PS_PAD :: PAD_BOTTOM));
        pc.printf("%i ",ps2.read(PS_PAD :: PAD_LEFT));
        
        pc.printf("%i ",ps2.read(PS_PAD :: ANALOG_LX));
        pc.printf("%i ",ps2.read(PS_PAD :: ANALOG_LY));
        pc.printf("%i ",ps2.read(PS_PAD :: ANALOG_RX));
        pc.printf("%i \n",ps2.read(PS_PAD :: ANALOG_RY));    

        wait(0.05);
    }

    // vsc3.init();
    // while(1) {
    //     vsc3.poll();
    //     myled[0] = vsc3.read(PS_PAD::PAD_CIRCLE);
    //     myled[1] = vsc3.read(PS_PAD::PAD_SQUARE);
    //     myled[2] = vsc3.read(PS_PAD::PAD_TRIANGLE);
    //     myled[3] = vsc3.read(PS_PAD::PAD_X);
    //     wait(0.05);
    // }
}

// int main(void) {
//     while (1) {
//         // key_mouse.mediaControl(KEY_VOLUME_DOWN);
//         key_mouse.printf("Hello World from Mbed\r\n");
//         // key_mouse.keyCode('s', KEY_CTRL);
//         key_mouse.move(20, 0);
//         wait(1);
//         key_mouse.move(0, 20);
//         wait(1);
//         key_mouse.move(0, -20);
//         wait(1);
//         key_mouse.move(-20, 0);
//         wait(1);
//         // key_mouse.keyCode(KEY_SCROLL_LOCK);
//         wait(1);
//         // leds = key_mouse.lockStatus();
//     }
// }