<<<<<<< HEAD
#include <string>
#include "opencv/cv.h"
#include "opencv2/highgui/highgui.hpp"
#include "stasm_lib.h"
//#include "opencv/cv.hpp"

class FaceImageProcessing {
private:
	const int N_BOUND_FACE_POINTS = 16;
    char* _path;
	/*path to xml files
	(haarcascade_frontalface_alt2.xml, haarcascade_mcs_lefteye.xml, haarcascade_mcs_righteye.xml)
	need for detecting face*/
    char* _hcPath;
public:
    void setImagePath(std::string path);
    void setHaarcascadePath(std::string hcPath);
	
	void foundFacePoints(float* landmarks);
	void cropFace(float* landmarks);
};
=======
#include <string>
#include <opencv\cv.h>
#include "opencv2/highgui/highgui.hpp"
#include "stasm_lib.h"

class FaceImageProcessing {
private:
	const int N_BOUND_FACE_POINTS = 16;
	char* path;
	/*path to xml files
	(haarcascade_frontalface_alt2.xml, haarcascade_mcs_lefteye.xml, haarcascade_mcs_righteye.xml)
	need for detecting face*/
	char* hcPath;
public:
	void setImagePath(char* _path);
	void setHaarcascadePath(char* _hcPath);
	
	void foundFacePoints(float* landmarks);
	void cropFace(float* landmarks);
};
>>>>>>> 341ddcb8c4e304997ede7e737dd1c1d13a6a1a87
