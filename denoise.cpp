#include <opencv2/highgui/highgui.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main(){
Mat dimg=imread("mata.jpg");
Mat result;

if ( dimg.empty() ) // only fools don't check !
{
   cerr << "could not load image !";
}


fastNlMeansDenoisingColored( dimg, result, 3, 3, 7, 21 );     

namedWindow("denoised Image",1);
imshow("denoised Image",result);

/// Wait until user press some key
waitKey();
return 0;
}
