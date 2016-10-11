/**
 * Virtual Operating System
 *
 * File:   MailBox.cpp.cc
 *
 * Description:
 *
 * 
 *
 *
 * @author CSE_343_Software Engineering_Group_2
 * @since Monday 10 October 2016
 */

#include "MailBox.h"

namespace
{
    /**
     * For Constant Variables
     * 
     */
}

namespace GtuVirtualOperatingSystem
{     
    /**
    * Default Constructors
    * 
    * -Check MailBox Directory
    * -Check the mailArchive file
    */
    MailBox::MailBox() {
        checkMailBoxDirectory(); // Check MailBox Directory
        checkMailArchiveFile(); // Check MailArchiveFile
    }

    /**
    * Virtual Constructors
    */
    MailBox::~MailBox() {
    }
    
    /**
    * Run MailBox
    * 
    * -Set "widget" variable
    * -Set "isItClosed" variable true
    * -Call the readInput function for read input from the terminal
    */
    void MailBox::runMailBox(){
        setWidget();
        setIsItClosed(true);
        readInput();
    }

    /**
     * This function is read input from the terminal
     * 
     * -Read input from the terminal
     * -Call the parseString function
     * -If "isItClosed" variable true then wait the next input.
     * -if "isItClosed" variable false then interrupt loop
     */
    void MailBox::readInput(){
        
        /**
         * You must implement this function
         * You need some Qt skills.
         */
    }

    /**
     * This function parses the newString, then calls the appropriate function
     * 
     * -parse the newString
     * -if newString is meaningful then call the appropriate command
     * -if newString is not meaningful then call the function
     * "writeGivenStringOnTheScreen" and give the error message.
     * 
     * Available commands:
     *      -readMail
     *      -sendMail
     *      -shutdownMailBox
     *      -helpMailBoxForCommands
     * 
     * @param newString will parsed
     */
    void MailBox::parseString(string newString){
        
        /**
         * You must implement this function
         */
        
    }

    /**
     * Print all mail Archive
     * 
     * -Read mailArchive file. Call the function
     * "writeGivenStringOnTheScreen" and print the all mail Archive.
     */
    void MailBox::readMail(){
        
        /**
         * You must implement this function
         */
        
    }

    /**
     * Send Mail
     * 
     * -Write mail into mailArchive file
     */
    void MailBox::sendMail(){
        
        /**
         * You must implement this function
         */
        
    }

    /**
     * Check the mailbox directory
     * 
     * -Check the mailbox directory which is called "MailBox". 
     * "MailBox" directory is in the our source directory which is called "SourceFileGtuOS" 
     * if the "MailBox" directory doesn't exist then create it.
     * 
     */
    void MailBox::checkMailBoxDirectory(){
        
        /**
         * You must implement this function
         */
        
    }

    /**
     * Check the mailArchive file
     * 
     * -Set mailArchiveFileName
     * -Check the mailArchive file..
     * mailArchive file is in the "MailBox" directory.
     * if the mailArchive file doesn't exist then create it.
     */
    void MailBox::checkMailArchiveFile(){
        
        setMailArchiveFileName("mailArchive.txt");
        
        /**
         * You must implement this function
         */
        
    }

    /**
     * Print Given String On The Screen
     * 
     * @param newString will written
     */
    void MailBox::writeGivenStringOnTheScreen(string newString){
        
        /**
         * You must implement this function
         * You need some Qt skills.
         */
        
    }

    /**
     * Shutdown MailBox
     * 
     * -Set "isItClosed" variable false
     * -Handle other stuff
     */
    void MailBox::shutdownMailBox(){
        
        setIsItClosed(false); // Set "isItClosed" variable false
       
       /**
         * You must implement this function
         */
        
    }

    /**
     * Print All available commands On The Screen
     * 
     * -Use "writeGivenStringOnTheScreen" function for print
     */
    void MailBox::helpMailBoxForCommands(){
        
        /**
         * You must implement this function
         */
        
    }
}