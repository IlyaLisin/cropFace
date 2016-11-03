<<<<<<< HEAD
#include <vector>
#include "FaceImageProcessing.h"
#include "FileConfig.h"

int main(int argc, char* argv[])
{
	FileConfig* fileConfig = new FileConfig();

    fileConfig->read("/home/lisin/projects/cropFace/path.xml");

    std::string imagePath = fileConfig->getImagePath();
    std::string haarcascadePath = fileConfig->getHaarcascadePath();

//    char* imagePath = fileConfig->getImagePath().c_str();
//    char* imagePath = fileConfig->getImagePath().c_str();
    std::cout<<"\n****\n";
std::cout<<imagePath;
std::cout<<"\n*****\n";

	FaceImageProcessing* faceImageProcessing = new FaceImageProcessing();

    faceImageProcessing->setHaarcascadePath(haarcascadePath);
    faceImageProcessing->setImagePath(imagePath);

	// TO DO readme in redmine ( как все поднять )
	// TO DO config class ( получает настройки, путь)
	
	float landmarks[2 * stasm_NLANDMARKS];

	faceImageProcessing->foundFacePoints(landmarks);
	faceImageProcessing->cropFace(landmarks);
	
	cv::waitKey(0);

	return 0;
}
=======
#include <vector>
#include "FaceImageProcessing.h"

int main(int argc, char* argv[])
{
	FaceImageProcessing* faceImageProcessing = new FaceImageProcessing();

	faceImageProcessing->setHaarcascadePath("F:/Google Drive/Verification_system/crop-face/Debug/");
	faceImageProcessing->setImagePath("F:/Google Drive/Verification_system/crop-face/Debug/testface.jpg");

	// TO DO readme in redmine ( как все поднять )
	// TO DO config class ( получает настройки, путь)
	
	float landmarks[2 * stasm_NLANDMARKS];

	faceImageProcessing->foundFacePoints(landmarks);
	faceImageProcessing->cropFace(landmarks);
	
	cv::waitKey(0);

	return 0;
}
>>>>>>> 341ddcb8c4e304997ede7e737dd1c1d13a6a1a87
