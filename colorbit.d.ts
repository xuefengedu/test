/**
 * Functions to operate ColorBit
 */
//% weight=5 color=#2699BF icon="\uf110"
declare namespace colorbit {

    /**
	 * Draws an image on the ColorBit screen.
	 * @param color leds the pattern of LED to turn on/off
	 * @param interval time in milliseconds to pause after drawing
	 */
	//% weight=95 blockGap=8
	//% imageLiteral=1 async
	//% blockId=colorbit_show_color_leds
	//% block="show ColorBit leds" icon="\uf00a"
    //% parts="colorbit" interval.defl=400 shim=colorbit::showLeds
    function showColorLeds(leds: string, interval?: int32): void;
}