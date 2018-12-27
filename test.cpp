#include "pxt.h"
namespace test {
	        //%
	        string showColorLeds(ImageLiteral_ leds) {
			MicroBitImage i(imageBytes(leds));
			uBit.display.print(i, 0, 0, 0, 400);
			return i.toString();
	        }
}
