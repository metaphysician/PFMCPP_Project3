/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

//#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
//struct CarWash
//{

//};
//#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.      
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


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
struct ButtonFactory
{
 //   1) Number of workers
    int numOfWorkers = 30;
 //   2) Number of buttons per month manufactured
    int numOfButtonsPerMo = 10500;
 //   3) Number of button types
    int numOfButtonTypes = 107;   
 //   4) Average cost of button
    float avgCostPerButton = 0.03f;
 //   5) Profit per quarter
    float profitPerQtr = 9450.00f;
//3 things it can do:
 //   1) Manufacture buttons
    void makeButton(int buttonType);
 //   2) Design buttons
    void designButton();
 //   3) Ship buttons to businesses
    void shipButtons(std::string address, int buttonType, int numToShip);

    struct Button
    {
        std::string skuInfo = "BK_U_101";
        unsigned int stockQuantity = 1456;
        std::string style = "through hole";
        std::string color="black";
        int radiusInMm = 20;
        int depthInMm = 5;

        void orderButton( std::string sku, int amount );
        int getRadius( std::string sku );
        std::string getButtonColor( std::string sku );
    };
};
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

struct AlienDetectionAgency //this is slightly revised from 1d
{
    //1) number of aliens on ground
    int aliensOnGround = 731;
    //2) fleet size
    int alienFleetSize = 437;
    //3) intelligence (IQ)
    int avgAlienIntelligence = 130;
    //4) Total Field Reports
    unsigned int totalFieldReports = 1247;
    //5) Total Field Agents
    unsigned int totalFieldAgents = 12541;

    struct FieldReport
    {
        //5) case number
        unsigned int caseNumber = 1296;
        //4) global coordinates detected from
        double coordLatitude = 0.0;
        double coordLongitude = 0.0;
        std::string agentFirstName;
        std::string agentLastName;
        int agentID;
        std::string eventDescription;
        int numOfWitnesses;
        bool verified = false;

        void enterData( std::string field, std::string info );
        void changeWitnessCount(int count);
        void changeAgent( std::string firstName, std::string lastName );
    };
    //1) process reports by field agents
    void reportHandler(FieldReport currReport)
    {
        //2) filter out false reports
        if(!currReport.verified)
        {
            //mark report as unverified
        }
        //3) publish vetted reports
        else
        {
            //verified report
            //publish report to site
        }
    }
}; 

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

struct Instrument
{
 //   1) Pitch frequency
    double instPitchFrq = 1000;
 //   2) Volume amount
    float instVolume = 1.0f;
 //   3) Timbre value
    float instTimbre = 0.5f;
 //   4) Attack time
    int instAttack = 15;
 //   5) Decay time
    int instDecay = 2500;
//3 things it can do:
 //   1) Play a note
    void playNote(double pitch, float volume, float timbre);
 //   2) Bend Pitch
    void sendPitchValue (double pitch);
 //   3) Adjust Timbre
    void changeTimbre (float timbre);
};

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
struct Racecar
{

    //1) Dimensions of car (Length,Width,Height)

    double carLength = 6.25;
    double carWidth = 2.15;
    double carHeight = 1.15;
    //2) Weight of car
    double carWeight = 800;
    //3) Engine cylinder count
    int engCylCount = 6;
    //4) Top speed in MPH/KPH
    unsigned int carTopSpeedMPH = 210;
    // not sure if it's advisable to calculate within a struct, but i did have speed in MPH and KPH
    double carTopSpeedKPH = carTopSpeedMPH * 1.609344;
    //5) Max RPMs on engine
    unsigned int engMaxRPM = 11300;
    //1) start and stop engine
    void engineStart();
    //2) accelerate speed
    void accelerate(unsigned int currSpeed, unsigned int topSpeed)
    {
        if(currSpeed < topSpeed)
        {
            currSpeed += 5;
        }
    }
    //3) set current gear
    int currGear();
};

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
 struct Camera
 {
    //1) Focus amount
    float focusValue = 0.5f;
    //2) Exposure value
    float exposureValue = 1.3f;
    //3) White balance 
    float whiteBalanceValue = 0.8f;
    //4) Aspect ratio selection
    int aspectRatioNumber = 2;
    //5) Resolution (Width X Height)
    int width = 1920;
    int height = 1080;

    //1) Enable/Disable image capture
    void capture(bool state);
    //2) Stream data for Tracking objects and hands
    void captureTrackData( std::string objName, int posX, int posY );
    //3) Adjust Exposure
 };
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
 struct Board
 {
    //1) Height in cm
    int height = 70;
    //2) Width in cm
    int width = 70;
    //3) Active area (Tracked)
    //4) Inactive area (Non Tracked) (Consolidating these two into one bool based on area)
    bool activeArea( int horizontal, int vertical );
    //5) Location in virtual world space (X,Y,Z)
    int worldX;
    int worldY;
    int worldZ;

    //this throws an end of non-void function warning
    //i would have just declared it but i wanted to
    //do two actions in one function (hands and marker)
    int detectObjectType( std::string object, int objHeight )
    {
        //1) Detect object on surface
        if (objHeight <= 0.0f)
        {
            if(object == "marker")
            {
                return 1;
            }
            //2) Detect hand on surface
            else if(object == "Lhand")
            {
                return 2;
            }
            //2) Detect hand on surface
            else if(object == "Rhand")
            {
                return 3;
            }     
        }
    }
    //3) Reposition in world space
    void newPosition(int x, int y, int z);
 };


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

struct FiducialMarker
{
    //1) Value (ID)
    std::string markerID= "marker01";
    //2) Position horizontal
    int posX = 10;
    //3) Position Vertical
    int posY = 100;
    //4) Rotation
    int rotation = 0;
    //5) Elevation
    float elevation = 0.0f;

    //1) send position
    void sendMarkerPos( int X,int Y );
    //2) send value
    void sendMarkerID(std::string ID);
    //3) send rotation
    void sendMarkerRot(int rot);
    //or really you just do all data in one call (avoids race condition)
    void sendMarkerData(std::string ID, int X, int Y, float elev, int rot);
};

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
struct AudioEngine
{
    //1) Master Volume
    float masterVol = 0.5f;
    //2) Section
    int Section = 3;
    //3) Active instrument count
    int activeInst = 4;
    //4) Active Effect count
    int activeEffects = 3;
    //5) External Input volume
    float extInputVol = 0.0f;
    
    //1) produce audio from instruments
    void playAudio();
    //2) apply effects to instruments
    void applyEffect( int effect,int instNumber );
    //3) record sounds
    void recordSound(bool state);
}; 

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
struct MIDIinterface
{
    //1) MIDI Channel
    int midiCh = 0;
    //2) MIDI note number
    int midiNote = 60;
    //3) MIDI velocity
    int midiVel = 80;
    //4) MIDI Controller Value
    int midiCtl = 7;
    //5) MIDI Pitch Bend
    double midiPitchBend = 134567;

    //1) route MIDI data to audio engine
    void routeMidi( int channel, int note, int vel );
    //2) record MIDI input
    void recordMidiIn(bool state);
    //3) play back MIDI recording
    void playMidiData(bool state);
};
/*
Thing 10) Control Interface
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
struct ControlInterface
{
    //1) Camera
    Camera camera;
    //2) Board
    Board board;
    //3) Fiducial Markers
    FiducialMarker marker;
    //4) Audio Engine
    AudioEngine audio;
    //5) MIDI interface
    MIDIinterface midi;

    //1) Detect position (horzontal and vertical) if it's a marker
    void getObjData(std::string objName)
    {
        int X = 0;
        int Y = 0;
        float elev = 0.0f;
        if(objName == "marker")
        {
             X = marker.posX;
             Y = marker.posY;
             elev = marker.elevation;
        }      
        //send the data onwards
        //sendObjPos(objName,X,Y,elev);
    }
    //2) Recognize different markers
    void checkMarker(std::string idString)
    {
        idString = marker.markerID;
        //check idString and do stuff
    }
    //3) Send OSC messages
    void sendOSC( std::string address, float value );
   
};
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
