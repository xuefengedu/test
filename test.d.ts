

/**
 * 自定义图形块
 */
//% weight=100 color=#0fbc11 icon=""
declare namespace test {

    /**
    * Draws an image on the ColorBit screen.
    * @param leds the pattern of LED to turn on/off
    */
    //% blockId="test_show_color_leds" block="ColorBit leds"
    //% imageLiteral=1
    //% weight=95 blockGap=8
    //% icon="\uf00a"
    //% parts="test" shim=test::showColorLeds
    export function showColorLeds(leds: string): string;
}
