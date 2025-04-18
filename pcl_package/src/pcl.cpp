#include <iostream>

#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/visualization/cloud_viewer.h>

int main(int argc, char **argv) {

    // 创建PointCloud的智能指针
    // pcl::PointCloud<pcl::PointXYZRGBA>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZRGBA>);
    // rabbit.pcd 只有xyz，没有rgb等
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
    // 加载pcd文件到cloud
    if(pcl::io::loadPCDFile("../Resources/thing.pcd", *cloud) == -1){
        PCL_ERROR("No file rabbit.pcd\n");
        return(-1);
    }
    std::cout << cloud->points.size() << std::endl;
    // 点云可视化
    pcl::visualization::CloudViewer viewer("Cloud Viewer");
    viewer.showCloud(cloud);

    // 循环判断是否退出
    while (!viewer.wasStopped()) {
        // 后续也可以在这里对点云做很多处理
    }
    return 0;
}
