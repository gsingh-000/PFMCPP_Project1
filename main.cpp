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
//  Noun:       police
//  action 1:   police arrests
police.arrest();
//  action 2:   police drives
police.drive();
//  action 3:   police calls for backup
police.callBackup();
//  2)
//  Noun:       athlete
//  action 1:   the athlete runs
athlete.run();
//  action 2:   the athlete jumps
athlete.jump();
//  action 3:   the athlete trains
athlete.train();
//  3)
//  Noun:       dog
//  action 1:   the dog barks
dog.bark();
//  action 2:   the dog plays
dog.play();
//  action 3:   the dog wags its tail
dog.tailWag();
//  4)
//  Noun:       pedestrian
//  action 1:   pedestrian walks
pedestrian.walk();  
//  action 2:   pedestrian stops
pedestrian.stop();
//  action 3:   pedestrian crosses the road
pedestrian.crossRoad();
//  5)
//  Noun:       grandma
//  action 1:   grandma bakes cookies
grandma.bakeCookies();
//  action 2:   grandma gifts money
grandma.giftMoney();
//  action 3:   grandma hugs
grandma.hug();
//  6)
//  Noun:       baby
//  action 1:   baby cries
baby.cry();
//  action 2:   baby sleeps
baby.sleep();
//  action 3:   baby eats
baby.eat();
//  7)
//  Noun:       hotel staff
//  action 1:   the hotel staff cleans your room
hotelStaff.cleanRoom();
//  action 2:   the hotel staff offers room service
hotelStaff.roomService();
//  action 3:   the hotel staff calls to wake you up
hotelStaff.wakeUpCall();
//  8)
//  Noun:       customer
//  action 1:   the customer buys something
customer.buy();
//  action 2:   the customer makes an inquiry
customer.inquire();
//  action 3:   the customer argues 
customer.argue();
//  9)
//  Noun:       phone
//  action 1:   the phone makes a call
phone.call();
//  action 2:   the phone sends a message
phone.message();
//  action 3:   the phone records a video
phone.videoRecord();
//  10)
//  Noun:       airplane
//  action 1:   the airplane flies
airplane.fly();
//  action 2:   the airplane crashes
airplane.crash();
//  action 3:   the airplane lands
airplane.land();


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
