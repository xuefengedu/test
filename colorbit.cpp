#include "pxt.h"
namespace colorbit {
	        //%
	        void showColorLeds(ImageLiteral_ leds) {
                MicroBitImage i(imageBytes(leds));
                uBit.display.print(MicroBitImage(imageBytes(leds)), 0, 0, 0, 400);
	        }
}
