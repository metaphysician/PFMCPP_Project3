/*
Project 3 - Part 1d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3. 
Part1 will be broken up into 5 separate steps 
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************
0) move 5-9 to between your Thing 4 and Thing 10.

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
*/

/*


/*
Thing 1) Button Factory
5 properties:
    1) Number of workers
    2) Number of buttons per month manufactured
    3) Number of button types   
    4) Average cost of button
    5) Profit per quarter
3 things it can do:
    1) Manufacture buttons
    2) Design buttons
    3) Ship buttons to businesses
 */

/*
Thing 2) Alien detection agency
5 properties:
    1) number of aliens on ground
    2) fleet size
    3) intelligence (IQ)
    4) global coordinates detected from
    5) case number
3 things it can do:
    1) process reports by field agents
    2) filter out false reports
    3) publish vetted reports
 */

/*
Thing 3) Instrument
5 properties:
    1) Pitch frequency
    2) Volume amount
    3) Timbre value
    4) Attack time
    5) Decay time
3 things it can do:
    1) Play a note
    2) Bend Pitch
    3) Adjust Timbre
 */

/*
Thing 4) Racecar
5 properties:
    1) Dimensions of car (Length,Width,Height)
    2) Weight of car
    3) Engine cylinder count
    4) Top speed in MPH/KPH
    5) Max RPMs on engine
3 things it can do:
    1) start and stop engine
    2) accelerate speed
    3) set current gear
 */

/* Thing 5) Camera
5 properties:
    1) Focus amount
    2) Exposure value
    3) White balance 
    4) Aspect ratio selection
    5) Resolution (Width X Height)
3 things it can do:
    1) Enable/Disable image capture
    2) Stream data for Tracking objects and hands
    3) Adjust Exposure
 */

/*
Thing 6) Board
5 properties:
    1) Height in cm
    2) Width in cm
    3) Active area (Tracked)
    4) Inactive area (Non Tracked)
    5) Location in virtual world space (X,Y,Z)
3 things it can do:
    1) Detect object on surface
    2) Detect hand on surface
    3) Reposition in world space
 */

/*
Thing 7) Fiducial Marker
5 properties:
    1) Value
    2) Position horizontal
    3) Position Vertical
    4) Rotation
    5) Elevation
3 things it can do:
    1) send position
    2) send value
    3) send rotation
 */

/*
Thing 8) Audio Engine
5 properties:
    1) Master Volume
    2) Section
    3) Active instrument count
    4) Active Effect count
    5) External Input volume
3 things it can do:
    1) produce audio from instruments
    2) apply effects to instruments
    3) record sounds 
*/

/*
Thing 9) MIDI Interface
5 properties:
    1) MIDI Channel
    2) MIDI note number
    3) MIDI velocity
    4) MIDI Controller Value
    5) MIDI Pitch Bend
3 things it can do:
    1) route MIDI data to audio engine
    2) record MIDI input
    3) play back MIDI recording
 */
/*
Thing 10) New Control Interface
5 properties:
    1) Camera
    2) Board
    3) Fiducial Markers
    4) Audio Engine
    5) MIDI interface
3 things it can do:
    1) Detect position (horzontal and vertical) of hand or marker
    2) Recognize different markers 
    3) Send OSC messages
 */


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
