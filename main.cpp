 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    void run(int howFast,bool startWithLeftFoot);

    struct Foot
    {
        void stepforward();
        int stepSize();
    };
    Foot leftFoot;
    Foot rightFoot;
};

void Person::run(int howFast, bool startWithLeftFoot)
{
    if(startWithLeftFoot)
    {
        leftFoot.stepforward();
        rightFoot.stepforward();
    }
    else
    {
        rightFoot.stepforward();
        leftFoot.stepforward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
}


 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */

struct ButtonFactory
{
    int numOfWorkers = 30;
    int numOfButtonsPerMo = 10500;
    int numOfButtonTypes = 107;   
    float avgCostPerButton = 0.03f;
    float profitPerQtr = 9450.00f;

    void makeButton(int buttonType);
    void designButton();
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


struct AlienDetectionAgency //this is slightly revised from 1d
{
    int aliensOnGround = 731;
    int alienFleetSize = 437;
    int avgAlienIntelligence = 130;
    unsigned int totalFieldReports = 1247;
    unsigned int totalFieldAgents = 12541;

    struct FieldReport
    {
        unsigned int caseNumber = 1296;
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

    void reportHandler(FieldReport currReport)
    {
        if(!currReport.verified)
        {
            //mark report as unverified
        }
        else
        {
            //verified report
            //publish report to site
        }
    }
    void getTotalAgents();
    void warnScully();
}; 


struct Instrument
{
    double instPitchFrq = 1000;
    float instVolume = 1.0f;
    float instTimbre = 0.5f;
    int instAttack = 15;
    int instDecay = 2500;
    void playNote(double pitch, float volume, float timbre);
    void sendPitchValue (double pitch);
    void changeTimbre (float timbre);
};

struct Racecar
{
    double carLength = 6.25;
    double carWidth = 2.15;
    double carHeight = 1.15;
    double carWeight = 800;
    int engCylCount = 6;
    unsigned int carTopSpeedMPH = 210;
    double carTopSpeedKPH = carTopSpeedMPH * 1.609344;
    unsigned int engMaxRPM = 11300;
    void engineStart();
    void accelerate(unsigned int currSpeed, unsigned int topSpeed)
    {
        if(currSpeed < topSpeed)
        {
            currSpeed += 5;
        }
    }
    int currGear();
};

 struct Camera
 {
    float focusValue = 0.5f;
    float exposureValue = 1.3f;
    float whiteBalanceValue = 0.8f;
    int aspectRatioNumber = 2;
    int width = 1920;
    int height = 1080;

    void capture(bool state);
    void captureTrackData( std::string objName, int posX, int posY );
    void adjustExposure(float newValue);
 };

 struct Board
 {
    int height = 70;
    int width = 70;
    bool activeArea( int horizontal, int vertical );
    int worldX;
    int worldY;
    int worldZ;

    int detectObjectType( std::string object, int objHeight )
    {
        if (objHeight <= 0.0f)
        {
            if(object == "marker")
            {
                return 1;
            }
            else if(object == "Lhand")
            {
                return 2;
            }
            else if(object == "Rhand")
            {
                return 3;
            }     
        }
    }
    void newPosition(int x, int y, int z);
    void initBoard();
 };

struct FiducialMarker
{
    std::string markerID= "marker01";
    int posX = 10;
    int posY = 100;
    int rotation = 0;
    int elevation = 0.0f;

    void sendMarkerPos( int X,int Y );
    void sendMarkerID(std::string ID);
    void sendMarkerRot(int rot);
    void sendMarkerData(std::string ID, int X, int Y, float elev, int rot);
};

struct AudioEngine
{
    float masterVol = 0.5f;
    int Section = 3;
    int activeInst = 4;
    int activeEffects = 3;
    float extInputVol = 0.0f;
    
    void playAudio();
    void applyEffect( int effect,int instNumber );
    void recordSound(bool state);
}; 

struct MIDIinterface
{
    int midiCh = 0;
    int midiNote = 60;
    int midiVel = 80;
    int midiCtl = 7;
    double midiPitchBend = 134567;

    void routeMidi( int channel, int note, int vel );
    void recordMidiIn(bool state);
    void playMidiData(bool state);
};

struct ControlInterface
{
    Camera camera;
    Board board;
    FiducialMarker marker;
    AudioEngine audio;
    MIDIinterface midi;

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
    void checkMarker(std::string idString)
    {
        idString = marker.markerID;
    }
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
    //ButtonFactory
    ButtonFactory newBtnFactory;
    ButtonFactory::Button newButton;
    newBtnFactory.makeButton( 2335 );
    newBtnFactory.designButton();
    newBtnFactory.shipButtons( "1458 State St, Anytown US, 10106", 2335, 200 );

    newButton.orderButton( "101_DRBQ-BK", 150 );
    newButton.getRadius( "101_DRBQ-BK" );
    newButton.getButtonColor( "101_DRBQ-BK" );
    
    //AlienDetectionAgency
    AlienDetectionAgency newAgency;
    AlienDetectionAgency::FieldReport newReport;
    newAgency.reportHandler(newReport);
    newAgency.getTotalAgents();
    newAgency.warnScully();

    newReport.enterData( "Agent Name:", "John Smith" );
    newReport.changeWitnessCount( 2 );
    newReport.changeAgent( "Jack", "Ryan" );

    //Instrument
    Instrument newInst;
    newInst.playNote( 440.3, 0.75f, 0.90f );
    newInst.sendPitchValue( 1439.45 );
    newInst.changeTimbre( 0.4f );

    //Racecar
    Racecar newRacecar;
    newRacecar.engineStart();
    newRacecar.accelerate( 80, 210 );
    newRacecar.currGear();

    //Camera
    Camera newCamera;
    newCamera.capture( true );
    newCamera.captureTrackData( "Marker01", 480, 640 );
    newCamera.adjustExposure( 0.5f );

    //Board
    Board newBoard;
    newBoard.detectObjectType( "marker", 30 );
    newBoard.newPosition( 400, 800, 23 );
    newBoard.initBoard();

    //FiducialMarker
    FiducialMarker newMarker;
    newMarker.sendMarkerPos( 430, 783 );
    newMarker.sendMarkerID( "marker01" );
    newMarker.sendMarkerRot( 93 );
    newMarker.sendMarkerData( "marker01", 430, 783, 37, 93 );

    //AudioEngine
    AudioEngine newAudioEngine;
    newAudioEngine.playAudio();
    newAudioEngine.applyEffect( 3, 6 );
    newAudioEngine.recordSound( false );

    //MIDIinterface
    MIDIinterface newMIDIinterface;
    newMIDIinterface.routeMidi( 0, 60, 90 );
    newMIDIinterface.recordMidiIn( true );
    newMIDIinterface.playMidiData( false );

    //ControlInterface
    ControlInterface newCtrlInterface;
    newCtrlInterface.getObjData( "Keyboard1" );
    newCtrlInterface.checkMarker( "marker04" );
    newCtrlInterface.sendOSC( "127.34.56.70", 0.85f );

    std::cout << "good to go!" << std::endl;
}
