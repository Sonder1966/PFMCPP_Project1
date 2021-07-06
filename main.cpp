#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: Wrist 
//  action 1: the wrist rotates
wrist.rotates();
//  action 2: the wrist swivels
wrist.swivels();
//  action 3: the wrist extends
wrist.extends();
 
//  2)
//  Noun: teeth
//  action 1: teeth chew food
teeth.chewFood();
//  action 2: teeth get cavaties
teeth.getCavaties();
//  action 3: teeth are cleaned with a brush
teeth.cleanedBrush();
 
//  3)
//  Noun: doctors
//  action 1: doctors cure people
doctors.curePeople();
//  action 2: doctors use medicine
doctors.useMedicine();
//  action 3: doctors wear white coats
doctors.wearWhiteCoats();

//  4)
//  Noun: fish
//  action 1: fish swim in water
fish.swimWater();
//  action 2: fish eat food
fish.eatFood();
//  action 3: fish breath underwater
 fish.breathUnderWater();

//  5)
//  Noun: computers
//  action 1:computers process numbers
computers.processNumbers();
//  action 2:computers store data
computers.storeData();
//  action 3: computers use binary code 
computers.useBinaryCode();

//  6) 
//  Noun: eye
//  action 1: the eye opens
eye.opens();
//  action 2: the eye closes
eye.closes();
//  action 3: the eye blinks
eye.blinks();

//  7)
//  Noun: fingers
//  action 1: fingers bend at the joints
fingers.bendAtJoints();
//  action 2: fingers grip things
fingers.gripThings();
//  action 3: fingers play the piano 
fingers.playPiano();

//  8)
//  Noun: cat
//  action 1: the cat chases the mouse
cat.chasesMouse();
//  action 2: the cat runs fast
cat.runsFast();
//  action 3: the cat jumps
cat.jumps();

//  9)
//  Noun: televison
//  action 1: the televison displays the image
televison.displaysImage();
//  action 2: the television makes sound 
televison.makesSound();
//  action 3: the televison distorts sound
televison.distortsSound();

//  10)
//  Noun: clock
//  action 1: the clock displays the time
clock.displaysTime();
//  action 2: the clock uses numbers
clock.usesNumbers();
//  action 3: the clock hangs on the wall
clock.hangsOnWall();


#endif

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
    std::cout << "good to go" << std::endl;
    return 0;
}
