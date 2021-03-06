#pragma once

#include <iostream>
#include <vector>
#include <cmath>
//#include <opencv2/opencv.hpp>
//#include <opencv2/viz.hpp>

#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/filters/passthrough.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/console/parse.h>

#include <pcl/common/common.h>
#include <pcl/filters/extract_indices.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/filters/crop_box.h>
#include <pcl/kdtree/kdtree.h>
#include <pcl/features/normal_3d.h>
#include <pcl/segmentation/extract_clusters.h>

// Include VelodyneCapture Header
#include "velodyne/velodyneCapture.hpp"
#include "render/render.hpp"
#include "process/processPointClouds.cpp"

void initCamera(CameraAngle setAngle, pcl::visualization::PCLVisualizer::Ptr &viewer);
void makeBox(pcl::visualization::PCLVisualizer::Ptr& viewer,
             std::shared_ptr<ProcessPointClouds<pcl::PointXYZI>> pcd_processor,
             const pcl::PointCloud<pcl::PointXYZI>::Ptr& input_cloud);
void rotation(const pcl::PointCloud<pcl::PointXYZI>::Ptr& cloud, const pcl::PointCloud<pcl::PointXYZI>::Ptr& transformed_cloud, const float& theta);
