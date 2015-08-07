#ifndef MEDICALIMAGEREADER_H
#define MEDICALIMAGEREADER_H

#include "itkImageFileReader.h"
#include "itkImage.h"

namespace bttk {
    using namespace itk;

    template <class ImageType>
    class MedicalImageReader : public ImageFileReader<ImageType>
    {
    public:
        MedicalImageReader(void);
    };
}

#endif // MEDICALIMAGE_H
