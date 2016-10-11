/**
 * Virtual Operating System
 *
 * File:   main.cpp
 *
 * Description:
 * 
 * Virtual Operating System Main File
 *
 * @author CSE_343_Software Engineering_Group_2
 * @since Monday 10 October 2016
 */

#include <QApplication> // include QApplication Library
#include "VirtualOperatingSystemForm.h" // include VirtualOperatingSystemForm Header

using namespace GtuVirtualOperatingSystem;

int main(int argc, char *argv[]) {

    /**
     * Begin of the Program
     */
    QApplication app(argc, argv);

    /**
     * Create a new VirtualOperatingSystemForm and show that.
     * This is the main window of our Virtual Operating System.
     */
    VirtualOperatingSystemForm virtualOperatingSystemForm;
    virtualOperatingSystemForm.show(); // show the main window

    
    return app.exec();
}
