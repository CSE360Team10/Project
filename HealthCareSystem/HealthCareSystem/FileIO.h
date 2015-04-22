#ifndef FILEIO_H
#define FILEIO_H

#include "stdafx.h"


//these vars are to be read in from an xml in the future
boost::filesystem::path fileReadPath = "C:/HealthCareSystem";
boost::filesystem::path fileWritePath;

void readInFiles(); 

//operates in infinite loop and will call the rest of the back end based on the file input


#endif