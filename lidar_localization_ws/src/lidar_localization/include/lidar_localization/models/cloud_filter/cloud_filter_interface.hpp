/*
 * @Description: 点云滤波模块的接口
 * @Created Date: 2020-02-09 19:29:50
 * @Author: Ren Qian
 * -----
 * @Last Modified: 2021-11-25 18:53:30
 * @Modified By: Xiaotao Guo
 */

#ifndef LIDAR_LOCALIZATION_MODELS_CLOUD_FILTER_CLOUD_FILTER_INTERFACE_HPP_
#define LIDAR_LOCALIZATION_MODELS_CLOUD_FILTER_CLOUD_FILTER_INTERFACE_HPP_

#include <yaml-cpp/yaml.h>

#include "lidar_localization/sensor_data/cloud_data.hpp"

namespace lidar_localization {
class CloudFilterInterface {
public:
    virtual ~CloudFilterInterface() = default;

    virtual bool Filter(const CloudData::Cloud_Ptr& input_cloud_ptr,
                        CloudData::Cloud_Ptr& filtered_cloud_ptr) = 0;
};
}  // namespace lidar_localization

#endif