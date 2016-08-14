#ifndef __IMAGE_H__
#define __IMAGE_H__

#include <cv.h>
#include <highgui.h>

class Image
{
  IplImage* p_img;

 public:

  static Image* loadImage(std::string filename);

  Image(IplImage* p_img);
  ~Image();

  IplImage* toIplImage();
  Image* toGrayScale();
  Image* threshold(int degree);
  Image* optimizeThreshold();
  Image* cloneEmpty();
  void drawContours();

  char* rawData();
  int width();
  int height();
  int bytesPerPixel();
  int bytesPerLine();
  int numberContours();

};

#endif // __IMAGE_H__
