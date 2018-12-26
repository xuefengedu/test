#include "pxt.h"

/**
 * Functions to operate ColorBit
 */
//% weight=5 color=#2699BF icon="\uf110"
namespace colorbit {

         /**
         * Draws an image on the ColorBit screen.
         * @param color leds the pattern of LED to turn on/off
         * @param interval time in milliseconds to pause after drawing
         */
        //% weight=95 blockGap=8
        //% imageLiteral=1 async
        //% blockId=colorbit_show_color_leds
        //% block="show ColorBit leds" icon="\uf00a"
        //% parts="colorbit"
        void showColorLeds(ImageLiteral_ leds, int interval = 400) {
			//MicroBitImage i(imageBytes(leds));
			basic.showNumber(leds);
        }
}