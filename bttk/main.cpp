#include <iostream>
#include "MedicalImageReader.h"
using namespace std;

int main()
{
    typedef unsigned short PixelType;
    typedef itk::Image<PixelType, 3> ImageType;

    typedef bttk::MedicalImageReader<ImageType> MedicalImageReaderType;

    MedicalImageReaderType::Pointer medical = MedicalImageReaderType::New();

    return 0;
}

