#ifndef MY_CAMERA_HPP
#define MY_CAMERA_HPP

#include <opencv2/opencv.hpp>
#include "hikrobot/include/MvCameraControl.h"
#include <yaml-cpp/yaml.h>

namespace auto_aim {
    class MyCamera {
        public:
            MyCamera();
            int open();
            int close();
            int get_image(cv::Mat & img);
        private:
            void * handle_;
            int exposure_time_;
            int gain_;
            int frame_rate_;
    };
} // namespace auto_aim

#endif // MY_CAMERA_HPP