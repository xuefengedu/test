#include "pxt.h"
namespace colorbit {
	        //%
	        string showColorLeds(ImageLiteral_ leds) {
                MicroBitImage i(imageBytes(leds));
                uBit.display.print(MicroBitImage(imageBytes(leds)), 0, 0, 0, 400);
	        return MicroBitImage(imageBytes(leds)).toString();
	        }
}
