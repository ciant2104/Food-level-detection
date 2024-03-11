//FACE_TRACKER_H
#ifndef FACE_TRACKER_H
#define FACE_TRACKER_H
#include <net.h>
#include <cpu.h>
#if defined(USE_NCNN_SIMPLEOCV)
#include "simpleocv.h"
#else
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#endif
#include "benchmark.h"
#include "platform.h"
#include "track/data_def.h"
#include "track/tracker.h"
#include "face_feature/face_feature.h"
#include <stdio.h>
#include <vector>
#include <iostream>
#include "definition.h"
#include "detection/face_detector.h"
