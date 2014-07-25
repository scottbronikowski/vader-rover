
#include "opencv2/video/tracking.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "cv.h"
#include <stdio.h>

using namespace cv;



KalmanFilter kalmaninit(float theta,float ml, float mr, float dt)
{


    KalmanFilter KF(6, 6, 6);

    //A
    KF.transitionMatrix = *(Mat_<float>(6,6) << 1, 0, 0, .5*cos(theta)*dt, .5*cos(theta)*dt,  0,
                                                0, 1, 0, .5*sin(theta)*dt, .5*sin(theta)*dt,  0,
                                                0, 0, 1,                0,                0, dt,
                                                0, 0, 0,                0,                0,  0,
                                                0, 0, 0,                0,          1-ml*dt,  0,
                                                0, 0, 0,                0,                0,  1-mr*dt);
    //B
    KF.controlMatrix = *(Mat_<float>(6,6) << 0, 0, 0, 0, 0, 0,
                                             0, 0, 0, 0, 0, 0,
                                             0, 0, 0, 0, 0, 0,
                                             0, 0, 0, 1, 0, 0,
                                             0, 0, 0, 0, dt,0,
                                             0, 0, 0, 0, 0, dt);

    //H
    KF.measurementMatrix = *(Mat<float>(6,6) << 1, 0, 0, 0, 0, 0,
                                                0, 1, 0, 0, 0, 0,
                                                0, 0, 1, 0, 0, 0,
                                                0, 0, 0, 0, 0, 0,
                                                0, 0, 0, 0, 1, 0,
                                                0, 0, 0, 0, 0, 1);


    return KF;
}


   /*

    for(;;)
    {
        randn( state, Scalar::all(0), Scalar::all(0.1) );
        KF.transitionMatrix = *(Mat_<float>(2, 2) << 1, 1, 0, 1);

        setIdentity(KF.measurementMatrix);
        setIdentity(KF.processNoiseCov, Scalar::all(1e-5));
        setIdentity(KF.measurementNoiseCov, Scalar::all(1e-1));
        setIdentity(KF.errorCovPost, Scalar::all(1));

        randn(KF.statePost, Scalar::all(0), Scalar::all(0.1));

        for(;;)
        {
            Point2f center(img.cols*0.5f, img.rows*0.5f);
            float R = img.cols/3.f;
            double stateAngle = state.at<float>(0);
            Point statePt = calcPoint(center, R, stateAngle);

            Mat prediction = KF.predict();
            double predictAngle = prediction.at<float>(0);
            Point predictPt = calcPoint(center, R, predictAngle);

            randn( measurement, Scalar::all(0), Scalar::all(KF.measurementNoiseCov.at<float>(0)));

            // generate measurement
            measurement += KF.measurementMatrix*state;

            double measAngle = measurement.at<float>(0);
            Point measPt = calcPoint(center, R, measAngle);

            // plot points
            #define drawCross( center, color, d )                                 \
                line( img, Point( center.x - d, center.y - d ),                \
                             Point( center.x + d, center.y + d ), color, 1, CV_AA, 0); \
                line( img, Point( center.x + d, center.y - d ),                \
                             Point( center.x - d, center.y + d ), color, 1, CV_AA, 0 )

            img = Scalar::all(0);
            drawCross( statePt, Scalar(255,255,255), 3 );
            drawCross( measPt, Scalar(0,0,255), 3 );
            drawCross( predictPt, Scalar(0,255,0), 3 );
            line( img, statePt, measPt, Scalar(0,0,255), 3, CV_AA, 0 );
            line( img, statePt, predictPt, Scalar(0,255,255), 3, CV_AA, 0 );

            KF.correct(measurement);

            randn( processNoise, Scalar(0), Scalar::all(sqrt(KF.processNoiseCov.at<float>(0, 0))));
            state = KF.transitionMatrix*state + processNoise;

            imshow( "Kalman", img );
            code = (char)waitKey(100);

            if( code > 0 )
                break;
        }
        if( code == 27 || code == 'q' || code == 'Q' )
            break;
    }

    return 0;
}
*/
