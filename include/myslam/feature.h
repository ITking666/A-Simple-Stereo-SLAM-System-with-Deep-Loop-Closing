#ifndef MYSLAM_FEATURE_H
#define MYSLAM_FEATURE_H


#include "myslam/common_include.h"

namespace myslam{

// forward declaration
class Frame;
class MapPoint;

class Feature{
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW;
    typedef std::shared_ptr<Feature> Ptr;

    Feature() {}

    Feature(std::shared_ptr<Frame> frame, const cv::KeyPoint &kp);



public:
    std::weak_ptr<Frame> mpFrame;
    cv::KeyPoint mkpPosition; 
    std::weak_ptr<MapPoint> mpMapPoint; 

    bool mbIsOnLeftFrame = true; // true: on left frame; false: on right frame;



};



}  // namespace myslam

#endif