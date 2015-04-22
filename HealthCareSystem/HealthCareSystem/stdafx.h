// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <iterator>
#include <thread>


//the file IO system uses the boost libraries,
//therefore anyone working here should download a copy of 1.57
//you dont have to build boost to use filesystem, only download it
//http://www.boost.org/users/history/version_1_57_0.html
#include <boost/filesystem.hpp>
