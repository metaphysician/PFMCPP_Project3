/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function.

 4) For each instantiated UDT: 
        call some of those amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.




struct ButtonFactory
{
    int numOfWorkers = 30;
    int numOfButtonsPerMo = 10500;
    int numOfButtonTypes = 107;   
    float avgCostPerButton = 0.03f;
    float profitPerQtr = 9450.00f;

    
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

        void orderButton( std::string sku, unsigned int amount );
        int getRadius( std::string sku );
        std::string getButtonColor( std::string sku );
    };

    Button makeButton(std::string sku, unsigned int amount);
};


ButtonFactory::Button ButtonFactory::makeButton(std::string sku, unsigned int amount)
{
    Button button;
    button.skuInfo = sku;
    button.stockQuantity += amount;
    return button;
}

void ButtonFactory::designButton()
{

}

void ButtonFactory::shipButtons(std::string address, int buttonType, int numToShip)
{
    std::cout << std::endl << "Ship To: " << address << std::endl << "Type: " << buttonType << std::endl << "Quantity: " << numToShip << std::endl;
}

void ButtonFactory::Button::orderButton(std::string sku, unsigned int amount)
{   
    stockQuantity -= amount;
    skuInfo = sku;
}

int ButtonFactory::Button::getRadius(std::string sku)
{
    skuInfo = sku;
    return radiusInMm;
}

std::string ButtonFactory::Button::getButtonColor( std::string sku )
{
    sku = skuInfo;
    return color;
}

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

    void reportHandler(FieldReport currReport);

    unsigned int getTotalAgents();
    void warnScully();
}; 

void AlienDetectionAgency::reportHandler( AlienDetectionAgency::FieldReport currReport )
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

unsigned int AlienDetectionAgency::getTotalAgents()
{
    return totalFieldAgents;
}

void AlienDetectionAgency::warnScully()
{
    
}

//figure this one out
void AlienDetectionAgency::FieldReport::enterData(std::string field, std::string info)
{
    field = "John Q. Public";
    info = "agent 1432";
}

void AlienDetectionAgency::FieldReport::changeWitnessCount(int count)
{
    numOfWitnesses = count;
}

void AlienDetectionAgency::FieldReport::changeAgent( std::string firstName, std::string lastName )
{
    agentFirstName = firstName;
    agentFirstName = lastName;
}

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

void Instrument::playNote(double pitch, float volume, float timbre)
{
    instPitchFrq = pitch;
    instVolume = volume;
    instTimbre = timbre;
}

void Instrument::sendPitchValue(double bendAmount)
{
    instPitchFrq += bendAmount;
}

void Instrument::changeTimbre (float timbre)
{
    instTimbre=timbre;
}

struct Racecar
{
    double carLength = 6.25;
    double carWidth = 2.15;
    double carHeight = 1.15;
    double carWeight = 800;
    int engCylCount = 6;
    int currentGear = 0;
    unsigned int carTopSpeedMPH = 210;
    double carTopSpeedKPH = carTopSpeedMPH * 1.609344;
    unsigned int engMaxRPM = 11300;
    void engineStart();
    void accelerate(unsigned int currSpeed);
    int getCurrentGear();
};

void Racecar::engineStart()
{

}

void Racecar::accelerate(unsigned int currSpeed)
{

    if(currSpeed < Racecar::carTopSpeedMPH)
    {
        currSpeed += 5;
    }
}

int Racecar::getCurrentGear()
{
    return currentGear;
}

struct Camera
{
    float focusValue = 0.5f;
    float exposureValue = 1.3f;
    float whiteBalanceValue = 0.8f;
    int aspectRatioNumber = 2;
    int width = 1920;
    int height = 1080;

    void toggleCaptureImage(bool enable);
    void setDimensions( int X, int Y );
    void adjustExposure(float newValue);
};

void Camera::toggleCaptureImage(bool state)
{
    state = !state;
}

void Camera::setDimensions(int x, int y)
{
    width = x;
    height = y;
}

void Camera::adjustExposure(float newValue)
{
    exposureValue = newValue;
}

struct Board
{
    int height = 70;
    int width = 70;
    bool activeArea( int horizontal, int vertical );
    int worldX;
    int worldY;
    int worldZ;

    int detectObjectType( std::string object, int objHeight );
    void newPosition(int x, int y, int z);
    void initBoard();
};

int Board::detectObjectType(std::string object, int objHeight)
{
    //detect if object lower than min height - returns 0 otherwise
    int minHeight = 5;
    height = objHeight;

    if (height <= minHeight)
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
    return 0;
}

void Board::newPosition(int x, int y, int z)
{
    worldX = x;
    worldY = y;
    worldZ = z;
}

void Board::initBoard()
{

}

struct FiducialMarker
{
    std::string markerID= "marker01";
    int posX = 10;
    int posY = 100;
    int rotation = 0;
    int elevation = 0.0f;

    void setMarkerPos( int X,int Y );
    void setMarkerID(std::string ID);
    void setMarkerRot(int rot);
    void setMarkerData(std::string ID, int X, int Y, int elev, int rot);
};

void FiducialMarker::setMarkerPos(int x, int y)
{
    posX = x;
    posY = y;
}

void FiducialMarker::setMarkerID(std::string ID)
{
    markerID = ID;
}

void FiducialMarker::setMarkerRot(int rot)
{
    rotation = rot;
}

void FiducialMarker::setMarkerData(std::string ID, int x, int y, int elev, int rot)
{
    markerID = ID;
    posX = x;
    posY = y;
    elevation = elev;
    rotation = rot;
}

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

void AudioEngine::playAudio()
{

}

void AudioEngine::applyEffect( int effect, int instNumber )
{
    activeEffects = effect;
    activeInst = instNumber;
}

void AudioEngine::recordSound(bool state)
{
    std::cout << "record is:" << state;
}

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

void MIDIinterface::routeMidi( int channel, int note, int vel )
{
    midiCh = channel;
    midiNote = note;
    midiVel = vel;
}

void MIDIinterface::recordMidiIn(bool state)
{
    std::cout << "record MIDI is:" << state;
}

void MIDIinterface::playMidiData(bool state)
{
    std::cout << "play is:" << state;
}

struct ControlInterface
{
    Camera camera;
    Board board;
    FiducialMarker marker;
    AudioEngine audio;
    MIDIinterface midi;

    void getObjData(std::string objName);
    void setMarkerID(std::string idString);
    void sendOSC( std::string address, float value );
};

void ControlInterface::getObjData(std::string objName)
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

void ControlInterface::setMarkerID(std::string idString)
{
    marker.markerID = idString;
}


void ControlInterface::sendOSC(std::string, float)
{

}

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
    Example::main();
    // // ButtonFactory
    // ButtonFactory newBtnFactory;
    // ButtonFactory::Button newButton;
    // newBtnFactory.makeButton( "BK-105_VL", 100 );
    // newBtnFactory.designButton();
    // newBtnFactory.shipButtons( "1458 State St, Anytown US, 10106", 2335, 200 );

    // newButton.orderButton( "101_DRBQ-BK", 150 );
    // newButton.getRadius( "101_DRBQ-BK" );
    // newButton.getButtonColor( "101_DRBQ-BK" );
    
    // //AlienDetectionAgency
    // AlienDetectionAgency newAgency;
    // AlienDetectionAgency::FieldReport newReport;
    // newAgency.reportHandler(newReport);
    // newAgency.getTotalAgents();
    // newAgency.warnScully();

    // newReport.enterData( "Agent Name:", "John Smith" );
    // newReport.changeWitnessCount( 2 );
    // newReport.changeAgent( "Jack", "Ryan" );

    // //Instrument
    // Instrument newInst;
    // newInst.playNote( 440.3, 0.75f, 0.90f );
    // newInst.sendPitchValue( 1439.45 );
    // newInst.changeTimbre( 0.4f );

    // //Racecar
    // Racecar newRacecar;
    // newRacecar.engineStart();
    // newRacecar.accelerate( 80 );
    // newRacecar.currentGear( 3 );

    // //Camera
    // Camera newCamera;
    // newCamera.toggleCaptureImage( true );
    // newCamera.setDimensions( 640, 480 );
    // newCamera.adjustExposure( 0.5f );

    // //Board
    // Board newBoard;
    // newBoard.detectObjectType( "marker", 30 );
    // newBoard.newPosition( 400, 800, 23 );
    // newBoard.initBoard();

    // //FiducialMarker
    // FiducialMarker newMarker;
    // newMarker.setMarkerPos( 430, 783 );
    // newMarker.setMarkerID( "marker01" );
    // newMarker.setMarkerRot( 93 );
    // newMarker.setMarkerData( "marker01", 430, 783, 37, 93 );

    // //AudioEngine
    // AudioEngine newAudioEngine;
    // newAudioEngine.playAudio();
    // newAudioEngine.applyEffect( 3, 6 );
    // newAudioEngine.recordSound( false );

    // //MIDIinterface
    // MIDIinterface newMIDIinterface;
    // newMIDIinterface.routeMidi( 0, 60, 90 );
    // newMIDIinterface.recordMidiIn( true );
    // newMIDIinterface.playMidiData( false );

    // //ControlInterface
    // ControlInterface newCtrlInterface;
    // newCtrlInterface.getObjData( "Keyboard1" );
    // newCtrlInterface.setMarkerID( "marker04" );
    // newCtrlInterface.sendOSC( "127.34.56.70", 0.85f );

    std::cout << "good to go!" << std::endl;
}
