<<<<<<< HEAD
#include "IConfig.h"
#include <string>
#include "tinyxml.h"


//class FileConfig:IConfig {
class FileConfig {
private:
    std::string _path;
    std::string _imagePath;
    std::string _haarcascadePath;
public:
    void read(std::string path);

	std::string getImagePath();
    std::string getHaarcascadePath();
};

void FileConfig::read(std::string path) {

    //TiXmlDocument doc("/home/lisin/projects/cropFace/path.xml");

    this->_path = path;

    TiXmlDocument* doc = new TiXmlDocument(_path);

    if (!doc->LoadFile()) {
        std::cout << "Error loading file";
        exit(1);
    }

    TiXmlElement* xml_path = 0, *xml_imagePath = 0, *xml_haarcascadePath = 0;


    xml_path = doc->FirstChildElement("path");
    xml_imagePath = xml_path->FirstChildElement("imagePath");
    xml_haarcascadePath = xml_path->FirstChildElement("haarcascadePath");


    _imagePath = xml_imagePath->GetText();
    _haarcascadePath = xml_haarcascadePath->GetText();
}

std::string FileConfig::getImagePath() {
    return _imagePath;
}

std::string FileConfig::getHaarcascadePath() {
    return _haarcascadePath;
}
=======
#include "IConfig.h"
#include <string>

class FileConfig:IConfig {
private:
	std::string _path;
public:
	static FileConfig read(std::string path);

	std::string getPath();
};

>>>>>>> 341ddcb8c4e304997ede7e737dd1c1d13a6a1a87
