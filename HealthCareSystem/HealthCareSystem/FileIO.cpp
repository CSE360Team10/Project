#include "FileIO.h"

void readInFiles(){
	using namespace boost::filesystem;
	try{
		if (exists(fileReadPath)){ //if filereadpath exists
			if (is_directory(fileReadPath)){ //if filereadpath is a directory
				typedef std::vector<path> vec;             // store paths,
				vec v;                                // so we can sort them later

				std::copy(directory_iterator(p), directory_iterator(), back_inserter(v));

				sort(v.begin(), v.end());             // sort, since directory iteration
				// is not ordered on some file systems

				for (vec::const_iterator it(v.begin()), it_end(v.end()); it != it_end; ++it)
				{
					//TODO
					// for each file read do something - in order of file name
				}
			}
		}

	}
	catch (const filesystem_error& ex){
		std::cout << ex.what() << '\n';
	}
}