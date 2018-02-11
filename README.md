# Light-Bulb-Surprise
We created a device that turns a light bulb into a bead confetti globe! When you push the button that is attached to the light bulb box, instead of expecting for the bulb to be lighten up, you will see many colorful beads bouncing around inside of the light bulb. What a surprise!

# Hardware setup
Materials: 
1. Arduino
2. An opened light bulb. See tutorial here: http://www.instructables.com/id/How-to-open-a-light-bulb-without-breaking-it/
3. A big push button like this one: https://www.sparkfun.com/products/9181
4. A motor, and washers/screwers suitable for that motor: https://www.dfrobot.com/product-1364.html?gclid=Cj0KCQiAh_DTBRCTARIsABlT9MbmSx1uAZmb9qWE8bFKnP7xlz5WyiUIDODyzbtykt2SeEkngHuiDIYaAijgEALw_wcB
5. A potentiometer like this one: https://www.adafruit.com/product/562?gclid=Cj0KCQiAh_DTBRCTARIsABlT9MZuYtNu8MGUa9ZaUPiwVqI1V_8Gbmpv8nNJv5ZI1noHwkUShHjmKGcaAoidEALw_wcB
6. Two boxes, one for staging the button, one for staging the light bulb. Their lasercut files(dxf) are in the repository.
7. Some colorful beads!

Essentially we opened and cleaned a real light bulb, and placed it onto a wooden box. A giant push button is connected to an Arduino board inside of the box, which is then connected to a motor and a potentiometer (for controlling the motor speed). 

The motor is screwed to a wooden plate, and is placed right below the light bulb. A washer is bended into a hyperbolic shape and hooked onto the motor to serve as a "blender blade".  The "blade" part of the motor is located inside of the metal neck part of the light bulb. 

# How does it work
When press the button once, the Arduino will controll the motor to spin. The attached washer will hit the beads inside of the light bulb, causing them to bounce around. When press it once more, the motor will stop.

